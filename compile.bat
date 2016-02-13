@ECHO off

SET INSTALL64=C:\Program Files (x86)
SET INSTALL32=C:\Program Files
SET VSPATH=Microsoft Visual Studio 14.0\VC\vcvarsall.bat

ECHO Adding Visual Studio tools to PATH...
IF EXIST "%INSTALL64%\%VSPATH%" (
	CALL "%INSTALL64%\%VSPATH%" amd64_x86
	GOTO :compile
	)
IF EXIST "%INSTALL32%\%VSPATH%" (
	CALL "%INSTALL32\%VSPATH"
	GOTO :compile
	)

ECHO ERROR: Please install Visual Studio (or configure this script)!

:compile
ECHO Visual Studio Tools added to PATH.
ECHO Compiling and linking...
IF DEFINED 1 (
	cl main.c /link /out:Windowless-Executable-%1.exe
	GOTO :done
	)

cl main.c /link /out:Windowless-Executable.exe

:done
ECHO Removing .obj file...
DEL /Q main.obj
ECHO Done!
GOTO :eof

:eof