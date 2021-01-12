/*
 *
 * MainPage.h
 *
 * Copyright (C) SparrOSDeveloperTeam 2015-2020
 * Copyright (C) Innovation Inc. 2009-2020
 * Copyright (C) SparrDrem 2018-2020
 *
 * This is the code for the form that launches at startup. To properly compile you need to
 * first build DownloadDB.dll.
*/

#pragma once

//#include "..\downloaddb\DownloadDb.h"
#include "About.h"
#include "ManageDownloads.h"

namespace sparrdremdownloader {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Net;
	using namespace System::IO;
	using namespace sparrdremdownloader;

	/// <summary>
	/// Summary for MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ComboBox^ ProjectComboBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ ArchComboBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ LanguageComboBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ VersionComboBox;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Button^ DownloadBtn;


	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ manageBtn;
	private: System::Windows::Forms::CheckBox^ launchInstallBox;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainPage::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ProjectComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ArchComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LanguageComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->VersionComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->DownloadBtn = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->manageBtn = (gcnew System::Windows::Forms::Button());
			this->launchInstallBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// ProjectComboBox
			// 
			this->ProjectComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ProjectComboBox->FormattingEnabled = true;
			this->ProjectComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				resources->GetString(L"ProjectComboBox.Items"),
					resources->GetString(L"ProjectComboBox.Items1"), resources->GetString(L"ProjectComboBox.Items2"), resources->GetString(L"ProjectComboBox.Items3"),
					resources->GetString(L"ProjectComboBox.Items4"), resources->GetString(L"ProjectComboBox.Items5"), resources->GetString(L"ProjectComboBox.Items6"),
					resources->GetString(L"ProjectComboBox.Items7"), resources->GetString(L"ProjectComboBox.Items8"), resources->GetString(L"ProjectComboBox.Items9"),
					resources->GetString(L"ProjectComboBox.Items10"), resources->GetString(L"ProjectComboBox.Items11"), resources->GetString(L"ProjectComboBox.Items12"),
					resources->GetString(L"ProjectComboBox.Items13"), resources->GetString(L"ProjectComboBox.Items14")
			});
			resources->ApplyResources(this->ProjectComboBox, L"ProjectComboBox");
			this->ProjectComboBox->Name = L"ProjectComboBox";
			this->ProjectComboBox->TextChanged += gcnew System::EventHandler(this, &MainPage::ProjectComboBox_MouseHover);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// ArchComboBox
			// 
			this->ArchComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			resources->ApplyResources(this->ArchComboBox, L"ArchComboBox");
			this->ArchComboBox->FormattingEnabled = true;
			this->ArchComboBox->Name = L"ArchComboBox";
			this->ArchComboBox->TextChanged += gcnew System::EventHandler(this, &MainPage::ArchComboBox_SelectedIndexChanged);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// LanguageComboBox
			// 
			this->LanguageComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			resources->ApplyResources(this->LanguageComboBox, L"LanguageComboBox");
			this->LanguageComboBox->FormattingEnabled = true;
			this->LanguageComboBox->Name = L"LanguageComboBox";
			this->LanguageComboBox->TextChanged += gcnew System::EventHandler(this, &MainPage::LanguageComboBox_SelectedIndexChanged);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// VersionComboBox
			// 
			this->VersionComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			resources->ApplyResources(this->VersionComboBox, L"VersionComboBox");
			this->VersionComboBox->FormattingEnabled = true;
			this->VersionComboBox->Name = L"VersionComboBox";
			this->VersionComboBox->TextChanged += gcnew System::EventHandler(this, &MainPage::VersionComboBox_SelectedIndexChanged);
			// 
			// ExitBtn
			// 
			resources->ApplyResources(this->ExitBtn, L"ExitBtn");
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->UseVisualStyleBackColor = true;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &MainPage::ExitBtn_Click);
			// 
			// DownloadBtn
			// 
			resources->ApplyResources(this->DownloadBtn, L"DownloadBtn");
			this->DownloadBtn->Name = L"DownloadBtn";
			this->DownloadBtn->UseVisualStyleBackColor = true;
			this->DownloadBtn->Click += gcnew System::EventHandler(this, &MainPage::DownloadBtn_Click);
			// 
			// linkLabel1
			// 
			resources->ApplyResources(this->linkLabel1, L"linkLabel1");
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->TabStop = true;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainPage::linkLabel1_LinkClicked);
			// 
			// manageBtn
			// 
			resources->ApplyResources(this->manageBtn, L"manageBtn");
			this->manageBtn->Name = L"manageBtn";
			this->manageBtn->UseVisualStyleBackColor = true;
			this->manageBtn->Click += gcnew System::EventHandler(this, &MainPage::manageBtn_Click);
			// 
			// launchInstallBox
			// 
			resources->ApplyResources(this->launchInstallBox, L"launchInstallBox");
			this->launchInstallBox->Name = L"launchInstallBox";
			this->launchInstallBox->UseVisualStyleBackColor = true;
			// 
			// MainPage
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->launchInstallBox);
			this->Controls->Add(this->manageBtn);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->DownloadBtn);
			this->Controls->Add(this->ExitBtn);
			this->Controls->Add(this->VersionComboBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->LanguageComboBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ArchComboBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ProjectComboBox);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainPage";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		#pragma endregion
		private: System::Void ProjectComboBox_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			if (this->VersionComboBox->Enabled == true)
			{
				this->VersionComboBox->Items->Clear();
				this->VersionComboBox->Enabled = false;
			}
			if (this->ArchComboBox->Enabled == true)
			{
				this->ArchComboBox->Items->Clear();
				this->ArchComboBox->Enabled = false;
			}
			if (this->LanguageComboBox->Enabled == true)
			{
				this->LanguageComboBox->Items->Clear();
				this->LanguageComboBox->Enabled = false;
			}
			if (this->DownloadBtn->Enabled == true)
			{
				this->DownloadBtn->Enabled = false;
			}
			if (this->launchInstallBox->Enabled == true)
			{
				if (this->launchInstallBox->Checked == true)
				{
					this->launchInstallBox->Checked = false;
				}
				this->launchInstallBox->Enabled = false;
			}
			if (this->ProjectComboBox->Text == "casmOS (-= Pre-release =-)")
			{
				this->VersionComboBox->Items->Add("v0.0.2.6-alpha");
				this->VersionComboBox->Items->Add("v0.0.2-alpha");
				this->VersionComboBox->Items->Add("v0.0.1-alpha");
				this->VersionComboBox->Items->Add("v0.0.0-alpha");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "CD-OSK (-= Pre-release =-)")
			{
				this->VersionComboBox->Items->Add("v0.0.1");
				this->VersionComboBox->Items->Add("v0.0.1 (04-09-2020 Prototype)");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "Commodore OS Vision II")
			{
				this->VersionComboBox->Items->Add("Build 3200");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "DremDOS (-= Pre-release =-)")
			{
				this->VersionComboBox->Items->Add("v0.0.1");
				this->VersionComboBox->Items->Add("v0.0.1-rc1");
				this->VersionComboBox->Items->Add("v0.0.1 (04-08-2020 Prototype)");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "DremOS")
			{
				this->VersionComboBox->Items->Add("v0.6.0");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "DTools")
			{
				this->VersionComboBox->Items->Add("v1.2");
				this->VersionComboBox->Items->Add("v1.1");
				this->VersionComboBox->Items->Add("v1.0");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "GBAUnix (-= Pre-release =-)")
			{
				this->VersionComboBox->Items->Add("v0.0");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "Gencode (-= Pre-release =-)")
			{
				this->VersionComboBox->Items->Add("v0.5-Preview (Plus Edition)");
				this->VersionComboBox->Items->Add("v0.5-Preview");
				this->VersionComboBox->Items->Add("v0.5-Preview (Bin)");
				this->VersionComboBox->Items->Add("v0.5-Preview (GenCMD Only)");
				this->VersionComboBox->Items->Add("v0.5-Debug");
				this->VersionComboBox->Items->Add("v0.5-Debug (Bin)");
				this->VersionComboBox->Items->Add("v0.4-Legacy");
				this->VersionComboBox->Items->Add("v0.4-Preview");
				this->VersionComboBox->Items->Add("v0.4-Preview (Bin)");
				this->VersionComboBox->Items->Add("v0.4-Preview (GenCMD Only)");
				this->VersionComboBox->Items->Add("v0.3-Preview");
				this->VersionComboBox->Items->Add("v0.3-Preview (Bin)");
				this->VersionComboBox->Items->Add("v0.3-Preview (GenCMD Only)");
				this->VersionComboBox->Items->Add("v0.2-Preview");
				this->VersionComboBox->Items->Add("v0.2-Preview (Bin)");
				this->VersionComboBox->Items->Add("v0.2-Preview (GenCMD Only)");
				this->VersionComboBox->Items->Add("v0.1b-Preview (GenCMD Only)");
				this->VersionComboBox->Items->Add("v0.1-Preview");
				this->VersionComboBox->Items->Add("v0.1-Preview (Bin)");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "Gossamer Launcher (-= Pre-release =-)")
			{
				this->VersionComboBox->Items->Add("v0.9.44.227b");
				this->VersionComboBox->Items->Add("v0.9.44.227");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "HOSTNAME")
			{
				this->VersionComboBox->Items->Add("v0.1 (Windows)");
				this->VersionComboBox->Items->Add("v0.1 (Linux)");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "LALO (-= Archived =-)")
			{
				this->VersionComboBox->Items->Add("v0.0.0.2 (Windows)");
				this->VersionComboBox->Items->Add("v0.0.0.2 (Windows) (Bin)");
				this->VersionComboBox->Items->Add("v0.0.0.2 (Linux)");
				this->VersionComboBox->Items->Add("v0.0.0.2 (Linux) (Bin)");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "OTN")
			{
				this->VersionComboBox->Items->Add("v0.1.1 (Server)");
				this->VersionComboBox->Items->Add("v0.1.1 (Client)");
				this->VersionComboBox->Items->Add("v0.1.0");
				this->VersionComboBox->Items->Add("v0.0.8");
				this->VersionComboBox->Items->Add("v0.0.7");
				this->VersionComboBox->Items->Add("v0.0.6");
				this->VersionComboBox->Items->Add("v0.0.5");
				this->VersionComboBox->Items->Add("v0.0.4");
				this->VersionComboBox->Items->Add("v0.0.3");
				this->VersionComboBox->Items->Add("v0.0.2");
				this->VersionComboBox->Items->Add("v0.0.1 (Warning: Very Unstable)");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "Sam&Yoe Group: The Video Game")
			{
				this->VersionComboBox->Items->Add("Build #0040 (Discord Rich-Presence Included) (Special Edition)");
				this->VersionComboBox->Items->Add("Build #0040 (Special Edition)");
				this->VersionComboBox->Items->Add("Build #0030 (Not yet available)");
				this->VersionComboBox->Items->Add("Build #0030 (Ported Edition) (Not yet available)");
				this->VersionComboBox->Items->Add("Build #0020 (Not yet available)");
				this->VersionComboBox->Items->Add("Build #0020 (Ported Edition) (Not yet available)");
				this->VersionComboBox->Items->Add("Build #0010 (Not yet available)");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "SparrOS (-= Pre-release =-)")
			{
				this->VersionComboBox->Items->Add("v0.0.2-alpha");
				this->VersionComboBox->Items->Add("v0.0.1-alpha");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "UPTIME (-= Pre-release =-)")
			{
				this->VersionComboBox->Items->Add("v1.0.284-beta");
				this->VersionComboBox->Items->Add("v1.0.284-beta (Bin)");
				this->VersionComboBox->Items->Add("v1.0.284-beta (Legacy)");
				this->VersionComboBox->Items->Add("v1.0.284-beta (Legacy) (Bin)");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "Windows 9 Downloader (Windows 10 TP Build 9841)")
			{
				this->VersionComboBox->Items->Add("v0.4");
				this->VersionComboBox->Enabled = true;
				return;
			}
			if (this->ProjectComboBox->Text == "Yoe's Cheat Database (-= Pre-release =-)")
			{
				this->VersionComboBox->Items->Add("v0.2");
				this->VersionComboBox->Items->Add("v0.1");
				this->VersionComboBox->Enabled = true;
				return;
			}
		}
		private: System::Void VersionComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			if (this->ArchComboBox->Enabled == true)
			{
				this->ArchComboBox->Items->Clear();
				this->ArchComboBox->Enabled = false;
			}
			if (this->LanguageComboBox->Enabled == true)
			{
				this->LanguageComboBox->Items->Clear();
				this->LanguageComboBox->Enabled = false;
			}
			if (this->DownloadBtn->Enabled == true)
			{
				this->DownloadBtn->Enabled = false;
			}
			if (this->launchInstallBox->Enabled == true)
			{
				if (this->launchInstallBox->Checked == true)
				{
					this->launchInstallBox->Checked = false;
				}
				this->launchInstallBox->Enabled = false;
			}
			if (this->ProjectComboBox->Text == "casmOS (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.2.6-alpha")
				{
					this->ArchComboBox->Items->Add("x86_64");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.2-alpha")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.1-alpha")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.0-alpha")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "CD-OSK (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.1")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.1 (04-09-2020 Prototype)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "Commodore OS Vision II")
			{
				if (this->VersionComboBox->Text == "Build 3200")
				{
					this->ArchComboBox->Items->Add("x64");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "DremDOS (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.1")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.1-rc1")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.1 (04-08-2020 Prototype)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "DremOS")
			{
				if (this->VersionComboBox->Text == "v0.6.0")
				{
					this->ArchComboBox->Items->Add("x64");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "Gencode (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.5-Preview (Plus Edition)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.5-Preview")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.5-Preview (Bin)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.5-Preview (GenCMD Only)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.5-Debug")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.5-Debug (Bin)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.4-Legacy")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.4-Preview")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.4-Preview (Bin)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.4-Preview (GenCMD Only)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.3-Preview")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.3-Preview (Bin)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.3-Preview (GenCMD Only)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.2-Preview")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.2-Preview (Bin)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.2-Preview (GenCMD Only)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.1b-Preview (GenCMD Only)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.1-Preview")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.1-Preview (Bin)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "Gossamer Launcher (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.9.44.227b")
				{
					this->ArchComboBox->Items->Add("x64");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.9.44.227")
				{
					this->ArchComboBox->Items->Add("x64");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "HOSTNAME")
			{
				if (this->VersionComboBox->Text == "v0.1 (Windows)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.1 (Linux)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "LALO (-= Archived =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.0.2 (Windows)")
				{
					this->ArchComboBox->Items->Add("x64");
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.0.2 (Windows) (Bin)")
				{
					this->ArchComboBox->Items->Add("x64");
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.0.2 (Linux)")
				{
					this->ArchComboBox->Items->Add("x86/64");
					this->ArchComboBox->Items->Add("x64");
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.0.2 (Linux) (Bin)")
				{
					this->ArchComboBox->Items->Add("x64");
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "OTN")
			{
				if (this->VersionComboBox->Text == "v0.1.1 (Server)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.1.1 (Client)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.1.0")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.8")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.7")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.6")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.5")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.4")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.3")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.2")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.1 (Warning: Very Unstable)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "Sam&Yoe Group: The Video Game")
			{
				if (this->VersionComboBox->Text == "Build #0040 (Discord Rich-Presence Included) (Special Edition)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "Build #0040 (Special Edition)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "Build #0030 (Not yet available)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "Build #0030 (Ported Edition) (Not yet available)")
				{
					this->ArchComboBox->Items->Add("None");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "Build #0020 (Not yet available)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "Build #0020 (Ported Edition) (Not yet available)")
				{
					this->ArchComboBox->Items->Add("None");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "Build #0010 (Not yet available)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "SparrOS (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.2-alpha")
				{
					this->ArchComboBox->Items->Add("x64");
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Items->Add("x86 (VMWare Bootable Hard Disk Image)");
					this->ArchComboBox->Items->Add("armv7 (Cortex A7) for Raspberry Pi 2/3/4 \(ARMHF\)");
					this->ArchComboBox->Items->Add("armv6 (arm1176jzf) for Raspberry Pi 1/zero \(ARMEL\)");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.0.1-alpha")
				{
					this->ArchComboBox->Items->Add("x64");
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Items->Add("armv7 (Cortex A53) for Raspberry Pi 3/4 \(ARMHF\)");
					this->ArchComboBox->Items->Add("armv6 (arm1176jzf) for Raspberry Pi 1/zero \(ARMEL\)");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "UPTIME (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v1.0.284-beta")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v1.0.284-beta (Bin)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v1.0.284-beta (Legacy)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v1.0.284-beta (Legacy) (Bin)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "Windows 9 Downloader (Windows 10 TP Build 9841)")
			{
				if (this->VersionComboBox->Text == "v0.4")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					this->launchInstallBox->Enabled = true;
					return;
				}
			}
			if (this->ProjectComboBox->Text == "Yoe's Cheat Database (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.2")
				{
					this->ArchComboBox->Items->Add("ARM");
					this->ArchComboBox->Enabled = true;
					return;
				}
				if (this->VersionComboBox->Text == "v0.1")
				{
					this->ArchComboBox->Items->Add("ARM");
					this->ArchComboBox->Enabled = true;
					return;
				}
			}
		}
		private: System::Void ArchComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			if (this->LanguageComboBox->Enabled == true)
			{
				this->LanguageComboBox->Items->Clear();
				this->LanguageComboBox->Enabled = false;
			}
			if (this->DownloadBtn->Enabled == true)
			{
				this->DownloadBtn->Enabled = false;
			}
			if (this->ProjectComboBox->Text == "casmOS (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.2.6-alpha")
				{
					if (this->ArchComboBox->Text == "x86_64")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.2-alpha")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.1-alpha")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.0-alpha")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "CD-OSK (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.1")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.1 (04-09-2020 Prototype)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "Commodore OS Vision II")
			{
				if (this->VersionComboBox->Text == "Build 3200")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "DremDOS (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.1")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.1-rc1")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.1 (04-08-2020 Prototype)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "DremOS")
			{
				if (this->VersionComboBox->Text == "v0.6.0")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "Gencode (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.5-Preview (Plus Edition)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.5-Preview")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.5-Preview (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.5-Preview (GenCMD Only)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.5-Debug")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.5-Debug (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.4-Legacy")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.4-Preview")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Items->Add("Multilanguage");
						this->LanguageComboBox->Items->Add("Spanish");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.4-Preview (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Items->Add("Spanish");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.4-Preview (GenCMD Only)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Items->Add("Spanish");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.3-Preview")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.3-Preview (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.3-Preview (GenCMD Only)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.2-Preview")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.2-Preview (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.2-Preview (GenCMD Only)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.1b-Preview (GenCMD Only)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.1-Preview")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.1-Preview (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "Gossamer Launcher (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.9.44.227b")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.9.44.227")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "HOSTNAME")
			{
				if (this->VersionComboBox->Text == "v0.1 (Windows)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.1 (Linux)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "LALO (-= Archived =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.0.2 (Windows)")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.0.2 (Windows) (Bin)")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.0.2 (Linux)")
				{
					if (this->ArchComboBox->Text == "x86/64")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
					if (this->ArchComboBox->Text == "x64")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.0.2 (Linux) (Bin)")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "OTN")
			{
				if (this->VersionComboBox->Text == "v0.1.1 (Server)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.1.1 (Client)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.1.0")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.8")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.7")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.6")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.5")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.4")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.3")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.2")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.1 (Warning: Very Unstable)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "Sam&Yoe Group: The Video Game")
			{
				if (this->VersionComboBox->Text == "Build #0040 (Discord Rich-Presence Included) (Special Edition)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "Build #0040 (Special Edition)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "Build #0030 (Not yet available)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "Build #0030 (Ported Edition) (Not yet available)")
				{
					if (this->ArchComboBox->Text == "None")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "Build #0020 (Not yet available)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "Build #0020 (Ported Edition) (Not yet available)")
				{
					if (this->ArchComboBox->Text == "None")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "Build #0010 (Not yet available)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "SparrOS (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.2-alpha")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
					if (this->ArchComboBox->Text == "x86 (VMWare Bootable Hard Disk Image)")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
					if (this->ArchComboBox->Text == "armv7 (Cortex A7) for Raspberry Pi 2/3/4 \(ARMHF\)")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
					if (this->ArchComboBox->Text == "armv6 (arm1176jzf) for Raspberry Pi 1/zero \(ARMEL\)")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.1-alpha")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
					if (this->ArchComboBox->Text == "armv7 (Cortex A53) for Raspberry Pi 3/4 \(ARMHF\)")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
					if (this->ArchComboBox->Text == "armv6 (arm1176jzf) for Raspberry Pi 1/zero \(ARMEL\)")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "UPTIME (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v1.0.284-beta")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v1.0.284-beta (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v1.0.284-beta (Legacy)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v1.0.284-beta (Legacy) (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "Windows 9 Downloader (Windows 10 TP Build 9841)")
			{
				if (this->VersionComboBox->Text == "v0.4")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "Yoe's Cheat Database (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.2")
				{
					if (this->ArchComboBox->Text == "ARM")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.1")
				{
					if (this->ArchComboBox->Text == "ARM")
					{
						this->LanguageComboBox->Items->Add("English");
						this->LanguageComboBox->Enabled = true;
						return;
					}
				}
			}
		}
		private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}
		private: System::Void LanguageComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			this->DownloadBtn->Enabled = true;
		}
		private: System::Void DownloadBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->ProjectComboBox->Text == "casmOS (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.2.6-alpha")
				{
					if (this->ArchComboBox->Text == "x86_64")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadCasmOS_v0026alpha_x8664_english();
							
							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.2-alpha")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadCasmOS_v002alpha_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.1-alpha")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->DownloadBtn->Enabled = false;

						DownloadDb::DownloadCasmOS_v001alpha_x86_english();

						this->DownloadBtn->Enabled = true;
						Process::Start("explorer.exe", Application::StartupPath);
						return;
					}
				}
				if (this->VersionComboBox->Text == "v0.0.0-alpha")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						this->DownloadBtn->Enabled = false;

						DownloadDb::DownloadCasmOS_v000alpha_x86_english();

						this->DownloadBtn->Enabled = true;
						Process::Start("explorer.exe", Application::StartupPath);
						return;
					}
				}
			}
			if (this->ProjectComboBox->Text == "CD-OSK (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.1")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadCdosk_v001_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.1 (04-09-2020 Prototype)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadCdosk_v001prototype04092020_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "Commodore OS Vision II")
			{
				if (this->VersionComboBox->Text == "Build 3200")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadCommodoreOSVisionII_b3200_x64_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "DremDOS (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.1")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadDremDOS_v001_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.1-rc1")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadDremDOS_v001rc1_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.1 (04-08-2020 Prototype)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadDremDOS_v001prototype04082020_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "DremOS")
			{
				if (this->VersionComboBox->Text == "v0.6.0")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadDremOS_v060_x64_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "Gencode (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.5-Preview (Plus Edition)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v05plus_x86_english();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\gencode-plus_v0.5-setup.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.5-Preview")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v05preview_x86_english();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\gencode_v0.5-setup.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.5-Preview (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v05previewbin_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.5-Preview (GenCMD Only)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v05previewgencmdonly_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.5-Debug")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v05debug_x86_english();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\gencode_v0.5-setup-dbg.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.5-Debug (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v05debugbin_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.4-Legacy")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v04legacy_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.4-Preview")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v04preview_x86_english();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\gencode_v0.4-setup.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
						if (this->LanguageComboBox->Text == "Multilanguage")
						{
							this->DownloadBtn->Enabled = false;
							
							DownloadDb::DownloadGencode_v04preview_x86_multilanguage();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\gencode_v0.4-setup-mu.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
						if (this->LanguageComboBox->Text == "Spanish")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v04preview_x86_spanish();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\gencode_v0.4-setup-es.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.4-Preview (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v04previewbin_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
						if (this->LanguageComboBox->Text == "Spanish")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v04previewbin_x86_spanish();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.4-Preview (GenCMD Only)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v04previewgencmdonly_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
						if (this->LanguageComboBox->Text == "Spanish")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v04previewgencmdonly_x86_spanish();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.3-Preview")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v03preview_x86_english();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\gencode_v0.3-setup.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.3-Preview (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v03previewbin_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.3-Preview (GenCMD Only)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v03previewgencmdonly_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.2-Preview")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v02preview_x86_english();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\gencode_v0.2-setup.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.2-Preview (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v02previewbin_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.2-Preview (GenCMD Only)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v02previewgencmdonly_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.1b-Preview (GenCMD Only)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v01bpreviewgencmdonly_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.1-Preview")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v01preview_x86_english();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\gencode_v0.1-setup.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.1-Preview (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGencode_v01previewbin_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "Gossamer Launcher (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.9.44.227b")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGossamerLauncher_v0944227b_x64_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.9.44.227")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadGossamerLauncher_v0944227_x64_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "HOSTNAME")
			{
				if (this->VersionComboBox->Text == "v0.1 (Windows)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadHostname_v01windows_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.1 (Linux)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadHostname_v01linux_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "LALO (-= Archived =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.0.2 (Windows)")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadLALO_v0002windows_x64_english();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\lalo-eda_v0.0.0.2_win64_setup.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadLALO_v0002windows_x86_english();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\lalo-eda_v0.0.0.2_win32_setup.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.0.2 (Windows) (Bin)")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadLALO_v0002windowsbin_x64_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadLALO_v0002windowsbin_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.0.2 (Linux)")
				{
					if (this->ArchComboBox->Text == "x86/64")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadLALO_v0002linux_all_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
					if (this->ArchComboBox->Text == "x64")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadLALO_v0002linux_x64_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadLALO_v0002linux_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.0.2 (Linux) (Bin)")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadLALO_v0002linuxbin_x64_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadLALO_v0002linuxbin_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "OTN")
			{
				if (this->VersionComboBox->Text == "v0.1.1 (Server)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadOTN_v011server_x86_english();

							this->DownloadBtn->Enabled = true;
							File::Copy(Application::StartupPath + "\\otn-server.exe", Application::StartupPath + "\\otn-server_v0.1.1.exe");
							File::Delete(Application::StartupPath + "\\otn-server.exe");
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.1.1 (Client)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadOTN_v011client_x86_english();

							this->DownloadBtn->Enabled = true;
							File::Copy(Application::StartupPath + "\\OTNClient.exe", Application::StartupPath + "\\OTNClient_v0.1.1.exe");
							File::Delete(Application::StartupPath + "\\OTNClient.exe");
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.1.0")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadOTN_v010_x86_english();

							this->DownloadBtn->Enabled = true;
							File::Copy(Application::StartupPath + "\\otn-server.exe", Application::StartupPath + "\\otn-server_v0.1.0.exe");
							File::Delete(Application::StartupPath + "\\otn-server.exe");
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.8")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadOTN_v008_x86_english();

							this->DownloadBtn->Enabled = true;
							File::Copy(Application::StartupPath + "\\otn-server.exe", Application::StartupPath + "\\otn-server_v0.0.8.exe");
							File::Delete(Application::StartupPath + "\\otn-server.exe");
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.7")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadOTN_v007_x86_english();

							this->DownloadBtn->Enabled = true;
							File::Copy(Application::StartupPath + "\\otn-server.exe", Application::StartupPath + "\\otn-server_v0.0.7.exe");
							File::Delete(Application::StartupPath + "\\otn-server.exe");
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.6")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadOTN_v006_x86_english();

							this->DownloadBtn->Enabled = true;
							File::Copy(Application::StartupPath + "\\otn-server.exe", Application::StartupPath + "\\otn-server_v0.0.6.exe");
							File::Delete(Application::StartupPath + "\\otn-server.exe");
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.5")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadOTN_v005_x86_english();

							this->DownloadBtn->Enabled = true;
							File::Copy(Application::StartupPath + "\\otn-server.exe", Application::StartupPath + "\\otn-server_v0.0.5.exe");
							File::Delete(Application::StartupPath + "\\otn-server.exe");
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.4")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadOTN_v004_x86_english();

							this->DownloadBtn->Enabled = true;
							File::Copy(Application::StartupPath + "\\otn-server.exe", Application::StartupPath + "\\otn-server_v0.0.4.exe");
							File::Delete(Application::StartupPath + "\\otn-server.exe");
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.3")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadOTN_v003_x86_english();

							this->DownloadBtn->Enabled = true;
							File::Copy(Application::StartupPath + "\\otn-server.exe", Application::StartupPath + "\\otn-server_v0.0.3.exe");
							File::Delete(Application::StartupPath + "\\otn-server.exe");
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.2")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadOTN_v002_x86_english();

							this->DownloadBtn->Enabled = true;
							File::Copy(Application::StartupPath + "\\otn-server.exe", Application::StartupPath + "\\otn-server_v0.0.2.exe");
							File::Delete(Application::StartupPath + "\\otn-server.exe");
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.1 (Warning: Very Unstable)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadOTN_v001_x86_english();

							this->DownloadBtn->Enabled = true;
							File::Copy(Application::StartupPath + "\\otn-server.exe", Application::StartupPath + "\\otn-server_v0.0.1.exe");
							File::Delete(Application::StartupPath + "\\otn-server.exe");
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "Sam&Yoe Group: The Video Game")
			{
				if (this->VersionComboBox->Text == "Build #0040 (Discord Rich-Presence Included) (Special Edition)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadSYGTVG_v0040discordrp_x86_english();
							
							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\SYGTVGTEST0040_includes_discordrp.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "Build #0040 (Special Edition)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadSYGTVG_v0040_x86_english();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\SYGTVGTEST0040.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "Build #0030 (Not yet available)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "Build #0030 (Ported Edition) (Not yet available)")
				{
					if (this->ArchComboBox->Text == "None")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "Build #0020 (Not yet available)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "Build #0020 (Ported Edition) (Not yet available)")
				{
					if (this->ArchComboBox->Text == "None")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "Build #0010 (Not yet available)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "SparrOS (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.0.2-alpha")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadSparrOS_v002alpha_x64_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadSparrOS_v002alpha_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
					if (this->ArchComboBox->Text == "x86 (VMWare Bootable Hard Disk Image)")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadSparrOS_v002alphavmdk_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
					if (this->ArchComboBox->Text == "armv7 (Cortex A7) for Raspberry Pi 2/3/4 \(ARMHF\)")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadSparrOSEmbedded_v002alpha_rpimodern_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
					if (this->ArchComboBox->Text == "armv6 (arm1176jzf) for Raspberry Pi 1/zero \(ARMEL\)")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadSparrOSEmbedded_v002alpha_rpilegacy_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.0.1-alpha")
				{
					if (this->ArchComboBox->Text == "x64")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadSparrOS_v001alpha_x64_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadSparrOS_v001alpha_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
					if (this->ArchComboBox->Text == "armv7 (Cortex A53) for Raspberry Pi 3/4 \(ARMHF\)")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadSparrOSEmbedded_v001alpha_rpimodern_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
					if (this->ArchComboBox->Text == "armv6 (arm1176jzf) for Raspberry Pi 1/zero \(ARMEL\)")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadSparrOSEmbedded_v001alpha_rpilegacy_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "UPTIME (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v1.0.284-beta")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadUPTIME_v10284beta_x86_english();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\uptime_v1.0-setup-beta.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v1.0.284-beta (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadUPTIME_v10284betabin_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v1.0.284-beta (Legacy)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadUPTIME_v10284betalegacy_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v1.0.284-beta (Legacy) (Bin)")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadUPTIME_v10284betalegacybin_x86_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "Windows 9 Downloader (Windows 10 TP Build 9841)")
			{
				if (this->VersionComboBox->Text == "v0.4")
				{
					if (this->ArchComboBox->Text == "x86")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadWindows9Downloader_v04_x86_english();

							this->DownloadBtn->Enabled = true;
							if (this->launchInstallBox->Checked == true)
							{
								Process::Start(Application::StartupPath + "\\Win9-Downloader.exe");
							}
							if (this->launchInstallBox->Checked == false)
							{
								Process::Start("explorer.exe", Application::StartupPath);
							}
							return;
						}
					}
				}
			}
			if (this->ProjectComboBox->Text == "Yoe's Cheat Database (-= Pre-release =-)")
			{
				if (this->VersionComboBox->Text == "v0.2")
				{
					if (this->ArchComboBox->Text == "ARM")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadYoesCheatDatabase_v02_arm_english();
							
							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
				if (this->VersionComboBox->Text == "v0.1")
				{
					if (this->ArchComboBox->Text == "ARM")
					{
						if (this->LanguageComboBox->Text == "English")
						{
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadYoesCheatDatabase_v01_arm_english();

							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
		}
		private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
		{
			About^ abt = gcnew About;
			abt->Show();
		}
		private: System::Void manageBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			ManageDownloads^ manage = gcnew ManageDownloads;
			manage->Show();
		}
	};
}
