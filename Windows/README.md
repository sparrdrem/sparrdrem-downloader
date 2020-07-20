## Compiling

### Compiling the application

Compiling the application requires Visual Studio 2019 (6.7.0 Preview 4 or later) with C++ Desktop Development workload enabled, install the Windows 10 SDK for Build 2004 (10.0.19041.xxx), and select the C++/CLI Development package. Load the project solution file (.sln) into the IDE and it's ready to compile. DO NOT RUN THE DEBUG BUILD USING VISUAL STUDIO AS THE STARTUP PATH VARIABLE SET FOR THE PROGRAM IS DIFFERENT FROM THE EXE!!

### Compiling the setup

Compiling the setup requires the binary files to be built and will require multiple files. You will also need Inno Setup 5.5.9 or later to be installed.

Run `configure.bat` which will create the directories needed to build the setup program. The script assets will also be copied into its appropriate folder. Files that were built in Visual Studio must be placed in `program-dir`.

Run the Inno Setup Compiler. Setup will be put into `output-dir` and will be named `sparrdrem-downloader_v1.1.0.0_setup_x86_english.exe`.