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
			if (File::Exists(Application::StartupPath + "\\unixv5.gba") == true)
			{
				downloadsListBox->Items->Add("unixv5.gba");
			}
			if (File::Exists(Application::StartupPath + "\\Win9-Downloader.exe") == true)
			{
				downloadsListBox->Items->Add("Win9-Downloader.exe");
			}
		}
		private: System::Void ManageDownloads_Load(System::Object^ sender, System::EventArgs^ e) {
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
		}
	};
}
