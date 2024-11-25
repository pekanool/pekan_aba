@echo off
chcp 1251 > log
del log

set ONE_FILE=one_file.cpp
set EXE=sort_abashkina.exe
set CHARSET="-finput-charset=utf-8 -fexec-charset=windows-1251"

if exist %EXE% del %EXE%

g++ "%CHARSET%" %ONE_FILE% -o %EXE%

%EXE%
