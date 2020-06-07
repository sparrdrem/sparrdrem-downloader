#pragma once

/* Shit broke
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <tchar.h>

#include <iostream>
#include <iomanip>

#include "hack.h"

#include <wininet.h>

using namespace std;
*/

#include "DownloadDb.h"

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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ playableState;


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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->playableState = (gcnew System::Windows::Forms::Label());
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
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// playableState
			// 
			resources->ApplyResources(this->playableState, L"playableState");
			this->playableState->Name = L"playableState";
			// 
			// MainPage
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->playableState);
			this->Controls->Add(this->label5);
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
				this->VersionComboBox->Items->Add("v0.5-Debug (GenCMD Only)");
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
				this->VersionComboBox->Items->Add("v0.0.0.2");
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
			// This repository will be removed
			/*if (this->ProjectComboBox->Text == "OTNMCP (-= Pre-release =-)")
			{
				//this->VersionComboBox->Items->Add("v0.0.1.88-chrome");
				this->VersionComboBox->Enabled = true;
				return;
			}*/
			if (this->ProjectComboBox->Text == "Sam&Yoe Group: The Video Game")
			{
				this->VersionComboBox->Items->Add("Build #0040 (Special Edition)");
				this->VersionComboBox->Items->Add("Build #0030 (Not yet available)");
				this->VersionComboBox->Items->Add("Build #0020 (Not yet available)");
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
					return;
				}
				if (this->VersionComboBox->Text == "v0.5-Preview")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
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
					return;
				}
				if (this->VersionComboBox->Text == "v0.5-Debug (GenCMD Only)")
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
				if (this->VersionComboBox->Text == "v0.5-Debug (GenCMD Only)")
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
					return;
				}
				if (this->VersionComboBox->Text == "v0.1-Preview (Bin)")
				{
					this->ArchComboBox->Items->Add("x86");
					this->ArchComboBox->Enabled = true;
					return;
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
							this->playableState->Text = "Downloading file .... please wait.";
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadCasmOS_v0026alpha_x8664_english();
							
							this->playableState->Text = "Ready.";
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
							this->playableState->Text = "Downloading file .... please wait.";
							this->DownloadBtn->Enabled = false;

							DownloadDb::DownloadCasmOS_v002alpha_x86_english();

							this->playableState->Text = "Ready.";
							this->DownloadBtn->Enabled = true;
							Process::Start("explorer.exe", Application::StartupPath);
							return;
						}
					}
				}
			}
		}
	};
}
/*
Discord CDN Downloads:
DremDOS 0.0.1 (04-08-2020 Prototype): https://cdn.discordapp.com/attachments/555578702713323525/697568127642501150/DremDOS-0.0.1-PROTO1.iso
CD-OSK 0.0.1 (04-09-2020 Prototype): https://cdn.discordapp.com/attachments/555578702713323525/715354102086893712/cd-osk-proto.7z
*/