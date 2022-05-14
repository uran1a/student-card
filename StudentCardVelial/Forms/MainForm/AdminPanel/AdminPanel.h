#pragma once

#include "../../../BD/BaseData.h"
#include "../CreateAdmin/CreateAdmin.h"
#include "../../Authorization/ListUsers/ListUsers.h"

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AdminPanel : public System::Windows::Forms::Form
	{
	public:
		AdminPanel(int ID): AdminID(ID)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("C:/Users/voron/Downloads/edu3.ico");
			bd = gcnew BaseData();
			admin = bd->FillAdmin(ID);
			TextBoxFIOAdmin->Text = Convert::ToString(admin->Surname + " " + admin->Name + " " + admin->Middlename);
			TextBoxBirthdayAdmin->Text = admin->Birthday;
			TextBoxDolzhnostAdmin->Text = admin->Dolzhnost;
			TextBoxStazhAdmin->Text = Convert::ToString(admin->Stazh);
			TextBoxZarplataAdmin->Text = Convert::ToString(admin->Zarplata);
			TextBoxMobilePhoneAdmin->Text = admin->Phone_Number;
			url = admin->Photo;
			this->PictureBoxPhotoAdmin->Load(admin->Photo);
			TextBoxMailAdmin->Text = admin->Mail;
			TextBoxLoginAdmin->Text = admin->Login;
			TextBoxPasswordAdmin->Text = admin->Password;
		}

	protected:
		~AdminPanel()
		{ 
			if (components) delete components;
		}
	private: System::Windows::Forms::TextBox^ TextBoxFIOAdmin;
	private: System::Windows::Forms::TextBox^ TextBoxBirthdayAdmin;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TextBoxDolzhnostAdmin;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TextBoxStazhAdmin;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TextBoxZarplataAdmin;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TextBoxLoginAdmin;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ TextBoxPasswordAdmin;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ ButtonCreateAdmin;
	private: System::Windows::Forms::Button^ ButtonUpdateAdmin;
	private: System::Windows::Forms::Button^ ButtonListAdmins;
	private: System::Windows::Forms::Button^ ButtonListUsers;
	private: System::Windows::Forms::PictureBox^ PictureBoxPhotoAdmin;
	private: System::Windows::Forms::TextBox^ TextBoxMailAdmin;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ TextBoxMobilePhoneAdmin;
	private: System::Windows::Forms::Label^ label11;
	private:System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->TextBoxFIOAdmin = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxBirthdayAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TextBoxDolzhnostAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TextBoxStazhAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TextBoxZarplataAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TextBoxLoginAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TextBoxPasswordAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ButtonCreateAdmin = (gcnew System::Windows::Forms::Button());
			this->ButtonUpdateAdmin = (gcnew System::Windows::Forms::Button());
			this->ButtonListAdmins = (gcnew System::Windows::Forms::Button());
			this->ButtonListUsers = (gcnew System::Windows::Forms::Button());
			this->PictureBoxPhotoAdmin = (gcnew System::Windows::Forms::PictureBox());
			this->TextBoxMailAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TextBoxMobilePhoneAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxPhotoAdmin))->BeginInit();
			this->SuspendLayout();
			// 
			// TextBoxFIOAdmin
			// 
			this->TextBoxFIOAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.8F));
			this->TextBoxFIOAdmin->Location = System::Drawing::Point(218, 12);
			this->TextBoxFIOAdmin->Multiline = true;
			this->TextBoxFIOAdmin->Name = L"TextBoxFIOAdmin";
			this->TextBoxFIOAdmin->Size = System::Drawing::Size(328, 33);
			this->TextBoxFIOAdmin->TabIndex = 1;
			// 
			// TextBoxBirthdayAdmin
			// 
			this->TextBoxBirthdayAdmin->Location = System::Drawing::Point(371, 50);
			this->TextBoxBirthdayAdmin->Name = L"TextBoxBirthdayAdmin";
			this->TextBoxBirthdayAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxBirthdayAdmin->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(220, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 22);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Дата рождения:";
			// 
			// TextBoxDolzhnostAdmin
			// 
			this->TextBoxDolzhnostAdmin->Location = System::Drawing::Point(371, 80);
			this->TextBoxDolzhnostAdmin->Name = L"TextBoxDolzhnostAdmin";
			this->TextBoxDolzhnostAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxDolzhnostAdmin->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(220, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 22);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Должность:";
			// 
			// TextBoxStazhAdmin
			// 
			this->TextBoxStazhAdmin->Location = System::Drawing::Point(371, 110);
			this->TextBoxStazhAdmin->Name = L"TextBoxStazhAdmin";
			this->TextBoxStazhAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxStazhAdmin->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(220, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 22);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Стаж:";
			// 
			// TextBoxZarplataAdmin
			// 
			this->TextBoxZarplataAdmin->Location = System::Drawing::Point(371, 140);
			this->TextBoxZarplataAdmin->Name = L"TextBoxZarplataAdmin";
			this->TextBoxZarplataAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxZarplataAdmin->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(220, 140);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 22);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Зарплата:";
			// 
			// TextBoxLoginAdmin
			// 
			this->TextBoxLoginAdmin->Location = System::Drawing::Point(12, 258);
			this->TextBoxLoginAdmin->Name = L"TextBoxLoginAdmin";
			this->TextBoxLoginAdmin->Size = System::Drawing::Size(157, 22);
			this->TextBoxLoginAdmin->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(12, 233);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 22);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Логин:";
			// 
			// TextBoxPasswordAdmin
			// 
			this->TextBoxPasswordAdmin->Location = System::Drawing::Point(12, 312);
			this->TextBoxPasswordAdmin->Name = L"TextBoxPasswordAdmin";
			this->TextBoxPasswordAdmin->Size = System::Drawing::Size(157, 22);
			this->TextBoxPasswordAdmin->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(12, 287);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 22);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Пароль:";
			// 
			// ButtonCreateAdmin
			// 
			this->ButtonCreateAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->ButtonCreateAdmin->ForeColor = System::Drawing::SystemColors::Control;
			this->ButtonCreateAdmin->Location = System::Drawing::Point(214, 248);
			this->ButtonCreateAdmin->Name = L"ButtonCreateAdmin";
			this->ButtonCreateAdmin->Size = System::Drawing::Size(129, 42);
			this->ButtonCreateAdmin->TabIndex = 11;
			this->ButtonCreateAdmin->Text = L"Создать Admin";
			this->ButtonCreateAdmin->UseVisualStyleBackColor = false;
			this->ButtonCreateAdmin->Click += gcnew System::EventHandler(this, &AdminPanel::ButtonCreateAdmin_Click);
			// 
			// ButtonUpdateAdmin
			// 
			this->ButtonUpdateAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->ButtonUpdateAdmin->ForeColor = System::Drawing::SystemColors::Control;
			this->ButtonUpdateAdmin->Location = System::Drawing::Point(214, 296);
			this->ButtonUpdateAdmin->Name = L"ButtonUpdateAdmin";
			this->ButtonUpdateAdmin->Size = System::Drawing::Size(129, 42);
			this->ButtonUpdateAdmin->TabIndex = 12;
			this->ButtonUpdateAdmin->Text = L"Изменить Admin";
			this->ButtonUpdateAdmin->UseVisualStyleBackColor = false;
			this->ButtonUpdateAdmin->Click += gcnew System::EventHandler(this, &AdminPanel::ButtonUpdateAdmin_Click);
			// 
			// ButtonListAdmins
			// 
			this->ButtonListAdmins->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->ButtonListAdmins->ForeColor = System::Drawing::SystemColors::Control;
			this->ButtonListAdmins->Location = System::Drawing::Point(377, 248);
			this->ButtonListAdmins->Name = L"ButtonListAdmins";
			this->ButtonListAdmins->Size = System::Drawing::Size(129, 42);
			this->ButtonListAdmins->TabIndex = 13;
			this->ButtonListAdmins->Text = L"Список Admins";
			this->ButtonListAdmins->UseVisualStyleBackColor = false;
			this->ButtonListAdmins->Click += gcnew System::EventHandler(this, &AdminPanel::ButtonListAdmins_Click);
			// 
			// ButtonListUsers
			// 
			this->ButtonListUsers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->ButtonListUsers->ForeColor = System::Drawing::SystemColors::Control;
			this->ButtonListUsers->Location = System::Drawing::Point(377, 296);
			this->ButtonListUsers->Name = L"ButtonListUsers";
			this->ButtonListUsers->Size = System::Drawing::Size(129, 42);
			this->ButtonListUsers->TabIndex = 14;
			this->ButtonListUsers->Text = L"Список Users";
			this->ButtonListUsers->UseVisualStyleBackColor = false;
			this->ButtonListUsers->Click += gcnew System::EventHandler(this, &AdminPanel::ButtonListUsers_Click);
			// 
			// PictureBoxPhotoAdmin
			// 
			this->PictureBoxPhotoAdmin->BackColor = System::Drawing::Color::LightGray;
			this->PictureBoxPhotoAdmin->Location = System::Drawing::Point(12, 12);
			this->PictureBoxPhotoAdmin->Name = L"PictureBoxPhotoAdmin";
			this->PictureBoxPhotoAdmin->Size = System::Drawing::Size(200, 209);
			this->PictureBoxPhotoAdmin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBoxPhotoAdmin->TabIndex = 20;
			this->PictureBoxPhotoAdmin->TabStop = false;
			this->PictureBoxPhotoAdmin->Click += gcnew System::EventHandler(this, &AdminPanel::PictureBoxPhotoAdmin_Click);
			// 
			// TextBoxMailAdmin
			// 
			this->TextBoxMailAdmin->Location = System::Drawing::Point(371, 200);
			this->TextBoxMailAdmin->Name = L"TextBoxMailAdmin";
			this->TextBoxMailAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxMailAdmin->TabIndex = 8;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label10->ForeColor = System::Drawing::SystemColors::Control;
			this->label10->Location = System::Drawing::Point(220, 200);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 22);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Элект. почта:";
			// 
			// TextBoxMobilePhoneAdmin
			// 
			this->TextBoxMobilePhoneAdmin->Location = System::Drawing::Point(371, 170);
			this->TextBoxMobilePhoneAdmin->Name = L"TextBoxMobilePhoneAdmin";
			this->TextBoxMobilePhoneAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxMobilePhoneAdmin->TabIndex = 6;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label11->ForeColor = System::Drawing::SystemColors::Control;
			this->label11->Location = System::Drawing::Point(220, 170);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(131, 22);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Моб. телефон:";
			// 
			// AdminPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->ClientSize = System::Drawing::Size(560, 355);
			this->Controls->Add(this->TextBoxMailAdmin);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->TextBoxMobilePhoneAdmin);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->PictureBoxPhotoAdmin);
			this->Controls->Add(this->ButtonListUsers);
			this->Controls->Add(this->ButtonListAdmins);
			this->Controls->Add(this->ButtonUpdateAdmin);
			this->Controls->Add(this->ButtonCreateAdmin);
			this->Controls->Add(this->TextBoxPasswordAdmin);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->TextBoxLoginAdmin);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TextBoxZarplataAdmin);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TextBoxStazhAdmin);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TextBoxDolzhnostAdmin);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TextBoxBirthdayAdmin);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TextBoxFIOAdmin);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"AdminPanel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminPanel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxPhotoAdmin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private:
			BaseData^ bd;
			String^ url;
			Admin^ admin;
			int AdminID;
