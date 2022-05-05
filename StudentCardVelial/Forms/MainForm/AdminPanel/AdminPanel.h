#pragma once

#include "../../../BD/BaseData.h"

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
		AdminPanel(int ID)
		{
			
			InitializeComponent();
			bd = gcnew BaseData();
			Admin^ admin = bd->FillAdmin(ID);

			TextBoxFIOAdmin->Text = Convert::ToString(admin->Name + " " + admin->Surname + " " + admin->Patronymic);
			////ButtonStatus
			////Otcekna
			TextBoxBirthday->Text = admin->Birthday;
			TextBoxDolzhnostAdmin->Text = admin->Dolzhnost;
			TextBoxStazhAdmin->Text = Convert::ToString(admin->Stazh);
			TextBoxZarplataAdmin->Text = Convert::ToString(admin->Zarplata);
			TextBoxMobilePhoneAdmin->Text = admin->Mobile_Phone;
			this->PictureBoxPhotoAdmin->Load(admin->Photo);
			TextBoxMailAdmin->Text = admin->Mail;
			TextBoxLoginAdmin->Text = admin->Login;
			TextBoxPasswordAdmin->Text = admin->Password;
		}

	protected:
		~AdminPanel()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ TextBoxFIOAdmin;
	private: System::Windows::Forms::TextBox^ TextBoxBirthday;
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
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
			this->TextBoxBirthday = (gcnew System::Windows::Forms::TextBox());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
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
			this->TextBoxFIOAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->TextBoxFIOAdmin->Location = System::Drawing::Point(218, 12);
			this->TextBoxFIOAdmin->Multiline = true;
			this->TextBoxFIOAdmin->Name = L"TextBoxFIOAdmin";
			this->TextBoxFIOAdmin->Size = System::Drawing::Size(328, 33);
			this->TextBoxFIOAdmin->TabIndex = 1;
			// 
			// TextBoxBirthday
			// 
			this->TextBoxBirthday->Location = System::Drawing::Point(371, 50);
			this->TextBoxBirthday->Name = L"TextBoxBirthday";
			this->TextBoxBirthday->Size = System::Drawing::Size(135, 22);
			this->TextBoxBirthday->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label5->Location = System::Drawing::Point(218, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 22);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Дата рождения:";
			// 
			// TextBoxDolzhnostAdmin
			// 
			this->TextBoxDolzhnostAdmin->Location = System::Drawing::Point(371, 82);
			this->TextBoxDolzhnostAdmin->Name = L"TextBoxDolzhnostAdmin";
			this->TextBoxDolzhnostAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxDolzhnostAdmin->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label6->Location = System::Drawing::Point(219, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 22);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Должность:";
			// 
			// TextBoxStazhAdmin
			// 
			this->TextBoxStazhAdmin->Location = System::Drawing::Point(371, 113);
			this->TextBoxStazhAdmin->Name = L"TextBoxStazhAdmin";
			this->TextBoxStazhAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxStazhAdmin->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label4->Location = System::Drawing::Point(219, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 22);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Стаж:";
			// 
			// TextBoxZarplataAdmin
			// 
			this->TextBoxZarplataAdmin->Location = System::Drawing::Point(371, 144);
			this->TextBoxZarplataAdmin->Name = L"TextBoxZarplataAdmin";
			this->TextBoxZarplataAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxZarplataAdmin->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label7->Location = System::Drawing::Point(219, 139);
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
			this->TextBoxLoginAdmin->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label8->Location = System::Drawing::Point(8, 233);
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
			this->TextBoxPasswordAdmin->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label9->Location = System::Drawing::Point(12, 287);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 22);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Пароль:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(214, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 42);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Создать Admin";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(214, 296);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 42);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Изменить Admin";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(332, 248);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 42);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Список Admins";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(331, 296);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 42);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Список Users";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// PictureBoxPhotoAdmin
			// 
			this->PictureBoxPhotoAdmin->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->PictureBoxPhotoAdmin->Location = System::Drawing::Point(12, 12);
			this->PictureBoxPhotoAdmin->Name = L"PictureBoxPhotoAdmin";
			this->PictureBoxPhotoAdmin->Size = System::Drawing::Size(200, 209);
			this->PictureBoxPhotoAdmin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBoxPhotoAdmin->TabIndex = 20;
			this->PictureBoxPhotoAdmin->TabStop = false;
			// 
			// TextBoxMailAdmin
			// 
			this->TextBoxMailAdmin->Location = System::Drawing::Point(371, 200);
			this->TextBoxMailAdmin->Name = L"TextBoxMailAdmin";
			this->TextBoxMailAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxMailAdmin->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label10->Location = System::Drawing::Point(220, 198);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 22);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Элект. почта:";
			// 
			// TextBoxMobilePhoneAdmin
			// 
			this->TextBoxMobilePhoneAdmin->Location = System::Drawing::Point(371, 172);
			this->TextBoxMobilePhoneAdmin->Name = L"TextBoxMobilePhoneAdmin";
			this->TextBoxMobilePhoneAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxMobilePhoneAdmin->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
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
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(558, 355);
			this->Controls->Add(this->TextBoxMailAdmin);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->TextBoxMobilePhoneAdmin);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->PictureBoxPhotoAdmin);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
			this->Controls->Add(this->TextBoxBirthday);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TextBoxFIOAdmin);
			this->Name = L"AdminPanel";
			this->Text = L"AdminPanel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxPhotoAdmin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private:
			BaseData^ bd;
#pragma endregion
	};
}
