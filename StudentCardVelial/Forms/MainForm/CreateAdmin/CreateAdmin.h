#pragma once

#include "../../../BD/BaseData.h"

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CreateAdmin : public System::Windows::Forms::Form
	{
	public:
		CreateAdmin(void)
		{
			InitializeComponent();
			TextBoxNameAdmin->Focus();
		}

	protected:
		~CreateAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TextBoxMailAdmin;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ TextBoxMobilePhoneAdmin;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ PictureBoxPhotoAdmin;
	private: System::Windows::Forms::Button^ ButtonCreateAdmin;
	private: System::Windows::Forms::TextBox^ TextBoxPasswordAdmin;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ TextBoxLoginAdmin;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ TextBoxZarplataAdmin;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TextBoxStazhAdmin;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TextBoxDolzhnostAdmin;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TextBoxBirthdayAdmin;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TextBoxNameAdmin;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TextBoxSurnameAdmin;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TextBoxPatronymicAdmin;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TextBoxPathPhoto;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ ButtonAddPhoto;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->TextBoxMailAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TextBoxMobilePhoneAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->PictureBoxPhotoAdmin = (gcnew System::Windows::Forms::PictureBox());
			this->ButtonCreateAdmin = (gcnew System::Windows::Forms::Button());
			this->TextBoxPasswordAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TextBoxLoginAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TextBoxZarplataAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TextBoxStazhAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TextBoxDolzhnostAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TextBoxBirthdayAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TextBoxNameAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TextBoxSurnameAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TextBoxPatronymicAdmin = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TextBoxPathPhoto = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->ButtonAddPhoto = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxPhotoAdmin))->BeginInit();
			this->SuspendLayout();
			// 
			// TextBoxMailAdmin
			// 
			this->TextBoxMailAdmin->Location = System::Drawing::Point(499, 132);
			this->TextBoxMailAdmin->Name = L"TextBoxMailAdmin";
			this->TextBoxMailAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxMailAdmin->TabIndex = 47;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label10->Location = System::Drawing::Point(348, 132);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 22);
			this->label10->TabIndex = 49;
			this->label10->Text = L"Элект. почта:";
			// 
			// TextBoxMobilePhoneAdmin
			// 
			this->TextBoxMobilePhoneAdmin->Location = System::Drawing::Point(499, 104);
			this->TextBoxMobilePhoneAdmin->Name = L"TextBoxMobilePhoneAdmin";
			this->TextBoxMobilePhoneAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxMobilePhoneAdmin->TabIndex = 46;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label11->Location = System::Drawing::Point(348, 102);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(131, 22);
			this->label11->TabIndex = 48;
			this->label11->Text = L"Моб. телефон:";
			// 
			// PictureBoxPhotoAdmin
			// 
			this->PictureBoxPhotoAdmin->BackColor = System::Drawing::Color::LightGray;
			this->PictureBoxPhotoAdmin->Location = System::Drawing::Point(12, 166);
			this->PictureBoxPhotoAdmin->Name = L"PictureBoxPhotoAdmin";
			this->PictureBoxPhotoAdmin->Size = System::Drawing::Size(181, 133);
			this->PictureBoxPhotoAdmin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBoxPhotoAdmin->TabIndex = 45;
			this->PictureBoxPhotoAdmin->TabStop = false;
			// 
			// ButtonCreateAdmin
			// 
			this->ButtonCreateAdmin->Location = System::Drawing::Point(263, 263);
			this->ButtonCreateAdmin->Name = L"ButtonCreateAdmin";
			this->ButtonCreateAdmin->Size = System::Drawing::Size(144, 49);
			this->ButtonCreateAdmin->TabIndex = 37;
			this->ButtonCreateAdmin->Text = L"Создать Admin";
			this->ButtonCreateAdmin->UseVisualStyleBackColor = true;
			this->ButtonCreateAdmin->Click += gcnew System::EventHandler(this, &CreateAdmin::ButtonCreateAdmin_Click);
			// 
			// TextBoxPasswordAdmin
			// 
			this->TextBoxPasswordAdmin->Location = System::Drawing::Point(314, 216);
			this->TextBoxPasswordAdmin->Name = L"TextBoxPasswordAdmin";
			this->TextBoxPasswordAdmin->Size = System::Drawing::Size(157, 22);
			this->TextBoxPasswordAdmin->TabIndex = 35;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label9->Location = System::Drawing::Point(232, 214);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 22);
			this->label9->TabIndex = 44;
			this->label9->Text = L"Пароль:";
			// 
			// TextBoxLoginAdmin
			// 
			this->TextBoxLoginAdmin->Location = System::Drawing::Point(314, 188);
			this->TextBoxLoginAdmin->Name = L"TextBoxLoginAdmin";
			this->TextBoxLoginAdmin->Size = System::Drawing::Size(157, 22);
			this->TextBoxLoginAdmin->TabIndex = 34;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label8->Location = System::Drawing::Point(228, 186);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 22);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Логин:";
			// 
			// TextBoxZarplataAdmin
			// 
			this->TextBoxZarplataAdmin->Location = System::Drawing::Point(499, 76);
			this->TextBoxZarplataAdmin->Name = L"TextBoxZarplataAdmin";
			this->TextBoxZarplataAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxZarplataAdmin->TabIndex = 32;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label7->Location = System::Drawing::Point(347, 71);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 22);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Зарплата:";
			// 
			// TextBoxStazhAdmin
			// 
			this->TextBoxStazhAdmin->Location = System::Drawing::Point(499, 45);
			this->TextBoxStazhAdmin->Name = L"TextBoxStazhAdmin";
			this->TextBoxStazhAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxStazhAdmin->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label4->Location = System::Drawing::Point(347, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 22);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Стаж:";
			// 
			// TextBoxDolzhnostAdmin
			// 
			this->TextBoxDolzhnostAdmin->Location = System::Drawing::Point(499, 14);
			this->TextBoxDolzhnostAdmin->Name = L"TextBoxDolzhnostAdmin";
			this->TextBoxDolzhnostAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxDolzhnostAdmin->TabIndex = 30;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label6->Location = System::Drawing::Point(347, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 22);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Должность:";
			// 
			// TextBoxBirthdayAdmin
			// 
			this->TextBoxBirthdayAdmin->Location = System::Drawing::Point(178, 104);
			this->TextBoxBirthdayAdmin->Name = L"TextBoxBirthdayAdmin";
			this->TextBoxBirthdayAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxBirthdayAdmin->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label5->Location = System::Drawing::Point(11, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 22);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Дата рождения:";
			// 
			// TextBoxNameAdmin
			// 
			this->TextBoxNameAdmin->Location = System::Drawing::Point(178, 12);
			this->TextBoxNameAdmin->Name = L"TextBoxNameAdmin";
			this->TextBoxNameAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxNameAdmin->TabIndex = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label1->Location = System::Drawing::Point(11, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 22);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Имя:";
			// 
			// TextBoxSurnameAdmin
			// 
			this->TextBoxSurnameAdmin->Location = System::Drawing::Point(178, 45);
			this->TextBoxSurnameAdmin->Name = L"TextBoxSurnameAdmin";
			this->TextBoxSurnameAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxSurnameAdmin->TabIndex = 52;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label2->Location = System::Drawing::Point(11, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 22);
			this->label2->TabIndex = 53;
			this->label2->Text = L"Фамилия:";
			// 
			// TextBoxPatronymicAdmin
			// 
			this->TextBoxPatronymicAdmin->Location = System::Drawing::Point(178, 74);
			this->TextBoxPatronymicAdmin->Name = L"TextBoxPatronymicAdmin";
			this->TextBoxPatronymicAdmin->Size = System::Drawing::Size(135, 22);
			this->TextBoxPatronymicAdmin->TabIndex = 54;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label3->Location = System::Drawing::Point(11, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 22);
			this->label3->TabIndex = 55;
			this->label3->Text = L"Отчество:";
			// 
			// TextBoxPathPhoto
			// 
			this->TextBoxPathPhoto->Location = System::Drawing::Point(12, 305);
			this->TextBoxPathPhoto->Name = L"TextBoxPathPhoto";
			this->TextBoxPathPhoto->Size = System::Drawing::Size(181, 22);
			this->TextBoxPathPhoto->TabIndex = 56;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label12->Location = System::Drawing::Point(12, 136);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 22);
			this->label12->TabIndex = 57;
			this->label12->Text = L"Фото:";
			// 
			// ButtonAddPhoto
			// 
			this->ButtonAddPhoto->Location = System::Drawing::Point(76, 135);
			this->ButtonAddPhoto->Name = L"ButtonAddPhoto";
			this->ButtonAddPhoto->Size = System::Drawing::Size(91, 28);
			this->ButtonAddPhoto->TabIndex = 58;
			this->ButtonAddPhoto->Text = L"Выбрать";
			this->ButtonAddPhoto->UseVisualStyleBackColor = true;
			this->ButtonAddPhoto->Click += gcnew System::EventHandler(this, &CreateAdmin::ButtonAddPhoto_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// CreateAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(650, 335);
			this->Controls->Add(this->ButtonAddPhoto);
			this->Controls->Add(this->TextBoxPathPhoto);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->TextBoxPatronymicAdmin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TextBoxSurnameAdmin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TextBoxNameAdmin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TextBoxMailAdmin);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->TextBoxMobilePhoneAdmin);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->PictureBoxPhotoAdmin);
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
			this->Name = L"CreateAdmin";
			this->Text = L"CreateAdmin";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxPhotoAdmin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonAddPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ open = gcnew OpenFileDialog();
		open->Filter = "Image Files(*.jpg; *.png; *.jpeg; *.gif; *.bmp)|*.jpg; *.png; *.jpeg; *.gif; *.bmp";
		if (open->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			PictureBoxPhotoAdmin->Image = gcnew Bitmap(open->FileName);
			String^ url = open->FileName->Replace('\\', '/');
			TextBoxPathPhoto->Text = url;
			this->PictureBoxPhotoAdmin->Load(url);
		}
	}
	private: System::Void ButtonCreateAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		BaseData^ bd = gcnew BaseData();
		Admin^ newAdmin = gcnew Admin();
		newAdmin->Name = TextBoxNameAdmin->Text;
		newAdmin->Surname = TextBoxSurnameAdmin->Text;
		newAdmin->Patronymic = TextBoxPatronymicAdmin->Text;
		newAdmin->Birthday = TextBoxBirthdayAdmin->Text;
		newAdmin->Dolzhnost = TextBoxDolzhnostAdmin->Text;
		newAdmin->Stazh = Convert::ToInt32(TextBoxStazhAdmin->Text);
		newAdmin->Zarplata = Convert::ToInt32(TextBoxZarplataAdmin->Text);
		newAdmin->Photo = TextBoxPathPhoto->Text;
		newAdmin->Mobile_Phone = TextBoxMobilePhoneAdmin->Text;
		newAdmin->Mail = TextBoxMailAdmin->Text;
		newAdmin->Login = TextBoxLoginAdmin->Text;
		newAdmin->Password = TextBoxPasswordAdmin->Text;

		bd->Insert(newAdmin);

		TextBoxNameAdmin->Clear();
		TextBoxSurnameAdmin->Clear();
		TextBoxPatronymicAdmin->Clear();
		TextBoxBirthdayAdmin->Clear();
		TextBoxDolzhnostAdmin->Clear();
		this->PictureBoxPhotoAdmin->Image = nullptr;
		TextBoxStazhAdmin->Clear();
		TextBoxZarplataAdmin->Clear();
		TextBoxPathPhoto->Clear();
		TextBoxMobilePhoneAdmin->Clear();
		TextBoxMailAdmin->Clear();
		TextBoxLoginAdmin->Clear();
		TextBoxPasswordAdmin->Clear();
		TextBoxNameAdmin->Focus();
		this->Close();
	}
};
}
