; Script created by SparrOSDeveloperTeam
; https://github.com/SparrOSDeveloperTeam

; Setup program compiled in Inno Setup Compiler 5.5.9(a)

[Setup]
AppName=SparrDrem Downloader
AppVersion=1.1.0.0
AppVerName=SparrDrem Downloader v1.1.0.0
AppCopyright=Copyright © 2015-2020 SparrOSDeveloperTeam, 2009-2020 Innovation Inc., 2018-2020 SparrDrem
AppPublisher=SparrDrem
AppPublisherURL=https://sparrdrem.github.io/
AppSupportURL=https://github.com/sparrdrem/sparrdrem-downloader/issues
DefaultDirName={sd}\SparrDrem\SparrDrem Downloader
UninstallIconFile={app}\setup.ico
UninstallDisplayIcon={app}\setup.ico
SetupIconFile=script-assets\setup.ico
LicenseFile=script-assets\license.txt
;WizardImageFile=script-assets\logo_164x314_bitmap.bmp     - TODO: Get a bitmap file
;WizardSmallImageFile=script-assets\logo_55x55_bitmap.bmp  - TODO: Get a bitmap file
OutputDir=output-dir
OutputBaseFilename=sparrdrem-downloader_v1.1.0.0_setup_x86_english
OutputManifestFile=sparrdrem-downloader_v1.1.0.0_setup_x86_english.exe.manifest
DisableWelcomePage=No
DiskSpanning=Yes
DisableStartupPrompt=No
ArchitecturesAllowed=x86 x64
MinVersion=10.0
;InfoBeforeFile=script-assets\file1.txt                    - TODO: Make a infobefore
InfoAfterFile=script-assets\changelog.txt
PrivilegesRequired=admin

; TODO: Work on components (below)

[Types]
Name: "full"; Description: "Full Installation"
Name: "compact"; Description: "Base Application Only"
Name: "custom"; Description: "Custom Installation"; Flags: iscustom

[Components]
Name: "maingui"; Description: "SparrDrem Downloader Application"; Types: full compact custom; Flags: fixed
Name: "vcredist"; Description: "Microsoft Visual C++ 2019 Redistributable Files"; Types: full
Name: "dotnetredist"; Description: "Microsoft .Net Framework 4.7.2 Redistributable Files"; Types: full
Name: "debug"; Description: "Debug Symbols for SparrDrem Downloader"; Types: full
Name: "vcdebug"; Description: "Debug Symbols for Microsoft Visual C++ 2019 Redistributable"; Types: full

[Tasks]
Name: desktopicon; Description: "Create a &Desktop Shortcut"
Name: desktopicon\allusers; Description: "For &All Users"; Flags: exclusive
Name: desktopicon\currentuser; Description: "For the &Current User"; Flags: exclusive unchecked
;GroupDescription: "Additional icons:"              - Todo: Remove this line
Name: quicklaunchicon; Description: "Create a &Quick Launch icon"; Flags: unchecked

