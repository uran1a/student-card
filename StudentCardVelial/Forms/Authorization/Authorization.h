#pragma once

#include "../MainForm/FacultyForm/FacultyForm.h"
#include "../../BD/BaseData.h"
#include "ListUsers/ListUsers.h"

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	enum Static { User = 1, Administrator = 2, NoneFind = 0 };

	public ref class Autorization : public System::Windows::Forms::Form
	{
	public:
		Autorization(void)
		{
			InitializeComponent();
			this->panel1->Size = System::Drawing::Size(366, 337);
		
			this->Size = System::Drawing::Size(417, 453);
			this->TabControlAuthorization->Size = System::Drawing::Size(381, 378);
		}

	protected:
		~Autorization()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::TabControl^ TabControlAuthorization;
	protected:

	private: System::Windows::Forms::TabPage^ TabPageAuthorization;


	private: System::Windows::Forms::TextBox^ TextBoxLogin;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonAuthorization;
	private: System::Windows::Forms::TextBox^ TextBoxPassword;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Panel^ PanelAdmin;
	private: System::Windows::Forms::Button^ ButtonFacultyForm;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ ButtonListUsers;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;





	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Autorization::typeid));
			this->TabControlAuthorization = (gcnew System::Windows::Forms::TabControl());
			this->TabPageAuthorization = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TextBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonAuthorization = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TextBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->PanelAdmin = (gcnew System::Windows::Forms::Panel());
			this->ButtonFacultyForm = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ButtonListUsers = (gcnew System::Windows::Forms::Button());
			this->TabControlAuthorization->SuspendLayout();
			this->TabPageAuthorization->SuspendLayout();
			this->panel1->SuspendLayout();
			this->PanelAdmin->SuspendLayout();
			this->SuspendLayout();
			// 
			// TabControlAuthorization
			// 
			this->TabControlAuthorization->Controls->Add(this->TabPageAuthorization);
			this->TabControlAuthorization->Location = System::Drawing::Point(12, 12);
			this->TabControlAuthorization->Name = L"TabControlAuthorization";
			this->TabControlAuthorization->SelectedIndex = 0;
			this->TabControlAuthorization->Size = System::Drawing::Size(578, 378);
			this->TabControlAuthorization->TabIndex = 0;
			// 
			// TabPageAuthorization
			// 
			this->TabPageAuthorization->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->TabPageAuthorization->Controls->Add(this->panel1);
			this->TabPageAuthorization->Controls->Add(this->PanelAdmin);
			this->TabPageAuthorization->Location = System::Drawing::Point(4, 25);
			this->TabPageAuthorization->Name = L"TabPageAuthorization";
			this->TabPageAuthorization->Padding = System::Windows::Forms::Padding(3);
			this->TabPageAuthorization->Size = System::Drawing::Size(570, 349);
			this->TabPageAuthorization->TabIndex = 0;
			this->TabPageAuthorization->Text = L"Авторизация";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->TextBoxLogin);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->buttonAuthorization);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->TextBoxPassword);
			this->panel1->Location = System::Drawing::Point(6, 6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(366, 337);
			this->panel1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			//this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			//this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(321, 206);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(24, 24);
			this->button1->TabIndex = 5;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Autorization::button1_Click);
			// 
			// TextBoxLogin
			// 
			this->TextBoxLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxLogin->Location = System::Drawing::Point(149, 136);
			this->TextBoxLogin->Name = L"TextBoxLogin";
			this->TextBoxLogin->Size = System::Drawing::Size(166, 24);
			this->TextBoxLogin->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(151, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин:";
			// 
			// buttonAuthorization
			// 
			this->buttonAuthorization->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->buttonAuthorization->Location = System::Drawing::Point(180, 246);
			this->buttonAuthorization->Name = L"buttonAuthorization";
			this->buttonAuthorization->Size = System::Drawing::Size(105, 36);
			this->buttonAuthorization->TabIndex = 4;
			this->buttonAuthorization->Text = L"Войти";
			this->buttonAuthorization->UseVisualStyleBackColor = false;
			this->buttonAuthorization->Click += gcnew System::EventHandler(this, &Autorization::buttonAutorization_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(152, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Пароль:";
			// 
			// TextBoxPassword
			// 
			this->TextBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxPassword->Location = System::Drawing::Point(148, 206);
			this->TextBoxPassword->Name = L"TextBoxPassword";
			this->TextBoxPassword->PasswordChar = '*';
			this->TextBoxPassword->Size = System::Drawing::Size(167, 24);
			this->TextBoxPassword->TabIndex = 3;
			// 
			// PanelAdmin
			// 
			this->PanelAdmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->PanelAdmin->Controls->Add(this->ButtonFacultyForm);
			this->PanelAdmin->Controls->Add(this->label5);
			this->PanelAdmin->Controls->Add(this->ButtonListUsers);
			this->PanelAdmin->Location = System::Drawing::Point(378, 6);
			this->PanelAdmin->Name = L"PanelAdmin";
			this->PanelAdmin->Size = System::Drawing::Size(186, 193);
			this->PanelAdmin->TabIndex = 6;
			this->PanelAdmin->Visible = false;
			// 
			// ButtonFacultyForm
			// 
			this->ButtonFacultyForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->ButtonFacultyForm->Location = System::Drawing::Point(34, 116);
			this->ButtonFacultyForm->Name = L"ButtonFacultyForm";
			this->ButtonFacultyForm->Size = System::Drawing::Size(117, 44);
			this->ButtonFacultyForm->TabIndex = 8;
			this->ButtonFacultyForm->Text = L"Панель университета";
			this->ButtonFacultyForm->UseVisualStyleBackColor = false;
			this->ButtonFacultyForm->Click += gcnew System::EventHandler(this, &Autorization::ButtonFacultyForm_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(20, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 22);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Панель Админа";
			// 
			// ButtonListUsers
			// 
			this->ButtonListUsers->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->ButtonListUsers->ForeColor = System::Drawing::Color::White;
			this->ButtonListUsers->Location = System::Drawing::Point(34, 47);
			this->ButtonListUsers->Name = L"ButtonListUsers";
			this->ButtonListUsers->Size = System::Drawing::Size(117, 49);
			this->ButtonListUsers->TabIndex = 7;
			this->ButtonListUsers->Text = L"Список пользователей";
			this->ButtonListUsers->UseVisualStyleBackColor = false;
			this->ButtonListUsers->Click += gcnew System::EventHandler(this, &Autorization::ButtonListUsers_Click);
			// 
			// Autorization
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->ClientSize = System::Drawing::Size(600, 402);
			this->Controls->Add(this->TabControlAuthorization);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MinimizeBox = false;
			this->Name = L"Autorization";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Autorization";
			this->TabControlAuthorization->ResumeLayout(false);
			this->TabPageAuthorization->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->PanelAdmin->ResumeLayout(false);
			this->PanelAdmin->PerformLayout();
			this->ResumeLayout(false);

		}
		private: 
			BaseData^ bd;
			int StaticUser;
			int ID = 0;
			bool isVisible = false;
#pragma endregion
	private: System::Void buttonAutorization_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!
 			if (String::IsNullOrEmpty(TextBoxLogin->Text))
			{
				throw gcnew Exception("Введите логин!");
			}
			else if (String::IsNullOrEmpty(TextBoxPassword->Text))
			{
				throw gcnew Exception("Введите пароль!");
			}

			bd = gcnew BaseData();
			StaticUser = bd->SignOn(ID, TextBoxLogin->Text, TextBoxPassword->Text);
			TextBoxLogin->Clear();
			TextBoxPassword->Clear();
			TextBoxLogin->Focus();

			if (StaticUser == User) {
				//переход на UserForm
				MessageBox::Show("Верный логин и пароль!");
				FacultyForm^ form = gcnew FacultyForm(ID, false);
				form->Show();
			}
			else if (StaticUser == Administrator) {
				this->TabControlAuthorization->Size = System::Drawing::Size(528, 378);
				this->PanelAdmin->Location = System::Drawing::Point(375, 6);
				this->PanelAdmin->Visible = true;
				this->Size = System::Drawing::Size(567, 453);
			}
			else if (StaticUser == NoneFind) {
				MessageBox::Show("Неверный логин или пароль!");
			}
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}
	}
	private: System::Void ButtonFacultyForm_Click(System::Object^ sender, System::EventArgs^ e) {
		FacultyForm^ form = gcnew FacultyForm(ID, true);
		form->Show();
	}
	private: System::Void ButtonListUsers_Click(System::Object^ sender, System::EventArgs^ e) {
		ListUsers^ form = gcnew ListUsers(false);
		form->Show();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isVisible) {
			this->TextBoxPassword->PasswordChar = '\0';
			isVisible = true;
		} 
		else { 
			this->TextBoxPassword->PasswordChar = '*';
			isVisible = false;
		}
	}
};
}
