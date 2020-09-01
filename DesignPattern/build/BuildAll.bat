@echo OFF
rem VS2015
SET MSBUILD="C:\Program Files (x86)\MSBuild\14.0\Bin\MSBuild.exe"

SET LAST_DIR=%CD%
SET PROJECT_NAME=DesignPattern
SET SOLUTION_NAME=DesignPattern.sln

SET BUILD_PATH=%LAST_DIR%\%PROJECT_NAME%\src\%SOLUTION_NAME%

SET WIN32PLATFORM=Win32
SET CONFIGURE=ReleaseMT

echo *****************************
echo ** Compile and Link
echo *****************************

%MSBUILD% %BUILD_PATH% /m /t:Rebuild /p:Configuration=Debug;Platform=Win32
%MSBUILD% %BUILD_PATH% /m /t:Rebuild /p:Configuration=Debug;Platform=x64

%MSBUILD% %BUILD_PATH% /m /t:Rebuild /p:Configuration=DebugMT;Platform=Win32
%MSBUILD% %BUILD_PATH% /m /t:Rebuild /p:Configuration=DebugMT;Platform=x64

%MSBUILD% %BUILD_PATH% /m /t:Rebuild /p:Configuration=Release;Platform=Win32
%MSBUILD% %BUILD_PATH% /m /t:Rebuild /p:Configuration=Release;Platform=x64

%MSBUILD% %BUILD_PATH% /m /t:Rebuild /p:Configuration=ReleaseMT;Platform=Win32
%MSBUILD% %BUILD_PATH% /m /t:Rebuild /p:Configuration=ReleaseMT;Platform=x64

cd %LAST_DIR%

:Succeed
echo Successfully finished.
exit /b 0

:Failure
echo Varifying failed.
exit /b 3
