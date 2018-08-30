#!/usr/bin/env bash
set -euxo pipefail

mkdir "$1"
pushd "$1" > /dev/null

ln -s ../lab_03/Makefile .

mkdir src

mkdir test
pushd test > /dev/null
ln -s ../../lab_03/test/tests.cpp .
popd > /dev/null

mkdir include
pushd include > /dev/null
ln -s ../../lab_03/include/catch.hpp .
cat > main.hpp << EOF
#ifndef MAIN_HPP
#define MAIN_HPP

#endif // MAIN_HPP

EOF
popd > /dev/null

popd > /dev/null

