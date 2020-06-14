/*
 *  DownloadDb.h
 *
 *  Information: this is the C++ Header file used
 *  for the DownloadDb class which offers functions
 *  that downloads project binaries and cleans up the
 *  mess that would otherwise exist in MainPage.h
 */

#pragma once

namespace sparrdremdownloader {

	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::Windows::Forms;
	using namespace System::Net;

	class DownloadDb
	{
	public: static void DownloadCasmOS_v0026alpha_x8664_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/casmOS/releases/download/v0.0.2.6-alpha/";
		String^ fileName = "casmos-x86_64_0.0.2.6-alpha.iso", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadCasmOS_v002alpha_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/casmOS/releases/download/v0.0.2-alpha/";
		String^ fileName = "casmos-x86_64_0.0.2-alpha.iso", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadCasmOS_v001alpha_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/casmOS/releases/download/v0.0.1-alpha/";
		String^ fileName = "casmos-x86_64_0.0.1-alpha.iso", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadCasmOS_v000alpha_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/casmOS/releases/download/v0.0.0-alpha/";
		String^ fileName = "casmos-x86_64_0.0.0-alpha.iso", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadCdosk_v001_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/cd-osk/releases/download/v0.0.1/";
		String^ fileName = "cd-osk_v0.0.1.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadCdosk_v001prototype04092020_x86_english()
	{
		String^ remoteUri = "https://cdn.discordapp.com/attachments/555578702713323525/715354102086893712/";
		String^ fileName = "cd-osk-proto.7z", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadCommodoreOSVisionII_b3200_x64_english()
	{
		String^ remoteUri = "https://archive.org/download/cos-vii-b3200";
		String^ fileName = "COS-Vision-II-B3200.iso", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadDremDOS_v001_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/dremdos/releases/download/0.0.1/";
		String^ fileName = "DremDOS-0.0.1.iso", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadDremDOS_v001rc1_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/dremdos/releases/download/0.0.1-RC1/";
		String^ fileName = "DremDOS-0.0.1-RC1.iso", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadDremDOS_v001prototype04082020_x86_english()
	{
		String^ remoteUri = "https://cdn.discordapp.com/attachments/555578702713323525/697568127642501150/";
		String^ fileName = "DremDOS-0.0.1-PROTO1.iso", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadDremOS_v060_x64_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/DremOS/releases/download/0.6.0/";
		String^ fileName = "DremOS-0.6.0.iso", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadDTools_v12_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/dtools/releases/download/1.2/";
		String^ fileName = "dtools-1.2.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadDTools_v11_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/dtools/releases/download/1.1/";
		String^ fileName = "dtools-1.1.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadDTools_v10_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/dremdos/releases/download/1.0/";
		String^ fileName = "dtools-1.0.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGBAUnix_v00_arm7_english()
	{
		String^ remoteUri = "https://github.com/SparrOSDeveloperTeam/gbaunix-0.0/releases/download/v0.0d/";
		String^ fileName = "unixv5.gba", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v05plus_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.5-plus/";
		String^ fileName = "gencode-plus_v0.5-setup.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v05preview_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.5-preview/";
		String^ fileName = "gencode_v0.5-setup.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v05previewbin_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.5-preview/";
		String^ fileName = "gencode_v0.5-bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v05previewgencmdonly_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.5-preview/";
		String^ fileName = "gencmd_v0.5-bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v05debug_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.5-dbg/";
		String^ fileName = "gencode_v0.5-setup-dbg.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v05debugbin_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.5-dbg/";
		String^ fileName = "gencode_v0.5-bin-dbg.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v04legacy_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.4-legacy/";
		String^ fileName = "gencode_v0.4-setup-legacy.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v04preview_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.4-preview/";
		String^ fileName = "gencode_v0.4-setup.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v04previewbin_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.5-preview/";
		String^ fileName = "gencode_v0.4-bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v04previewgencmdonly_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.4-preview/";
		String^ fileName = "gencmd_v0.4-bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v04preview_x86_spanish()
	{
		String^ remoteUri = "https://github.com/SparrOSInternational/gencode-es/releases/download/v0.4-preview/";
		String^ fileName = "gencode_v0.4-setup-es.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v04previewbin_x86_spanish()
	{
		String^ remoteUri = "https://github.com/SparrOSInternational/gencode-es/releases/download/v0.4-preview/";
		String^ fileName = "gencode_v0.4-bin-es.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v04previewgencmdonly_x86_spanish()
	{
		String^ remoteUri = "https://github.com/SparrOSInternational/gencode-es/releases/download/v0.4-preview/";
		String^ fileName = "gencmd_v0.4-bin-es.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v04preview_x86_multilanguage()
	{
		String^ remoteUri = "https://github.com/SparrOSInternational/gencode-mu/releases/download/v0.4-preview/";
		String^ fileName = "gencode_v0.4-setup-mu.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v03preview_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.3-preview/";
		String^ fileName = "gencode_v0.3-setup.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v03previewbin_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.3-preview/";
		String^ fileName = "gencode_v0.3-bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v03previewgencmdonly_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.3-preview/";
		String^ fileName = "gencmd_v0.3-bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v02preview_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.2-preview/";
		String^ fileName = "gencode_v0.2-setup.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v02previewbin_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.2-preview/";
		String^ fileName = "gencode_v0.2-bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v02previewgencmdonly_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.2-preview/";
		String^ fileName = "gencmd_v0.2-bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v01bpreviewgencmdonly_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.1b-preview/";
		String^ fileName = "gencmd_v0.1b-bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v01preview_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.1-preview/";
		String^ fileName = "gencode_v0.1-setup.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadGencode_v01previewbin_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/gencode/releases/download/v0.1-preview/";
		String^ fileName = "gencode_v0.1-bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadLALO_v0002windows_x64_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/lalo-archive/releases/download/v0.0.0.2-prealpha/";
		String^ fileName = "lalo-eda_v0.0.0.2_win64_setup.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadLALO_v0002windows_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/lalo-archive/releases/download/v0.0.0.2-prealpha/";
		String^ fileName = "lalo-eda_v0.0.0.2_win32_setup.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadLALO_v0002windowsbin_x64_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/lalo-archive/releases/download/v0.0.0.2-prealpha/";
		String^ fileName = "lalo-eda_v0.0.0.2_win64_bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadLALO_v0002windowsbin_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/lalo-archive/releases/download/v0.0.0.2-prealpha/";
		String^ fileName = "lalo-eda_v0.0.0.2_win32_bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadLALO_v0002linux_x64_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/lalo-archive/releases/download/v0.0.0.2-prealpha/";
		String^ fileName = "lalo-eda_v0.0.0.2_unix64_setup.deb", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadLALO_v0002linux_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/lalo-archive/releases/download/v0.0.0.2-prealpha/";
		String^ fileName = "lalo-eda_v0.0.0.2_unix32_setup.deb", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadLALO_v0002linuxbin_x64_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/lalo-archive/releases/download/v0.0.0.2-prealpha/";
		String^ fileName = "lalo-eda_v0.0.0.2_unix64_bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadLALO_v0002linuxbin_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/lalo-archive/releases/download/v0.0.0.2-prealpha/";
		String^ fileName = "lalo-eda_v0.0.0.2_unix32_bin.zip", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadOTN_v011server_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/otn/releases/download/0.1.1/";
		String^ fileName = "otn-server.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadOTN_v011client_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/otn/releases/download/0.1.1/";
		String^ fileName = "OTNClient.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadOTN_v010_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/otn/releases/download/0.1.0/";
		String^ fileName = "otn-server.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadOTN_v008_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/otn/releases/download/0.0.8/";
		String^ fileName = "otn-server.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadOTN_v007_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/otn/releases/download/0.0.7/";
		String^ fileName = "otn-server.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Agent007 is stealing \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadOTN_v006_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/otn/releases/download/0.0.6/";
		String^ fileName = "otn-server.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadOTN_v005_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/otn/releases/download/0.0.5/";
		String^ fileName = "otn-server.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadOTN_v004_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/otn/releases/download/0.0.4/";
		String^ fileName = "otn-server.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadOTN_v003_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/otn/releases/download/0.0.3/";
		String^ fileName = "otn-server.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadOTN_v002_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/otn/releases/download/0.0.2/";
		String^ fileName = "otn-server.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	public: static void DownloadOTN_v001_x86_english()
	{
		String^ remoteUri = "https://github.com/sparrdrem/otn/releases/download/0.0.1/";
		String^ fileName = "otn-client.exe", ^ myStringWebResource = nullptr;

		WebClient^ wcdl = gcnew WebClient;

		myStringWebResource = String::Concat(remoteUri, fileName);
		Debug::WriteLine("Downloading File \"{0}\" from \"{1}\" .......\n\n", fileName, myStringWebResource);

		wcdl->DownloadFile(myStringWebResource, fileName);
		Debug::WriteLine("Successfully Downloaded File \"{0}\" from \"{1}\"", fileName, myStringWebResource);
		Debug::WriteLine("\nDownloaded file saved in the following file system folder:\n\t {0}", Application::StartupPath);
	}
	};
}