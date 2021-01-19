/*++
	
	ManageDownloads.h

	Copyright (C) 2015-2021 SparrOSDeveloperTeam,
	Copyright (C) 2018-2021 SparrDrem,
	Copyright (C) 2009-2021 Innovation Inc.

	This is the downloaded file manager script. This
	spawns a menu that allows you to interact with
	downloaded files such as opening or removing any
	selected file.

  --*/

#pragma once

namespace sparrdremdownloader {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for ManageDownloads
	/// </summary>
	public ref class ManageDownloads : public System::Windows::Forms::Form
	{
	public:
		ManageDownloads(void)
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
		~ManageDownloads()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ downloadsListBox;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ deleteBtn;
	private: System::Windows::Forms::Button^ refreshBtn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ManageDownloads::typeid));
			this->downloadsListBox = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->refreshBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// downloadsListBox
			// 
			this->downloadsListBox->FormattingEnabled = true;
			this->downloadsListBox->HorizontalScrollbar = true;
			this->downloadsListBox->Location = System::Drawing::Point(13, 13);
			this->downloadsListBox->Name = L"downloadsListBox";
			this->downloadsListBox->Size = System::Drawing::Size(311, 199);
			this->downloadsListBox->Sorted = true;
			this->downloadsListBox->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(249, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"&Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ManageDownloads::button1_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(168, 218);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(75, 23);
			this->deleteBtn->TabIndex = 2;
			this->deleteBtn->Text = L"&Delete";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &ManageDownloads::deleteBtn_Click);
			// 
			// refreshBtn
			// 
			this->refreshBtn->Location = System::Drawing::Point(12, 218);
			this->refreshBtn->Name = L"refreshBtn";
			this->refreshBtn->Size = System::Drawing::Size(75, 23);
			this->refreshBtn->TabIndex = 3;
			this->refreshBtn->Text = L"&Refresh";
			this->refreshBtn->UseVisualStyleBackColor = true;
			this->refreshBtn->Click += gcnew System::EventHandler(this, &ManageDownloads::refreshBtn_Click);
			// 
			// ManageDownloads
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(336, 247);
			this->Controls->Add(this->refreshBtn);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->downloadsListBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ManageDownloads";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Manage Downloads";
			this->Load += gcnew System::EventHandler(this, &ManageDownloads::ManageDownloads_Load);
			this->Click += gcnew System::EventHandler(this, &ManageDownloads::ManageDownloads_Click);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		private: void CheckForFiles()
		{
			downloadsListBox->Items->Clear();
			if (File::Exists(Application::StartupPath + "\\casmos-x86_64_0.0.0-alpha.iso") == true)
			{
				downloadsListBox->Items->Add("casmos-x86_64_0.0.0-alpha.iso");
			}
			if (File::Exists(Application::StartupPath + "\\casmos-x86_64_0.0.1-alpha.iso") == true)
			{
				downloadsListBox->Items->Add("casmos-x86_64_0.0.1-alpha.iso");
			}
			if (File::Exists(Application::StartupPath + "\\casmos-x86_64_0.0.2-alpha.iso") == true)
			{
				downloadsListBox->Items->Add("casmos-x86_64_0.0.2-alpha.iso");
			}
			if (File::Exists(Application::StartupPath + "\\casmos-x86_64_0.0.2.6-alpha.iso") == true)
			{
				downloadsListBox->Items->Add("casmos-x86_64_0.0.2.6-alpha.iso");
			}
			if (File::Exists(Application::StartupPath + "\\cd-osk-proto.7z") == true)
			{
				downloadsListBox->Items->Add("cd-osk-proto.7z");
			}
			if (File::Exists(Application::StartupPath + "\\cd-osk_v0.0.1.zip") == true)
			{
				downloadsListBox->Items->Add("cd-osk_v0.0.1.zip");
			}
			if (File::Exists(Application::StartupPath + "\\COS-Vision-II-B3200.iso") == true)
			{
				downloadsListBox->Items->Add("COS-Vision-II-B3200.iso");
			}
			if (File::Exists(Application::StartupPath + "\\DremDOS-0.0.1.iso") == true)
			{
				downloadsListBox->Items->Add("DremDOS-0.0.1.iso");
			}
			if (File::Exists(Application::StartupPath + "\\DremDOS-0.0.1-PROTO1.iso") == true)
			{
				downloadsListBox->Items->Add("DremDOS-0.0.1-PROTO1.iso");
			}
			if (File::Exists(Application::StartupPath + "\\DremDOS-0.0.1-RC1.iso") == true)
			{
				downloadsListBox->Items->Add("DremDOS-0.0.1-RC1.iso");
			}
			if (File::Exists(Application::StartupPath + "\\DremOS-0.6.0.iso") == true)
			{
				downloadsListBox->Items->Add("DremOS-0.6.0.iso");
			}
			if (File::Exists(Application::StartupPath + "\\dtools-1.0.zip") == true)
			{
				downloadsListBox->Items->Add("dtools-1.0.zip");
			}
			if (File::Exists(Application::StartupPath + "\\dtools-1.1.zip") == true)
			{
				downloadsListBox->Items->Add("dtools-1.1.zip");
			}
			if (File::Exists(Application::StartupPath + "\\dtools-1.2.zip") == true)
			{
				downloadsListBox->Items->Add("dtools-1.1.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencmd_v0.1b-bin.zip") == true)
			{
				downloadsListBox->Items->Add("gencmd_v0.1b-bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencmd_v0.2-bin.zip") == true)
			{
				downloadsListBox->Items->Add("gencmd_v0.2-bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencmd_v0.3-bin.zip") == true)
			{
				downloadsListBox->Items->Add("gencmd_v0.3-bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencmd_v0.4-bin.zip") == true)
			{
				downloadsListBox->Items->Add("gencmd_v0.4-bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencmd_v0.4-bin-es.zip") == true)
			{
				downloadsListBox->Items->Add("gencmd_v0.4-bin-es.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencmd_v0.5-bin.zip") == true)
			{
				downloadsListBox->Items->Add("gencmd_v0.5-bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.1-bin.zip") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.1-bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.1-setup.exe") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.1-setup.exe");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.2-bin.zip") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.2-bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.2-setup.exe") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.2-setup.exe");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.3-bin.zip") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.3-bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.3-setup.exe") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.3-setup.exe");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.4-bin.zip") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.4-bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.4-bin-es.zip") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.4-bin-es.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.4-setup.exe") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.4-setup.exe");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.4-setup-es.exe") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.4-setup-es.exe");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.4-setup-legacy.exe") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.4-setup-legacy.exe");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.4-setup-mu.exe") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.4-setup-mu.exe");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.5-bin.zip") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.5-bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.5-bin-dbg.zip") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.5-bin-dbg.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.5-setup.exe") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.5-setup.exe");
			}
			if (File::Exists(Application::StartupPath + "\\gencode_v0.5-setup-dbg.exe") == true)
			{
				downloadsListBox->Items->Add("gencode_v0.5-setup-dbg.exe");
			}
			if (File::Exists(Application::StartupPath + "\\gencode-plus_v0.5-setup.exe") == true)
			{
				downloadsListBox->Items->Add("gencode-plus_v0.5-setup.exe");
			}
			if (File::Exists(Application::StartupPath + "\\gossamer-launcher_0.9.44.227_x64_win.zip.zip") == true)
			{
				downloadsListBox->Items->Add("gossamer-launcher_0.9.44.227b_x64_win.zip.zip");
			}
			if (File::Exists(Application::StartupPath + "\\gossamer-launcher_0.9.44.227b_x64_win.zip.zip") == true)
			{
				downloadsListBox->Items->Add("gossamer-launcher_0.9.44.227b_x64_win.zip.zip");
			}
			if (File::Exists(Application::StartupPath + "\\hostname_linux.zip") == true)
			{
				downloadsListBox->Items->Add("hostname_linux.zip");
			}
			if (File::Exists(Application::StartupPath + "\\hostname_win.zip") == true)
			{
				downloadsListBox->Items->Add("hostname_win.zip");
			}
			if (File::Exists(Application::StartupPath + "\\lalo-eda_v0.0.0.2_unix32_bin.zip") == true)
			{
				downloadsListBox->Items->Add("lalo-eda_v0.0.0.2_unix32_bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\lalo-eda_v0.0.0.2_unix32_setup.deb") == true)
			{
				downloadsListBox->Items->Add("lalo-eda_v0.0.0.2_unix32_setup.deb");
			}
			if (File::Exists(Application::StartupPath + "\\lalo-eda_v0.0.0.2_unix64_bin.zip") == true)
			{
				downloadsListBox->Items->Add("lalo-eda_v0.0.0.2_unix64_bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\lalo-eda_v0.0.0.2_unix64_setup.deb") == true)
			{
				downloadsListBox->Items->Add("lalo-eda_v0.0.0.2_unix64_setup.deb");
			}
			if (File::Exists(Application::StartupPath + "\\lalo-eda_v0.0.0.2_win32_bin.zip") == true)
			{
				downloadsListBox->Items->Add("lalo-eda_v0.0.0.2_win32_bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\lalo-eda_v0.0.0.2_win32_setup.exe") == true)
			{
				downloadsListBox->Items->Add("lalo-eda_v0.0.0.2_win32_setup.exe");
			}
			if (File::Exists(Application::StartupPath + "\\lalo-eda_v0.0.0.2_win64_bin.zip") == true)
			{
				downloadsListBox->Items->Add("lalo-eda_v0.0.0.2_win64_bin.zip");
			}
			if (File::Exists(Application::StartupPath + "\\lalo-eda_v0.0.0.2_win64_setup.exe") == true)
			{
				downloadsListBox->Items->Add("lalo-eda_v0.0.0.2_win64_setup.exe");
			}
			if (File::Exists(Application::StartupPath + "\\lalo-eda_v0.0.2-0_all.deb") == true)
			{
				downloadsListBox->Items->Add("lalo-eda_v0.0.2-0_all.deb");
			}
			if (File::Exists(Application::StartupPath + "\\otn-server_v0.0.1.exe") == true)
			{
				downloadsListBox->Items->Add("otn-server_v0.0.1.exe");
			}
			if (File::Exists(Application::StartupPath + "\\otn-server_v0.0.2.exe") == true)
			{
				downloadsListBox->Items->Add("otn-server_v0.0.2.exe");
			}
			if (File::Exists(Application::StartupPath + "\\otn-server_v0.0.3.exe") == true)
			{
				downloadsListBox->Items->Add("otn-server_v0.0.3.exe");
			}
			if (File::Exists(Application::StartupPath + "\\otn-server_v0.0.4.exe") == true)
			{
				downloadsListBox->Items->Add("otn-server_v0.0.4.exe");
			}
			if (File::Exists(Application::StartupPath + "\\otn-server_v0.0.5.exe") == true)
			{
				downloadsListBox->Items->Add("otn-server_v0.0.5.exe");
			}
			if (File::Exists(Application::StartupPath + "\\otn-server_v0.0.6.exe") == true)
			{
				downloadsListBox->Items->Add("otn-server_v0.0.6.exe");
			}
			if (File::Exists(Application::StartupPath + "\\otn-server_v0.0.7.exe") == true)
			{
				downloadsListBox->Items->Add("otn-server_v0.0.7.exe");
			}
			if (File::Exists(Application::StartupPath + "\\otn-server_v0.0.8.exe") == true)
			{
				downloadsListBox->Items->Add("otn-server_v0.0.8.exe");
			}
			if (File::Exists(Application::StartupPath + "\\otn-server_v0.1.0.exe") == true)
			{
				downloadsListBox->Items->Add("otn-server_v0.1.0.exe");
			}
			if (File::Exists(Application::StartupPath + "\\otn-server_v0.1.1.exe") == true)
			{
				downloadsListBox->Items->Add("otn-server_v0.1.1.exe");
			}
			if (File::Exists(Application::StartupPath + "\\OTNClient_v0.1.1.exe") == true)
			{
				downloadsListBox->Items->Add("OTNClient_v0.1.1.exe");
			}
			if (File::Exists(Application::StartupPath + "\\sparros_armel_20200108_alpha_v0.0.1.img.xz") == true)
			{
				downloadsListBox->Items->Add("sparros_armel_20200108_alpha_v0.0.1.img.xz");
			}
			if (File::Exists(Application::StartupPath + "\\sparros_armel_20200224_alpha_v0.0.2.img.xz") == true)
			{
				downloadsListBox->Items->Add("sparros_armel_20200224_alpha_v0.0.2.img.xz");
			}
			if (File::Exists(Application::StartupPath + "\\sparros_armhf_20200108_alpha_v0.0.1.img.xz") == true)
			{
				downloadsListBox->Items->Add("sparros_armhf_20200108_alpha_v0.0.1.img.xz");
			}
			if (File::Exists(Application::StartupPath + "\\sparros_armhf_20200224_alpha_v0.0.2.img.xz") == true)
			{
				downloadsListBox->Items->Add("sparros_armhf_20200224_alpha_v0.0.2.img.xz");
			}
			if (File::Exists(Application::StartupPath + "\\sparros_x64_20200108_alpha_v0.0.1.iso.zip") == true)
			{
				downloadsListBox->Items->Add("sparros_x64_20200108_alpha_v0.0.1.iso.zip");
			}
			if (File::Exists(Application::StartupPath + "\\sparros_x64_20200224_alpha_v0.0.2.iso.zip") == true)
			{
				downloadsListBox->Items->Add("sparros_x64_20200224_alpha_v0.0.2.iso.zip");
			}
			if (File::Exists(Application::StartupPath + "\\sparros_x86_20200108_alpha_v0.0.1.iso.zip") == true)
			{
				downloadsListBox->Items->Add("sparros_x86_20200108_alpha_v0.0.1.iso.zip");
			}
			if (File::Exists(Application::StartupPath + "\\sparros_x86_20200224_alpha_v0.0.2.iso.zip") == true)
			{
				downloadsListBox->Items->Add("sparros_x86_20200224_alpha_v0.0.2.iso.zip");
			}
			if (File::Exists(Application::StartupPath + "\\sparros_x86_20200224_alpha_v0.0.2.vmdk.zip") == true)
			{
				downloadsListBox->Items->Add("sparros_x86_20200224_alpha_v0.0.2.vmdk.zip");
			}
			if (File::Exists(Application::StartupPath + "\\SYGTVGTEST0040.exe") == true)
			{
				downloadsListBox->Items->Add("SYGTVGTEST0040.exe");
			}
			if (File::Exists(Application::StartupPath + "\\SYGTVGTEST0040_includes_discordrp.exe") == true)
			{
				downloadsListBox->Items->Add("SYGTVGTEST0040_includes_discordrp.exe");
			}
			if (File::Exists(Application::StartupPath + "\\unixv5.gba") == true)
			{
				downloadsListBox->Items->Add("unixv5.gba");
			}
			if (File::Exists(Application::StartupPath + "\\uptime_v1.0-bin-beta.zip") == true)
			{
				downloadsListBox->Items->Add("uptime_v1.0-bin-beta.zip");
			}
			if (File::Exists(Application::StartupPath + "\\uptime_v1.0-setup-beta.exe") == true)
			{
				downloadsListBox->Items->Add("uptime_v1.0-setup-beta.exe");
			}
			if (File::Exists(Application::StartupPath + "\\uptime_v1.0-bin-beta-legacy.zip") == true)
			{
				downloadsListBox->Items->Add("uptime_v1.0-bin-beta-legacy.zip");
			}
			if (File::Exists(Application::StartupPath + "\\uptime_v1.0-setup-beta-legacy.exe") == true)
			{
				downloadsListBox->Items->Add("uptime_v1.0-setup-beta-legacy.exe");
			}
			if (File::Exists(Application::StartupPath + "\\usrcheat-old_v0.1.zip") == true)
			{
				downloadsListBox->Items->Add("usrcheat-old_v0.1.zip");
			}
			if (File::Exists(Application::StartupPath + "\\Win9-Downloader.exe") == true)
			{
				downloadsListBox->Items->Add("Win9-Downloader.exe");
			}
			if (File::Exists(Application::StartupPath + "\\yoes_usercheat-database_current.zip") == true)
			{
				downloadsListBox->Items->Add("yoes_usercheat-database_current.zip");
			}
		}
		private: System::Void ManageDownloads_Load(System::Object^ sender, System::EventArgs^ e) {
			CheckForFiles();
		}
		private: System::Void ManageDownloads_Click(System::Object^ sender, System::EventArgs^ e)
		{
			CheckForFiles();
		}
		private: System::Void refreshBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			CheckForFiles();
		}
		private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			if (downloadsListBox->SelectedItem == "casmos-x86_64_0.0.0-alpha.iso")
			{
				File::Delete(Application::StartupPath + "\\casmos-x86_64_0.0.0-alpha.iso");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "casmos-x86_64_0.0.1-alpha.iso")
			{
				File::Delete(Application::StartupPath + "\\casmos-x86_64_0.0.1-alpha.iso");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "casmos-x86_64_0.0.2-alpha.iso")
			{
				File::Delete(Application::StartupPath + "\\casmos-x86_64_0.0.2-alpha.iso");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "casmos-x86_64_0.0.2.6-alpha.iso")
			{
				File::Delete(Application::StartupPath + "\\casmos-x86_64_0.0.2.6-alpha.iso");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "cd-osk-proto.7z")
			{
				File::Delete(Application::StartupPath + "\\cd-osk-proto.7z");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "cd-osk_v0.0.1.zip")
			{
				File::Delete(Application::StartupPath + "\\cd-osk_v0.0.1.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "COS-Vision-II-B3200.iso")
			{
				File::Delete(Application::StartupPath + "\\COS-Vision-II-B3200.iso");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "DremDOS-0.0.1.iso")
			{
				File::Delete(Application::StartupPath + "\\DremDOS-0.0.1.iso");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "DremDOS-0.0.1-PROTO1.iso")
			{
				File::Delete(Application::StartupPath + "\\DremDOS-0.0.1-PROTO1.iso");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "DremDOS-0.0.1-RC1.iso")
			{
				File::Delete(Application::StartupPath + "\\DremDOS-0.0.1-RC1.iso");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "DremOS-0.6.0.iso")
			{
				File::Delete(Application::StartupPath + "\\DremOS-0.6.0.iso");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "dtools-1.0.zip")
			{
				File::Delete(Application::StartupPath + "\\dtools-1.0.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "dtools-1.1.zip")
			{
				File::Delete(Application::StartupPath + "\\dtools-1.1.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "dtools-1.2.zip")
			{
				File::Delete(Application::StartupPath + "\\dtools-1.2.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencmd_v0.1b-bin.zip")
			{
				File::Delete(Application::StartupPath + "\\gencmd_v0.1b-bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencmd_v0.2-bin.zip")
			{
				File::Delete(Application::StartupPath + "\\gencmd_v0.2-bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencmd_v0.3-bin.zip")
			{
				File::Delete(Application::StartupPath + "\\gencmd_v0.3-bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencmd_v0.4-bin.zip")
			{
				File::Delete(Application::StartupPath + "\\gencmd_v0.4-bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencmd_v0.4-bin-es.zip")
			{
				File::Delete(Application::StartupPath + "\\gencmd_v0.4-bin-es.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencmd_v0.5-bin.zip")
			{
				File::Delete(Application::StartupPath + "\\gencmd_v0.5-bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.1-bin.zip")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.1-bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.1-setup.exe")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.1-setup.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.2-bin.zip")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.2-bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.2-setup.exe")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.2-setup.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.3-bin.zip")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.3-bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.3-setup.exe")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.3-setup.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.4-bin.zip")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.4-bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.4-bin-es.zip")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.4-bin-es.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.4-setup.exe")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.4-setup.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.4-setup-es.exe")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.4-setup-es.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.4-setup-legacy.exe")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.4-setup-legacy.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.4-setup-mu.exe")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.4-setup-mu.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.5-bin.zip")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.5-bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.5-bin-dbg.zip")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.5-bin-dbg.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.5-setup.exe")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.5-setup.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode_v0.5-setup-dbg.exe")
			{
				File::Delete(Application::StartupPath + "\\gencode_v0.5-setup-dbg.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gencode-plus_v0.5-setup.exe")
			{
				File::Delete(Application::StartupPath + "\\gencode-plus_v0.5-setup.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gossamer-launcher_0.9.44.227_x64_win.zip.zip")
			{
				File::Delete(Application::StartupPath + "\\gossamer-launcher_0.9.44.227_x64_win.zip.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "gossamer-launcher_0.9.44.227b_x64_win.zip.zip")
			{
				File::Delete(Application::StartupPath + "\\gossamer-launcher_0.9.44.227b_x64_win.zip.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "hostname_linux.zip")
			{
				File::Delete(Application::StartupPath + "\\hostname_linux.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "hostname_win.zip")
			{
				File::Delete(Application::StartupPath + "\\hostname_win.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "lalo-eda_v0.0.0.2_unix32_bin.zip")
			{
				File::Delete(Application::StartupPath + "\\lalo-eda_v0.0.0.2_unix32_bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "lalo-eda_v0.0.0.2_unix32_setup.deb")
			{
				File::Delete(Application::StartupPath + "\\lalo-eda_v0.0.0.2_unix32_setup.deb");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "lalo-eda_v0.0.0.2_unix64_bin.zip")
			{
				File::Delete(Application::StartupPath + "\\lalo-eda_v0.0.0.2_unix64_bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "lalo-eda_v0.0.0.2_unix64_setup.deb")
			{
				File::Delete(Application::StartupPath + "\\lalo-eda_v0.0.0.2_unix64_setup.deb");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "lalo-eda_v0.0.0.2_win32_bin.zip")
			{
				File::Delete(Application::StartupPath + "\\lalo-eda_v0.0.0.2_win32_bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "lalo-eda_v0.0.0.2_win32_setup.exe")
			{
				File::Delete(Application::StartupPath + "\\lalo-eda_v0.0.0.2_win32_setup.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "lalo-eda_v0.0.0.2_win64_bin.zip")
			{
				File::Delete(Application::StartupPath + "\\lalo-eda_v0.0.0.2_win64_bin.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "lalo-eda_v0.0.0.2_win64_setup.exe")
			{
				File::Delete(Application::StartupPath + "\\lalo-eda_v0.0.0.2_win64_setup.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "lalo-eda_v0.0.2-0_all.deb")
			{
				File::Delete(Application::StartupPath + "\\lalo-eda_v0.0.2-0_all.deb");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "otn-server_v0.0.1.exe")
			{
				File::Delete(Application::StartupPath + "\\otn-server_v0.0.1.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "otn-server_v0.0.2.exe")
			{
				File::Delete(Application::StartupPath + "\\otn-server_v0.0.2.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "otn-server_v0.0.3.exe")
			{
				File::Delete(Application::StartupPath + "\\otn-server_v0.0.3.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "otn-server_v0.0.4.exe")
			{
				File::Delete(Application::StartupPath + "\\otn-server_v0.0.4.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "otn-server_v0.0.5.exe")
			{
				File::Delete(Application::StartupPath + "\\otn-server_v0.0.5.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "otn-server_v0.0.6.exe")
			{
				File::Delete(Application::StartupPath + "\\otn-server_v0.0.6.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "otn-server_v0.0.7.exe")
			{
				File::Delete(Application::StartupPath + "\\otn-server_v0.0.7.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "otn-server_v0.0.8.exe")
			{
				File::Delete(Application::StartupPath + "\\otn-server_v0.0.8.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "otn-server_v0.1.0.exe")
			{
				File::Delete(Application::StartupPath + "\\otn-server_v0.1.0.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "otn-server_v0.1.1.exe")
			{
				File::Delete(Application::StartupPath + "\\otn-server_v0.1.1.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "OTNClient_v0.1.1.exe")
			{
				File::Delete(Application::StartupPath + "\\OTNClient_v0.1.1.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "sparros_armel_20200108_alpha_v0.0.1.img.xz")
			{
				File::Delete(Application::StartupPath + "\\sparros_armel_20200108_alpha_v0.0.1.img.xz");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "sparros_armel_20200224_alpha_v0.0.2.img.xz")
			{
				File::Delete(Application::StartupPath + "\\sparros_armel_20200224_alpha_v0.0.2.img.xz");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "sparros_armhf_20200108_alpha_v0.0.1.img.xz")
			{
				File::Delete(Application::StartupPath + "\\sparros_armhf_20200108_alpha_v0.0.1.img.xz");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "sparros_armhf_20200224_alpha_v0.0.2.img.xz")
			{
				File::Delete(Application::StartupPath + "\\sparros_armhf_20200224_alpha_v0.0.2.img.xz");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "sparros_x64_20200108_alpha_v0.0.1.iso.zip")
			{
				File::Delete(Application::StartupPath + "\\sparros_x64_20200108_alpha_v0.0.1.iso.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "sparros_x64_20200224_alpha_v0.0.2.iso.zip")
			{
				File::Delete(Application::StartupPath + "\\sparros_x64_20200224_alpha_v0.0.2.iso.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "sparros_x86_20200108_alpha_v0.0.1.iso.zip")
			{
				File::Delete(Application::StartupPath + "\\sparros_x86_20200108_alpha_v0.0.1.iso.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "sparros_x86_20200224_alpha_v0.0.2.iso.zip")
			{
				File::Delete(Application::StartupPath + "\\sparros_x86_20200224_alpha_v0.0.2.iso.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "sparros_x86_20200224_alpha_v0.0.2.vmdk.zip")
			{
				File::Delete(Application::StartupPath + "\\sparros_x86_20200224_alpha_v0.0.2.vmdk.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "SYGTVGTEST0040.exe")
			{
				File::Delete(Application::StartupPath + "\\SYGTVGTEST0040.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "SYGTVGTEST0040_includes_discordrp.exe")
			{
				File::Delete(Application::StartupPath + "\\SYGTVGTEST0040_includes_discordrp.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "unixv5.gba")
			{
				File::Delete(Application::StartupPath + "\\unixv5.gba");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "uptime_v1.0-bin-beta.zip")
			{
				File::Delete(Application::StartupPath + "\\uptime_v1.0-bin-beta.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "uptime_v1.0-setup-beta.exe")
			{
				File::Delete(Application::StartupPath + "\\uptime_v1.0-setup-beta.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "uptime_v1.0-bin-beta-legacy.zip")
			{
				File::Delete(Application::StartupPath + "\\uptime_v1.0-bin-beta-legacy.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "uptime_v1.0-setup-beta-legacy.exe")
			{
				File::Delete(Application::StartupPath + "\\uptime_v1.0-setup-beta-legacy.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "usrcheat-old_v0.1.zip")
			{
				File::Delete(Application::StartupPath + "\\usrcheat-old_v0.1.zip");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "Win9-Downloader.exe")
			{
				File::Delete(Application::StartupPath + "\\Win9-Downloader.exe");
				CheckForFiles();
				return;
			}
			if (downloadsListBox->SelectedItem == "yoes_usercheat-database_current.zip")
			{
				File::Delete(Application::StartupPath + "\\yoes_usercheat-database_current.zip");
				CheckForFiles();
				return;
			}
		}
	};
}
