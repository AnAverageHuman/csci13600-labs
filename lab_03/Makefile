OBJDIR := build
EXECUTABLES := main
TESTOBJDIR := $(OBJDIR)/test
TESTEXE := tests
COVFILE := coverage.info
CLEANTARGETS := $(OBJDIR) $(TESTOBJDIR) $(EXECUTABLES) $(TESTEXE) $(COVFILE)

SRCDIR := src
INCDIR := include
TESTDIR := test

SRC := $(filter-out $(EXECUTABLES:%=$(SRCDIR)/%.cpp),$(wildcard $(SRCDIR)/*.cpp))
OBJ := $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRC))
TESTSRC := $(wildcard $(TESTDIR)/*.cpp)
TESTOBJ := $(patsubst $(TESTDIR)/%.cpp,$(TESTOBJDIR)/%.o,$(TESTSRC))

LDLIBS := -pthread
LDFLAGS ?= -Wl,-O1 -Wl,--as-needed

LCOVMAIN := --directory $(OBJDIR)
LCOVTEST := --directory $(TESTOBJDIR)

# one of address, thread, memory
SANITIZE ?= address

ifneq (,$(findstring debug,$(MAKECMDGOALS)))
	override CXX := clang++
	override CXXFLAGS := -O1 -g -Weverything -fno-omit-frame-pointer -fsanitize=$(SANITIZE),undefined
	override LDFLAGS += -fuse-ld=lld
else
	CXXFLAGS ?= -O2 -march=native -pipe
endif

override CXXFLAGS += -I $(INCDIR) -MMD -MP -MF $(OBJDIR)/$*.d -std=c++1z

# near-magic echo taken from Linux's Makefile
# echo all commands if $V is set, replacing echo commands with "true"
ifeq ($(V),)
	quiet := quiet_
endif

# suppress echo of commands if in silent mode (-s)
ifneq ($(findstring s,$(filter-out --%,$(MAKEFLAGS))),)
	quiet := silent_
endif

squote := '
escsq = $(subst $(squote),'\$(squote)',$1)
echo-cmd = $(if $($(quiet)cmd_$(1)), echo '  $(call escsq,$($(quiet)cmd_$(1)))';)
cmd = @$(echo-cmd) $(cmd_$(1))

.PHONY: all help debug valgrind gdb clean run test coverage runtests
.PRECIOUS: $(OBJDIR)/%.d $(TESTOBJDIR)/%.d

all: $(EXECUTABLES)	## build all executables (but not tests)

test: $(TESTEXE)	## build the test executable

debug: clean all	## build with extra debugging information
	-clang-tidy $(SRC)

valgrind: debug	## rebuild and execute valgrind
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(EXECUTABLES)

gdb: debug	## rebuild and execute gdb
	gdb $(EXECUTABLES)

help:	## this help
	@echo "make [-j4] [TARGET]...	where TARGET is one or more of:"
	@awk -F ':.*?## ' '/^[a-zA-Z]/ && NF==2 {printf "  %-26s%s\n", $$1, $$2}' $(MAKEFILE_LIST) | sort

quiet_cmd_clean = CLEAN		$(CLEANTARGETS)
cmd_clean = rm -rf $(CLEANTARGETS)

clean:	## remove all build artifacts
	$(call cmd,clean)

quiet_cmd_mkdir = MKDIR		$@
cmd_mkdir = mkdir -p $@

$(OBJDIR) $(TESTOBJDIR): $(filter clean,$(MAKECMDGOALS))
	$(call cmd,mkdir)

run: all	## run the executables (but not tests)
	@./$(EXECUTABLES)

runtests: test	## run the test executable
	@./$(TESTEXE)

quiet_cmd_codecov = CODECOV	$2
cmd_codecov = curl -s https://codecov.io/bash | bash -s -- -f $(COVFILE) -F $2 || echo "Upload to Codecov failed"

# target, lcov flags
define covtest =
	$(call cmd,clean)
	@$(MAKE) -s $1 CXXFLAGS="-O0 --coverage" LDFLAGS="--coverage -lgcov"
	lcov --quiet --capture --output-file $(COVFILE) $(LCOVMAIN) $2
	lcov --quiet --remove $(COVFILE) '/usr/*' --output-file $(COVFILE)
	lcov --quiet --list $(COVFILE)
	-$(call cmd,codecov,$1)
endef

coverage: 	## run coverage tests and upload to CodeCov
	$(call covtest,run)
	$(call covtest,runtests,$(LCOVTEST))

quiet_cmd_link_o_target = LD		$@
cmd_link_o_target = $(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

$(TESTEXE): $(OBJ) $(TESTOBJ)
	$(call cmd,link_o_target)

$(EXECUTABLES): % : $(OBJ) $(OBJDIR)/%.o
	$(call cmd,link_o_target)

quiet_cmd_cxx_o_cpp = CXX		$@
cmd_cxx_o_cpp = $(COMPILE.cc) $(OUTPUT_OPTION) $<

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(call cmd,cxx_o_cpp)

$(TESTOBJDIR)/%.o: $(TESTDIR)/%.cpp | $(TESTOBJDIR)
	$(call cmd,cxx_o_cpp)

include $(wildcard $(patsubst %,$(OBJDIR)/%.d,$(basename $(SRC))))
