#!/usr/bin/env bash
set -euo pipefail
shopt -s extglob
shopt -s nullglob

export TERM=xterm

tput setaf 5
echo "Environment variables:"
for i in {CC,CXX,LD,AR,RANLIB}; do
    [ -z "${!i-}" ] || printf "    %-6s  %-10s %s\\n" "$i" "${!i}" "$(readlink -f "$(command -v ${!i})")"
done
tput sgr0

for i in ./lab_+([0-9]) ./lab_extra[0-9]; do
    tput setaf 6
    echo "  ENTER                $i"
    tput sgr0

    pushd "$i" > /dev/null || exit

    if [ -f Makefile ]; then
        if [ -v CC ]; then # gcov OOM error: CC only defined in clang containers
            make -j4
            make -j4 tests
            make -j4 run
        else
            make coverage
        fi
    else
        echo "No 'Makefile' in this directory."
    fi

    tput setaf 6
    echo "   EXIT                $i"
    tput sgr0

    popd > /dev/null || exit
done

