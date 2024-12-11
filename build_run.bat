"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" x64 && cl test.cpp /FeMyApp.exe /link /SUBSYSTEM:WINDOWS /MACHINE:x64 User32.lib && MyApp.exe
