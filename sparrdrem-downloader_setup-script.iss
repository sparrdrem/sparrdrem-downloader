; Script created by SparrOSDeveloperTeam
; https://github.com/SparrOSDeveloperTeam

; Setup program compiled in Inno Setup Compiler 5.5.9(a)

[Setup]
AppName=SparrDrem Downloader
AppVersion=1.0.0.0
AppVerName=SparrDrem Downloader v1.0.0.0
AppCopyright=Copyright © 2015-2020 SparrOSDeveloperTeam, 2009-2020 Innovation Inc., 2018-2020 SparrDrem
DefaultDirName={sd}\SparrDrem\SparrDrem Downloader
UninstallIconFile={app}\unins000.ico
UninstallDisplayIcon={app}\unins000.ico
SetupIconFile=script-assets\setup.ico
LicenseFile=script-assets\license.txt
;WizardImageFile=script-assets\logo_164x314_bitmap.bmp     - TODO: Get a bitmap file
;WizardSmallImageFile=script-assets\logo_55x55_bitmap.bmp  - TODO: Get a bitmap file
OutputDir=output-dir
OutputBaseFilename=sparrdrem-downloader_v1.0.0.0_setup_x86_english
OutputManifestFile=sparrdrem-downloader_v1.0.0.0_setup_x86_english.exe.manifest
DisableWelcomePage=No
DiskSpanning=Yes
DisableStartupPrompt=No
;ArchitecturesInstallIn64BitMode=x64                       - TODO: Remove this line
ArchitecturesAllowed=x86 x64
MinVersion=10.0
;InfoBeforeFile=script-assets\file1.txt                    - TODO: Make a infobefore
;InfoAfterFile=script-assets\file2.txt                     - TODO: Make an infoafter
PrivilegesRequired=admin

; TODO: Work on components (below)

;[Types]
;Name: "full"; Description: "Full Installation"
;Name: "compact"; Description: "Base Application Only"
;Name: "custom"; Description: "Custom Installation"
;
;[Components]
; RESERVED

[Tasks]
Name: desktopicon; Description: "Create a &Desktop Shortcut"
;Name: desktopicon\allusers; Description: "For &All Users"
;Name: desktopicon\currentuser; Description: "For the &Current User"
; TODO: Care for the next tasks
;GroupDescription: "Additional icons:"
;Name: quicklaunchicon; Description: "Create a &Quick Launch icon"; GroupDescription: "Additional icons:"; Flags: unchecked

[Files]
;Source: "program-dir\.NETFramework,Version=v4.7.2.AssemblyAttributes.cpp"; DestDir: "{app}"; Components:
;Source: "program-dir\.NETFramework,Version=v4.7.2.AssemblyAttributes.obj"; DestDir: "{app}"; Components:
;Source: "program-dir\About.obj"; DestDir: "{app}"; Components:
Source: "program-dir\concrt140.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\license.txt"; DestDir: "{app}"
;Components: 
Source: "program-dir\mscorlib.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\msvcp140.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\msvcp140_1.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\msvcp140_2.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\msvcp140_codecvt_ids.dll"; DestDir: "{app}"
;Components:
;Source: "program-dir\Resource.res"; DestDir: "{app}"; Components:
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
Source: "program-dir\sparrdrem-downloader.exe"; DestDir: "{app}"
;Components:
;Source: "program-dir\sparrdrem-downloader.exe.metagen"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdrem-downloader.exe.recipe"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdrem-downloader.log"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdremdownloader.MainPage.resources"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdrem-downloader.pdb"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdrem-downloader.vcxproj.CopyComplete"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdrem-downloader.vcxproj.FileListAbsolute.txt"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdrem-downloader.vcxproj.GenerateResource.cache"; DestDir: "{app}"; Components:
;Source: "program-dir\sparrdrem-downloader.vcxprojAssemblyReference.cache"; DestDir: "{app}"; Components:
Source: "program-dir\System.Data.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\System.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\System.Drawing.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\System.Net.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\System.Windows.Forms.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\System.Xml.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\unins000.ico"; DestDir: "{app}"
;Components:
;Source: "program-dir\vc142.pdb"; DestDir: "{app}"; Components:
Source: "program-dir\vcamp140.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\vccorlib140.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\vcomp140.dll"; DestDir: "{app}"
;Components:
Source: "program-dir\vcruntime140.dll"; DestDir: "{app}"
;Components:

[Icons]
Name: "{commondesktop}\SparrDrem Downloader"; Filename: "{app}\sparrdrem-downloader.exe"; IconFilename: "{app}\sparrdrem-downloader.exe"; Tasks: desktopicon
;Name: "{userdesktop}\SparrDrem Downloader"; Filename: "{app}\sparrdrem-downloader.exe"; IconFilename: "{app}\sparrdrem-downloader.exe"; Tasks: desktopicon\currentuser
Name: "{group}\SparrDrem Downloader"; Filename: "{app}\sparrdrem-downloader.exe"; IconFilename: "{app}\sparrdrem-downloader.exe"

[Run]
Filename: "{app}\sparrdrem-downloader.exe"; Description: "Run &SparrDrem Downloader"; Flags: postinstall nowait skipifsilent