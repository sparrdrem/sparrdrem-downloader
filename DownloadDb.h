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
	};
}