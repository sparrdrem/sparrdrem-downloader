@echo off
title Configuring SparrDrem Downloader Source
echo Creating 'program-dir'
mkdir program-dir
echo Creating 'script-assets'
mkdir script-assets
echo Copying 'changelog.txt' to 'script-assets\changelog.txt'
copy changelog.txt script-assets\
echo Copying 'license.txt' to 'program-dir\license.txt'
copy license.txt program-dir\
echo Copying 'license.txt' to 'script-assets\license.txt'
copy license.txt script-assets\
echo Copying 'sparrdrem-downloader.bmp' to 'script-assets\logo_55x55_bitmap.bmp'
copy sparrdrem-downloader.bmp script-assets\
rename script-assets\sparrdrem-downloader.bmp script-assets\logo_55x55_bitmap.bmp
echo Copying 'sparrdrem-downloader_install.ico' to 'program-dir\setup.ico'
copy sparrdrem-downloader_install.ico program-dir\
rename program-dir\sparrdrem-downloader_install.ico program-dir\setup.ico
echo Copying 'sparrdrem-downloader_install.ico' to 'script-assets\setup.ico
copy sparrdrem-downloader_install.ico script-assets\
rename script-assets\sparrdrem-downloader_install.ico script-assets\setup.ico
echo Copying 'sparrdrem-downloader_uninstall.ico' to 'program-dir\unins000.ico'
copy sparrdrem-downloader_uninstall.ico program-dir\
rename program-dir\sparrdrem-downloader_uninstall.ico program-dir\unins000.ico
echo Copying 'sparrdrem-downloader_uninstall.ico' to 'script-assets\unins000.ico'
copy sparrdrem-downloader_uninstall.ico script-assets\
rename script-assets\sparrdrem-downloader_uninstall.ico script-assets\unins000.ico
echo.
echo You must now supply the base application for setup.
echo.
echo Press any key to exit . . .
pause >nul
exit