[Files]
;Source: "program-dir\.NETFramework,Version=v4.7.2.AssemblyAttributes.cpp"; DestDir: "{app}"; Components:
;Source: "program-dir\.NETFramework,Version=v4.7.2.AssemblyAttributes.obj"; DestDir: "{app}"; Components:
;Source: "program-dir\About.obj"; DestDir: "{app}"; Components:
Source: "program-dir\concrt140.dll"; DestDir: "{app}"; Components: vcredist
Source: "program-dir\license.txt"; DestDir: "{app}"; Components: maingui 
Source: "program-dir\mscorlib.dll"; DestDir: "{app}"; Components: dotnetredist
Source: "program-dir\msvcp140.dll"; DestDir: "{app}"; Components: vcredist
Source: "program-dir\msvcp140_1.dll"; DestDir: "{app}"; Components: vcredist
Source: "program-dir\msvcp140_2.dll"; DestDir: "{app}"; Components: vcredist
Source: "program-dir\msvcp140_codecvt_ids.dll"; DestDir: "{app}"; Components: vcredist
;Source: "program-dir\Resource.res"; DestDir: "{app}"; Components:
Source: "program-dir\setup.ico"; DestDir: "{app}"; Components: maingui
;Source: "program-dir\sparrdre.794D9205.tlog\CL.command.1.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\CL.read.1.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\CL.write.1.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\link.command.1.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\link.read.1.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\link.write.1.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\metagen.read.1.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\metagen.write.1.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\rc.command.1.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\rc.read.1.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\rc.write.1.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\sparrdrem-downloader.lastbuildstate"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\sparrdrem-downloader.read.1u.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdre.794D9205.tlog\sparrdrem-downloader.write.1u.tlog"; DestDir: "{app}\sparrdre.794D9205.tlog"; Components:
;Source: "program-dir\sparrdremdownloader.About.resources"; DestDir: "{app}"; Components:
Source: "program-dir\sparrdrem-downloader.exe"; DestDir: "{app}"; Components: maingui
;Source: "program-dir\sparrdrem-downloader.exe.metagen"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdrem-downloader.exe.recipe"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdrem-downloader.log"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdremdownloader.MainPage.resources"; DestDir: "{app}"; Components:
Source: "program-dir\sparrdrem-downloader.pdb"; DestDir: "{app}"; Components: debug
;Source: "program-dir\sparrdrem-downloader.vcxproj.CopyComplete"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdrem-downloader.vcxproj.FileListAbsolute.txt"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdrem-downloader.vcxproj.GenerateResource.cache"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdrem-downloader.vcxprojAssemblyReference.cache"; DestDir: "{app}"; Components:
Source: "program-dir\System.Data.dll"; DestDir: "{app}"; Components: dotnetredist
Source: "program-dir\System.dll"; DestDir: "{app}"; Components: dotnetredist
Source: "program-dir\System.Drawing.dll"; DestDir: "{app}"; Components: dotnetredist
Source: "program-dir\System.Net.dll"; DestDir: "{app}"; Components: dotnetredist
Source: "program-dir\System.Windows.Forms.dll"; DestDir: "{app}"; Components: dotnetredist
Source: "program-dir\System.Xml.dll"; DestDir: "{app}"; Components: dotnetredist
Source: "program-dir\vc142.pdb"; DestDir: "{app}"; Components: vcdebug
Source: "program-dir\vcamp140.dll"; DestDir: "{app}"; Components: vcredist
Source: "program-dir\vccorlib140.dll"; DestDir: "{app}"; Components: vcredist
Source: "program-dir\vcomp140.dll"; DestDir: "{app}"; Components: vcredist
Source: "program-dir\vcruntime140.dll"; DestDir: "{app}"; Components: vcredist

[Icons]
Name: "{commondesktop}\SparrDrem Downloader"; Filename: "{app}\sparrdrem-downloader.exe"; IconFilename: "{app}\sparrdrem-downloader.exe"; Components: maingui; Tasks: desktopicon\allusers
Name: "{userdesktop}\SparrDrem Downloader"; Filename: "{app}\sparrdrem-downloader.exe"; IconFilename: "{app}\sparrdrem-downloader.exe"; Components: maingui; Tasks: desktopicon\currentuser
Name: "{group}\SparrDrem Downloader"; Filename: "{app}\sparrdrem-downloader.exe"; IconFilename: "{app}\sparrdrem-downloader.exe"; Components: maingui
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\SparrDrem Downloader"; Filename: "{app}\sparrdrem-downloader.exe"; IconFilename: "{app}\sparrdrem-downloader.exe"; Components: maingui; Tasks: quicklaunchicon

[Run]
Filename: "{app}\sparrdrem-downloader.exe"; Description: "Run &SparrDrem Downloader"; Components: maingui; Flags: postinstall nowait skipifsilent