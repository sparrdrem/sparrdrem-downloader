; Script created by SparrOSDeveloperTeam
; https://github.com/SparrOSDeveloperTeam

; Setup program compiled in Inno Setup Compiler 5.5.9(a)

[Setup]
AppName=SparrDrem Downloader
AppVersion=1.0.0.0
AppVerName=SparrDrem Downloader v1.0.0.0
AppCopyright=Copyright © 2015-2020 SparrOSDeveloperTeam, 2009-2020 Innovation Inc., 2018-2020 SparrDrem
DefaultDirName={pf}\SparrDrem Downloader
;UninstallDisplayIcon=script-assets\uninstall.ico          - TODO: Get an uninstall Icon
SetupIconFile=script-assets\setup.ico
LicenseFile=script-assets\license.txt
;WizardImageFile=script-assets\logo_164x314_bitmap.bmp     - TODO: Get a bitmap file
;WizardSmallImageFile=script-assets\logo_55x55_bitmap.bmp  - TODO: Get a bitmap file
OutputBaseFilename=sparrdrem-downloader_v1.0.0.0_setup_x86_english
OutputManifestFile=sparrdrem-downloader_v1.0.0.0_setup_x86_english.exe.manifest
DisableWelcomePage=No
DiskSpanning=Yes
DisableStartupPrompt=No
ArchitecturesInstallIn64BitMode=Yes
ArchitecturesAllowed=x86,x64
MinVersion=10.0
;InfoBeforeFile=script-assets\file1.txt                    - TODO: Make a infobefore
;InfoAfterFile=script-assets\file2.txt                     - TODO: Make an infoafter

; TODO: Work on components (below)

;[Types]
;Name: "full"; Description: "Full Installation"
;Name: "compact"; Description: "Base Application Only"
;Name: "custom"; Description: "Custom Installation"
;
;[Components]
; RESERVED

[Tasks]
Name: desktopicon; Description: "Create a &Desktop shortcut"
; TODO: Care for the next tasks
;GroupDescription: "Additional icons:"
;Name: quicklaunchicon; Description: "Create a &Quick Launch icon"; GroupDescription: "Additional icons:"; Flags: unchecked

[Files]
Source: "program-dir\sparrdrem-downloader.exe"; DestDir: "{app}"
;Components:

[Icons]
Name: "{commondesktop}\SparrDrem Downloader"; Filename: "{app}\sparrdrem-downloader.exe"; IconFilename: "{app}\sparrdrem-downloader.exe"; Tasks: desktopicon
Name: "{group}\SparrDrem Downloader"; Filename: "{app}\sparrdrem-downloader.exe"; IconFilename: "{app}\sparrdrem-downloader.exe"

[Run]
Filename: "{app}\sparrdrem-downloader.exe"; Description: "Run &SparrDrem Downloader"; Flags: postinstall nowait skipifsilent