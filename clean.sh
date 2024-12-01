#!/bin/sh
files=(
    .out
    .vs
    .vscode
    **/.vscode
    **.vcxproj
    **/**.vcxproj
    **.vcxproj.**
    **/**.vcxproj.**
    **/Makefile
    Makefile
    **.sln
    **/**.o
    **/**.obj
    **/**.exe
    **/**.out
    **/**.csv
    **.o
    **.obj
    **.exe
    **.out
    class/**.cpp
    class/**.c
    class/**.txt
    class/**.h
    class/**.hpp
    cp/*.cpp
    cp/*.c
    cp/*.txt
    cp/*.h
    cp/*.hpp
)

for file in "${files[@]}"
do
    rm -rf $file
done