#!/bin/bash

./cmake_build_release.sh -d
echo "Running cppcheck for release build (takes a while)..."
cppcheck --project=.cmake_build_release/compile_commands.json --suppress=*:third-party/rapidjson/* --quiet || exit $?
