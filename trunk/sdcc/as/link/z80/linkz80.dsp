# Microsoft Developer Studio Project File - Name="linkz80" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=linkz80 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "linkz80.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "linkz80.mak" CFG="linkz80 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "linkz80 - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "linkz80 - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "linkz80 - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release_z80"
# PROP BASE Intermediate_Dir "Release_z80"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release_z80"
# PROP Intermediate_Dir "Release_z80"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /I ".." /D "NDEBUG" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "INDEXLIB" /D "SDK" /YX /FD /c
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 /nologo /subsystem:console /machine:I386 /out:"..\..\..\bin_vc\sdldz80.exe"
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "linkz80 - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug_z80"
# PROP BASE Intermediate_Dir "Debug_z80"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug_z80"
# PROP Intermediate_Dir "Debug_z80"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /I ".." /D "_DEBUG" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "INDEXLIB" /D "SDK" /YX /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:console /debug /machine:I386 /out:"..\..\..\bin_vc\sdldz80.exe" /pdbtype:sept
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "linkz80 - Win32 Release"
# Name "linkz80 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\lk_readnl.c
# End Source File
# Begin Source File

SOURCE=..\lkaomf51.c
# End Source File
# Begin Source File

SOURCE=..\lkar.c
# End Source File
# Begin Source File

SOURCE=.\lkarea.c
# End Source File
# Begin Source File

SOURCE=..\lkdata.c
# End Source File
# Begin Source File

SOURCE=..\lkeval.c
# End Source File
# Begin Source File

SOURCE=..\lkgb.c
# End Source File
# Begin Source File

SOURCE=..\lkgg.c
# End Source File
# Begin Source File

SOURCE=..\lkhead.c
# End Source File
# Begin Source File

SOURCE=..\lkihx.c
# End Source File
# Begin Source File

SOURCE=..\lklex.c
# End Source File
# Begin Source File

SOURCE=..\lklib.c
# End Source File
# Begin Source File

SOURCE=..\lklibr.c
# End Source File
# Begin Source File

SOURCE=..\lklist.c
# End Source File
# Begin Source File

SOURCE=..\lkmain.c
# End Source File
# Begin Source File

SOURCE=..\lkmem.c
# End Source File
# Begin Source File

SOURCE=..\lknoice.c
# End Source File
# Begin Source File

SOURCE=..\lkrel.c
# End Source File
# Begin Source File

SOURCE=..\lkrloc.c
# End Source File
# Begin Source File

SOURCE=..\lks19.c
# End Source File
# Begin Source File

SOURCE=..\lksdcclib.c
# End Source File
# Begin Source File

SOURCE=..\lksym.c
# End Source File
# Begin Source File

SOURCE=..\sdld.c
# End Source File
# Begin Source File

SOURCE=..\..\asxxsrc\strcmpi.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\aslink.h
# End Source File
# Begin Source File

SOURCE=..\asxxxx_config.h
# End Source File
# Begin Source File

SOURCE=..\getline.h
# End Source File
# Begin Source File

SOURCE=..\lk_readnl.h
# End Source File
# Begin Source File

SOURCE=..\lkar.h
# End Source File
# Begin Source File

SOURCE=..\lklibr.h
# End Source File
# Begin Source File

SOURCE=..\lkrel.h
# End Source File
# Begin Source File

SOURCE=..\sdld.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project