#pragma endregion
	private: System::Void ButtonCreateAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateAdmin^ admin = gcnew CreateAdmin();
		admin->Show();
	}
	private: System::Void ButtonUpdateAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!
			if (String::IsNullOrEmpty(TextBoxFIOAdmin->Text)) {
				throw gcnew Exception("Заполните поле \"ФИО студент\"!");
			}
			
			else if (String::IsNullOrEmpty(TextBoxBirthdayAdmin->Text)) {
				throw gcnew Exception("Заполните поле \"Дата рождения\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxDolzhnostAdmin->Text)) {
				throw gcnew Exception("Заполните поле \"Должность\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxStazhAdmin->Text)) {
				throw gcnew Exception("Заполните поле \"Стаж\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxZarplataAdmin->Text)) {
				throw gcnew Exception("Заполните поле \"Зарплата\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxMobilePhoneAdmin->Text)) {
				throw gcnew Exception("Заполните поле \"Моб. телефон\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxMailAdmin->Text)) {
				throw gcnew Exception("Заполните поле \"Элект. почта\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxLoginAdmin->Text)) {
				throw gcnew Exception("Заполните поле \"Логин\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxPasswordAdmin->Text)) {
				throw gcnew Exception("Заполните поле \"Пароль\"!");
			}
			BaseData^ bd = gcnew BaseData();
			Admin^ UpdatedAdmin = gcnew Admin();
			array<String^>^ FIO = TextBoxFIOAdmin->Text->Split(' ');
			UpdatedAdmin->ID = AdminID;
			UpdatedAdmin->Surname = FIO[0];
			UpdatedAdmin->Name = FIO[1];
			UpdatedAdmin->Middlename = FIO[2];
			UpdatedAdmin->Birthday = TextBoxBirthdayAdmin->Text;
			UpdatedAdmin->Dolzhnost = TextBoxDolzhnostAdmin->Text;
			UpdatedAdmin->Stazh = Convert::ToInt32(TextBoxStazhAdmin->Text);
			UpdatedAdmin->Zarplata = Convert::ToInt32(TextBoxZarplataAdmin->Text);
			UpdatedAdmin->Photo = url;
			UpdatedAdmin->Phone_Number = TextBoxMobilePhoneAdmin->Text;
			UpdatedAdmin->Mail = TextBoxMailAdmin->Text;
			UpdatedAdmin->Login = TextBoxLoginAdmin->Text;
			UpdatedAdmin->Password = TextBoxPasswordAdmin->Text;

			if (bd->Checking(UpdatedAdmin)) {
				TextBoxFIOAdmin->Text = Convert::ToString(admin->Surname + " " + admin->Name + " " + admin->Middlename);
				TextBoxFIOAdmin->Focus();
				throw gcnew Exception("Измените ФИО админа. Нынешнее ФИО совпадает с уже имеющимися!");
			}

			if (bd->CheckingPassword(UpdatedAdmin)) {
				TextBoxLoginAdmin->Text = admin->Login;
				TextBoxPasswordAdmin->Text = admin->Password;
				TextBoxLoginAdmin->Focus();
				throw gcnew Exception("Измените логин и пароль админа. Нынешний логин и пароль совпадает с уже имеющимися!");
			}

			bd->Update(UpdatedAdmin, AdminID);
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}
	}
	private: System::Void PictureBoxPhotoAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ open = gcnew OpenFileDialog();
		open->Filter = "Image Files(*.jpg; *.png; *.jpeg; *.gif; *.bmp)|*.jpg; *.png; *.jpeg; *.gif; *.bmp";
		if (open->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			PictureBoxPhotoAdmin->Image = gcnew Bitmap(open->FileName);
			url = open->FileName->Replace('\\', '/');
			PictureBoxPhotoAdmin->Text = url;
			this->PictureBoxPhotoAdmin->Load(url);
		}
	}
	private: System::Void ButtonListAdmins_Click(System::Object^ sender, System::EventArgs^ e) {
		ListUsers^ form = gcnew ListUsers(true);
		form->Show();
	}
	private: System::Void ButtonListUsers_Click(System::Object^ sender, System::EventArgs^ e) {
		ListUsers^ form = gcnew ListUsers(false);
		form->Show();
	}
};
}
