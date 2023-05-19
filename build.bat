@echo off

rem if exist r.exe erase r.exe
..\..\TCC\Tinycc\Win32\tcc.exe r.c -o r.exe -lwinmm -lgdi32 -lkernel32 -lmsvcrt -luser32 -ladvapi32
if exist r.exe r.exe Wow i am happy
if exist r.exe r.exe HELLO WORLD 
rem PAUSE
rem cls

