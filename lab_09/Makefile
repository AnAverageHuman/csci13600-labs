include ../lab_03/Makefile

PEXE := poem
CLEANTARGETS += $(PEXE)

.PHONY: runpoem

runpoem: $(PEXE)
	@./$(PEXE)

$(PEXE): % : %.cpp | $(OBJDIR)
	$(call cmd,link_o_target)

