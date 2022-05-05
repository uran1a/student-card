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

	enum Static { User = 1, Admin = 2, NoneFind = 0 };

	public ref class Autorization : public System::Windows::Forms::Form
	{
	public:
		Autorization(void)
		{
			InitializeComponent();
			TextBoxLogin->Focus();
			this->TabControlAuthorization->Size = System::Drawing::Size(165, 192);
			this->Size = System::Drawing::Size(200, 255);
		}

	protected:
		~Autorization()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::TabControl^ TabControlAuthorization;
	protected:

	private: System::Windows::Forms::TabPage^ TabPageAuthorization;

	private: System::Windows::Forms::TabPage^ tabPageRegistration;
	private: System::Windows::Forms::TextBox^ TextBoxLogin;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonAuthorization;
	private: System::Windows::Forms::TextBox^ TextBoxPassword;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ButtonCreateAccount;
	private: System::Windows::Forms::Panel^ PanelAdmin;
	private: System::Windows::Forms::Button^ ButtonFacultyForm;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ ButtonListUsers;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ TextBoxCreateAccountLogin;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TextBoxCreateAccountPassword;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->TabControlAuthorization = (gcnew System::Windows::Forms::TabControl());
			this->TabPageAuthorization = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->TextBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonAuthorization = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TextBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->PanelAdmin = (gcnew System::Windows::Forms::Panel());
			this->ButtonFacultyForm = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->ButtonListUsers = (gcnew System::Windows::Forms::Button());
			this->tabPageRegistration = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->TextBoxCreateAccountLogin = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TextBoxCreateAccountPassword = (gcnew System::Windows::Forms::TextBox());
			this->ButtonCreateAccount = (gcnew System::Windows::Forms::Button());
			this->TabControlAuthorization->SuspendLayout();
			this->TabPageAuthorization->SuspendLayout();
			this->panel1->SuspendLayout();
			this->PanelAdmin->SuspendLayout();
			this->tabPageRegistration->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// TabControlAuthorization
			// 
			this->TabControlAuthorization->Controls->Add(this->TabPageAuthorization);
			this->TabControlAuthorization->Controls->Add(this->tabPageRegistration);
			this->TabControlAuthorization->Location = System::Drawing::Point(12, 12);
			this->TabControlAuthorization->Name = L"TabControlAuthorization";
			this->TabControlAuthorization->SelectedIndex = 0;
			this->TabControlAuthorization->Size = System::Drawing::Size(443, 258);
			this->TabControlAuthorization->TabIndex = 0;
			// 
			// TabPageAuthorization
			// 
			this->TabPageAuthorization->BackColor = System::Drawing::Color::LightGray;
			this->TabPageAuthorization->Controls->Add(this->panel1);
			this->TabPageAuthorization->Controls->Add(this->PanelAdmin);
			this->TabPageAuthorization->Location = System::Drawing::Point(4, 25);
			this->TabPageAuthorization->Name = L"TabPageAuthorization";
			this->TabPageAuthorization->Padding = System::Windows::Forms::Padding(3);
			this->TabPageAuthorization->Size = System::Drawing::Size(435, 229);
			this->TabPageAuthorization->TabIndex = 0;
			this->TabPageAuthorization->Text = L"Авторизация";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->TextBoxLogin);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->buttonAuthorization);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->TextBoxPassword);
			this->panel1->Location = System::Drawing::Point(6, 6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(198, 193);
			this->panel1->TabIndex = 7;
			// 
			// TextBoxLogin
			// 
			this->TextBoxLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxLogin->Location = System::Drawing::Point(17, 34);
			this->TextBoxLogin->Name = L"TextBoxLogin";
			this->TextBoxLogin->Size = System::Drawing::Size(166, 24);
			this->TextBoxLogin->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label1->Location = System::Drawing::Point(19, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин:";
			// 
			// buttonAuthorization
			// 
			this->buttonAuthorization->BackColor = System::Drawing::Color::Transparent;
			this->buttonAuthorization->Location = System::Drawing::Point(48, 144);
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
			this->label2->Location = System::Drawing::Point(20, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Пароль:";
			// 
			// TextBoxPassword
			// 
			this->TextBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxPassword->Location = System::Drawing::Point(16, 104);
			this->TextBoxPassword->Name = L"TextBoxPassword";
			this->TextBoxPassword->PasswordChar = '*';
			this->TextBoxPassword->Size = System::Drawing::Size(167, 24);
			this->TextBoxPassword->TabIndex = 3;
			// 
			// PanelAdmin
			// 
			this->PanelAdmin->BackColor = System::Drawing::Color::Transparent;
			this->PanelAdmin->Controls->Add(this->ButtonFacultyForm);
			this->PanelAdmin->Controls->Add(this->label5);
			this->PanelAdmin->Controls->Add(this->ButtonListUsers);
			this->PanelAdmin->Location = System::Drawing::Point(210, 6);
			this->PanelAdmin->Name = L"PanelAdmin";
			this->PanelAdmin->Size = System::Drawing::Size(186, 193);
			this->PanelAdmin->TabIndex = 6;
			this->PanelAdmin->Visible = false;
			// 
			// ButtonFacultyForm
			// 
			this->ButtonFacultyForm->BackColor = System::Drawing::Color::Transparent;
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
			this->label5->Location = System::Drawing::Point(20, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 22);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Панель Админа";
			// 
			// ButtonListUsers
			// 
			this->ButtonListUsers->BackColor = System::Drawing::Color::Transparent;
			this->ButtonListUsers->Location = System::Drawing::Point(34, 47);
			this->ButtonListUsers->Name = L"ButtonListUsers";
			this->ButtonListUsers->Size = System::Drawing::Size(117, 49);
			this->ButtonListUsers->TabIndex = 7;
			this->ButtonListUsers->Text = L"Список пользователей";
			this->ButtonListUsers->UseVisualStyleBackColor = false;
			this->ButtonListUsers->Click += gcnew System::EventHandler(this, &Autorization::ButtonListUsers_Click);
			// 
			// tabPageRegistration
			// 
			this->tabPageRegistration->BackColor = System::Drawing::Color::LightGray;
			this->tabPageRegistration->Controls->Add(this->panel2);
			this->tabPageRegistration->Location = System::Drawing::Point(4, 25);
			this->tabPageRegistration->Name = L"tabPageRegistration";
			this->tabPageRegistration->Padding = System::Windows::Forms::Padding(3);
			this->tabPageRegistration->Size = System::Drawing::Size(435, 229);
			this->tabPageRegistration->TabIndex = 1;
			this->tabPageRegistration->Text = L"Регистрация";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->TextBoxCreateAccountLogin);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->TextBoxCreateAccountPassword);
			this->panel2->Controls->Add(this->ButtonCreateAccount);
			this->panel2->Location = System::Drawing::Point(6, 6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(198, 193);
			this->panel2->TabIndex = 8;
			// 
			// TextBoxCreateAccountLogin
			// 
			this->TextBoxCreateAccountLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxCreateAccountLogin->Location = System::Drawing::Point(17, 34);
			this->TextBoxCreateAccountLogin->Name = L"TextBoxCreateAccountLogin";
			this->TextBoxCreateAccountLogin->Size = System::Drawing::Size(166, 24);
			this->TextBoxCreateAccountLogin->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label6->Location = System::Drawing::Point(14, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 22);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Введите логин:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label7->Location = System::Drawing::Point(13, 80);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(160, 22);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Ввведите пароль:";
			// 
			// TextBoxCreateAccountPassword
			// 
			this->TextBoxCreateAccountPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxCreateAccountPassword->Location = System::Drawing::Point(16, 104);
			this->TextBoxCreateAccountPassword->Name = L"TextBoxCreateAccountPassword";
			this->TextBoxCreateAccountPassword->PasswordChar = '*';
			this->TextBoxCreateAccountPassword->Size = System::Drawing::Size(167, 24);
			this->TextBoxCreateAccountPassword->TabIndex = 3;
			// 
			// ButtonCreateAccount
			// 
			this->ButtonCreateAccount->Location = System::Drawing::Point(13, 145);
			this->ButtonCreateAccount->Name = L"ButtonCreateAccount";
			this->ButtonCreateAccount->Size = System::Drawing::Size(172, 36);
			this->ButtonCreateAccount->TabIndex = 0;
			this->ButtonCreateAccount->Text = L"Зарегистрироваться";
			this->ButtonCreateAccount->UseVisualStyleBackColor = true;
			this->ButtonCreateAccount->Click += gcnew System::EventHandler(this, &Autorization::ButtonCreateAccount_Click);
			// 
			// Autorization
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(468, 283);
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
			this->tabPageRegistration->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
		private: 
			BaseData^ bd;
			int StaticUser;
			int ID = 0;
#pragma endregion
	private: System::Void buttonAutorization_Click(System::Object^ sender, System::EventArgs^ e) {
		bd = gcnew BaseData();
		StaticUser = bd->SignOn(ID, TextBoxLogin->Text, TextBoxPassword->Text);
		TextBoxLogin->Clear();
		TextBoxPassword->Clear();
		TextBoxLogin->Focus();

		if (StaticUser == User) {
			//переход на UserForm
			MessageBox::Show("Верный логин и пароль!");
			Console::WriteLine("ID пользователя: {0}", ID);

			FacultyForm^ form = gcnew FacultyForm(ID, false);
			form->Show();
		}
		else if (StaticUser == Admin) {
			MessageBox::Show("Ты админ!");
			this->TabControlAuthorization->Size = System::Drawing::Size(415, 275);
			this->PanelAdmin->Visible = true;
			this->TabControlAuthorization->Size = System::Drawing::Size(311, 192);
			this->Size = System::Drawing::Size(350, 255);
		}
		else if (StaticUser == NoneFind) {
			MessageBox::Show("Неверный логин или пароль!");
		}
	}
	private: System::Void ButtonCreateAccount_Click(System::Object^ sender, System::EventArgs^ e) {
		//проверку empty
		bd = gcnew BaseData();
		bd->SignIn(TextBoxCreateAccountLogin->Text, TextBoxCreateAccountPassword->Text);
		TextBoxCreateAccountLogin->Clear();
		TextBoxCreateAccountPassword->Clear();
		TextBoxCreateAccountLogin->Focus();
	}

	private: System::Void ButtonFacultyForm_Click(System::Object^ sender, System::EventArgs^ e) {
		FacultyForm^ form = gcnew FacultyForm(ID, true);
		form->Show();
	}
	private: System::Void ButtonListUsers_Click(System::Object^ sender, System::EventArgs^ e) {
		ListUsers^ form = gcnew ListUsers();
		form->Show();
	}
};
}
