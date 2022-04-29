#pragma once

#include "../../BD/BaseData.h"

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Autorization
	/// </summary>
	public ref class Autorization : public System::Windows::Forms::Form
	{
	public:
		Autorization(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Autorization()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ TabControlAutorization;
	private: System::Windows::Forms::TabPage^ TabPageAutorization;
	private: System::Windows::Forms::TabPage^ tabPageRegistration;
	private: System::Windows::Forms::TextBox^ TextBoxLogin;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonAutorization;

	private: System::Windows::Forms::TextBox^ TextBoxPassword;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TextBoxCreateAccountPassword;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TextBoxCreateAccountLogin;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ ButtonCreateAccount;

	protected:

	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TabControlAutorization = (gcnew System::Windows::Forms::TabControl());
			this->TabPageAutorization = (gcnew System::Windows::Forms::TabPage());
			this->buttonAutorization = (gcnew System::Windows::Forms::Button());
			this->TextBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TextBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPageRegistration = (gcnew System::Windows::Forms::TabPage());
			this->TextBoxCreateAccountPassword = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TextBoxCreateAccountLogin = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ButtonCreateAccount = (gcnew System::Windows::Forms::Button());
			this->TabControlAutorization->SuspendLayout();
			this->TabPageAutorization->SuspendLayout();
			this->tabPageRegistration->SuspendLayout();
			this->SuspendLayout();
			// 
			// TabControlAutorization
			// 
			this->TabControlAutorization->Controls->Add(this->TabPageAutorization);
			this->TabControlAutorization->Controls->Add(this->tabPageRegistration);
			this->TabControlAutorization->Location = System::Drawing::Point(12, 12);
			this->TabControlAutorization->Name = L"TabControlAutorization";
			this->TabControlAutorization->SelectedIndex = 0;
			this->TabControlAutorization->Size = System::Drawing::Size(336, 276);
			this->TabControlAutorization->TabIndex = 0;
			// 
			// TabPageAutorization
			// 
			this->TabPageAutorization->BackColor = System::Drawing::Color::LightGray;
			this->TabPageAutorization->Controls->Add(this->buttonAutorization);
			this->TabPageAutorization->Controls->Add(this->TextBoxPassword);
			this->TabPageAutorization->Controls->Add(this->label2);
			this->TabPageAutorization->Controls->Add(this->TextBoxLogin);
			this->TabPageAutorization->Controls->Add(this->label1);
			this->TabPageAutorization->Location = System::Drawing::Point(4, 25);
			this->TabPageAutorization->Name = L"TabPageAutorization";
			this->TabPageAutorization->Padding = System::Windows::Forms::Padding(3);
			this->TabPageAutorization->Size = System::Drawing::Size(328, 247);
			this->TabPageAutorization->TabIndex = 0;
			this->TabPageAutorization->Text = L"Авторизация";
			// 
			// buttonAutorization
			// 
			this->buttonAutorization->BackColor = System::Drawing::Color::Transparent;
			this->buttonAutorization->Location = System::Drawing::Point(103, 156);
			this->buttonAutorization->Name = L"buttonAutorization";
			this->buttonAutorization->Size = System::Drawing::Size(105, 36);
			this->buttonAutorization->TabIndex = 4;
			this->buttonAutorization->Text = L"Войти";
			this->buttonAutorization->UseVisualStyleBackColor = false;
			this->buttonAutorization->Click += gcnew System::EventHandler(this, &Autorization::buttonAutorization_Click);
			// 
			// TextBoxPassword
			// 
			this->TextBoxPassword->Location = System::Drawing::Point(77, 115);
			this->TextBoxPassword->Name = L"TextBoxPassword";
			this->TextBoxPassword->Size = System::Drawing::Size(151, 22);
			this->TextBoxPassword->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label2->Location = System::Drawing::Point(73, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Пароль:";
			// 
			// TextBoxLogin
			// 
			this->TextBoxLogin->Location = System::Drawing::Point(77, 45);
			this->TextBoxLogin->Name = L"TextBoxLogin";
			this->TextBoxLogin->Size = System::Drawing::Size(151, 22);
			this->TextBoxLogin->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label1->Location = System::Drawing::Point(73, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин:";
			// 
			// tabPageRegistration
			// 
			this->tabPageRegistration->BackColor = System::Drawing::Color::LightGray;
			this->tabPageRegistration->Controls->Add(this->TextBoxCreateAccountPassword);
			this->tabPageRegistration->Controls->Add(this->label4);
			this->tabPageRegistration->Controls->Add(this->TextBoxCreateAccountLogin);
			this->tabPageRegistration->Controls->Add(this->label3);
			this->tabPageRegistration->Controls->Add(this->ButtonCreateAccount);
			this->tabPageRegistration->Location = System::Drawing::Point(4, 25);
			this->tabPageRegistration->Name = L"tabPageRegistration";
			this->tabPageRegistration->Padding = System::Windows::Forms::Padding(3);
			this->tabPageRegistration->Size = System::Drawing::Size(328, 247);
			this->tabPageRegistration->TabIndex = 1;
			this->tabPageRegistration->Text = L"Регистрация";
			// 
			// TextBoxCreateAccountPassword
			// 
			this->TextBoxCreateAccountPassword->Location = System::Drawing::Point(87, 111);
			this->TextBoxCreateAccountPassword->Name = L"TextBoxCreateAccountPassword";
			this->TextBoxCreateAccountPassword->Size = System::Drawing::Size(156, 22);
			this->TextBoxCreateAccountPassword->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label4->Location = System::Drawing::Point(83, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Ввведите пароль:";
			// 
			// TextBoxCreateAccountLogin
			// 
			this->TextBoxCreateAccountLogin->Location = System::Drawing::Point(87, 55);
			this->TextBoxCreateAccountLogin->Name = L"TextBoxCreateAccountLogin";
			this->TextBoxCreateAccountLogin->Size = System::Drawing::Size(156, 22);
			this->TextBoxCreateAccountLogin->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label3->Location = System::Drawing::Point(90, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 22);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Введите логин:";
			// 
			// ButtonCreateAccount
			// 
			this->ButtonCreateAccount->Location = System::Drawing::Point(86, 153);
			this->ButtonCreateAccount->Name = L"ButtonCreateAccount";
			this->ButtonCreateAccount->Size = System::Drawing::Size(157, 36);
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
			this->ClientSize = System::Drawing::Size(360, 300);
			this->Controls->Add(this->TabControlAutorization);
			this->Name = L"Autorization";
			this->Text = L"Autorization";
			this->TabControlAutorization->ResumeLayout(false);
			this->TabPageAutorization->ResumeLayout(false);
			this->TabPageAutorization->PerformLayout();
			this->tabPageRegistration->ResumeLayout(false);
			this->tabPageRegistration->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonAutorization_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void ButtonCreateAccount_Click(System::Object^ sender, System::EventArgs^ e) {
		//проверку empty
		BaseData^ bd = gcnew BaseData();
		bd->SignIn(TextBoxCreateAccountLogin->Text, TextBoxCreateAccountPassword->Text);
		TextBoxCreateAccountLogin->Clear();
		TextBoxCreateAccountPassword->Clear();
		TextBoxCreateAccountLogin->Focus();
	}
};
}
