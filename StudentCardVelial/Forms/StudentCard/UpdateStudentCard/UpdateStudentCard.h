#pragma once

#include "../../../BD/BaseData.h"

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class UpdateStudentCard : public System::Windows::Forms::Form
	{
	public:
		UpdateStudentCard(Student^ s, array<String^>^ PathGroup) : SelectedStudent(s)
		{
			InitializeComponent();
			bd = gcnew BaseData();
		
			TextBoxFIO->Text = Convert::ToString(SelectedStudent->Surname + " " + SelectedStudent->Name + " " + SelectedStudent->Middlename);
			//ButtonStatus
			//Otcekna
			TextBoxOtcenka->Text = Convert::ToString(SelectedStudent->Otcenka);
			TextBoxBirthday->Text = SelectedStudent->Birthday;
			TextBoxGroup->Text = SelectedStudent->Title_Group;
			TextBoxEducationalForm->Text = SelectedStudent->Educational_Form;
			TextBoxYearEnrollment->Text = SelectedStudent->Year_Enrollment;
			this->PictureBoxPhotoStudent->Load(SelectedStudent->Photo_Student);
			TextBoxPhotoStudent->Text = SelectedStudent->Photo_Student;
			TextBoxPointEGE->Text = Convert::ToString(SelectedStudent->Point_EGE);
			TextBoxStipendiya->Text = Convert::ToString(SelectedStudent->Stipendiya);
			TextBoxPhoneNumber->Text = SelectedStudent->Phone_Number;
			TextBoxMail->Text = SelectedStudent->Mail;
			TextBoxLogin->Text = SelectedStudent->Login;
			TextBoxPassword->Text = SelectedStudent->Password;
		}

	protected:
		~UpdateStudentCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ LabelBirthdayStudent;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ LabelNameStudent;
	private: System::Windows::Forms::PictureBox^ PictureBoxPhotoStudent;
	private: System::Windows::Forms::TextBox^ TextBoxFIO;

	private: System::Windows::Forms::TextBox^ TextBoxGroup;
	private: System::Windows::Forms::TextBox^ TextBoxOtcenka;
	private: System::Windows::Forms::TextBox^ TextBoxBirthday;
	private: System::Windows::Forms::TextBox^ TextBoxPhoneNumber;
	private: System::Windows::Forms::TextBox^ TextBoxStipendiya;
	private: System::Windows::Forms::TextBox^ TextBoxMail;
	private: System::Windows::Forms::TextBox^ TextBoxPointEGE;
	private: System::Windows::Forms::TextBox^ TextBoxEducationalForm;
	private: System::Windows::Forms::TextBox^ TextBoxYearEnrollment;
	private: System::Windows::Forms::Button^ buttonUpdateStudentCard;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ TextBoxPhotoStudent;
	private: System::Windows::Forms::TextBox^ TextBoxPassword;
	private: System::Windows::Forms::TextBox^ TextBoxLogin;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->LabelBirthdayStudent = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LabelNameStudent = (gcnew System::Windows::Forms::Label());
			this->PictureBoxPhotoStudent = (gcnew System::Windows::Forms::PictureBox());
			this->TextBoxFIO = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxGroup = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxOtcenka = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxBirthday = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxStipendiya = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxMail = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxPointEGE = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxEducationalForm = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxYearEnrollment = (gcnew System::Windows::Forms::TextBox());
			this->buttonUpdateStudentCard = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->TextBoxPhotoStudent = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxPhotoStudent))->BeginInit();
			this->SuspendLayout();
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::Control;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label20->Location = System::Drawing::Point(334, 295);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(178, 22);
			this->label20->TabIndex = 50;
			this->label20->Text = L"Электронная почта:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::Control;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label22->Location = System::Drawing::Point(334, 260);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(188, 22);
			this->label22->TabIndex = 48;
			this->label22->Text = L"Мобильный телефон:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::Control;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label24->Location = System::Drawing::Point(220, 220);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(107, 22);
			this->label24->TabIndex = 46;
			this->label24->Text = L"Стипендия:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::Control;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label18->Location = System::Drawing::Point(220, 185);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(97, 22);
			this->label18->TabIndex = 44;
			this->label18->Text = L"Балл ЕГЭ:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Control;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label16->Location = System::Drawing::Point(220, 150);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(157, 22);
			this->label16->TabIndex = 42;
			this->label16->Text = L"Год поступления:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Control;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label14->Location = System::Drawing::Point(220, 115);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(157, 22);
			this->label14->TabIndex = 40;
			this->label14->Text = L"Форма обучения:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Control;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label12->Location = System::Drawing::Point(220, 80);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(74, 22);
			this->label12->TabIndex = 38;
			this->label12->Text = L"Группа:";
			// 
			// LabelBirthdayStudent
			// 
			this->LabelBirthdayStudent->AutoSize = true;
			this->LabelBirthdayStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelBirthdayStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->LabelBirthdayStudent->Location = System::Drawing::Point(493, 46);
			this->LabelBirthdayStudent->Name = L"LabelBirthdayStudent";
			this->LabelBirthdayStudent->Size = System::Drawing::Size(0, 22);
			this->LabelBirthdayStudent->TabIndex = 31;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label3->Location = System::Drawing::Point(375, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 22);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Дата рождения:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label2->Location = System::Drawing::Point(220, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 22);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Оценка:";
			// 
			// LabelNameStudent
			// 
			this->LabelNameStudent->AutoSize = true;
			this->LabelNameStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelNameStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->LabelNameStudent->Location = System::Drawing::Point(218, 8);
			this->LabelNameStudent->Name = L"LabelNameStudent";
			this->LabelNameStudent->Size = System::Drawing::Size(0, 26);
			this->LabelNameStudent->TabIndex = 27;
			// 
			// PictureBoxPhotoStudent
			// 
			this->PictureBoxPhotoStudent->BackColor = System::Drawing::SystemColors::Control;
			this->PictureBoxPhotoStudent->Location = System::Drawing::Point(12, 12);
			this->PictureBoxPhotoStudent->Name = L"PictureBoxPhotoStudent";
			this->PictureBoxPhotoStudent->Size = System::Drawing::Size(200, 205);
			this->PictureBoxPhotoStudent->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBoxPhotoStudent->TabIndex = 26;
			this->PictureBoxPhotoStudent->TabStop = false;
			this->PictureBoxPhotoStudent->Click += gcnew System::EventHandler(this, &UpdateStudentCard::PictureBoxPhotoStudent_Click);
			// 
			// TextBoxFIO
			// 
			this->TextBoxFIO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->TextBoxFIO->Location = System::Drawing::Point(220, 10);
			this->TextBoxFIO->Name = L"TextBoxFIO";
			this->TextBoxFIO->Size = System::Drawing::Size(406, 28);
			this->TextBoxFIO->TabIndex = 1;
			// 
			// TextBoxGroup
			// 
			this->TextBoxGroup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxGroup->Location = System::Drawing::Point(440, 80);
			this->TextBoxGroup->Name = L"TextBoxGroup";
			this->TextBoxGroup->Size = System::Drawing::Size(143, 24);
			this->TextBoxGroup->TabIndex = 4;
			// 
			// TextBoxOtcenka
			// 
			this->TextBoxOtcenka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxOtcenka->Location = System::Drawing::Point(310, 45);
			this->TextBoxOtcenka->Name = L"TextBoxOtcenka";
			this->TextBoxOtcenka->Size = System::Drawing::Size(49, 24);
			this->TextBoxOtcenka->TabIndex = 2;
			// 
			// TextBoxBirthday
			// 
			this->TextBoxBirthday->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxBirthday->Location = System::Drawing::Point(535, 45);
			this->TextBoxBirthday->Name = L"TextBoxBirthday";
			this->TextBoxBirthday->Size = System::Drawing::Size(100, 24);
			this->TextBoxBirthday->TabIndex = 3;
			// 
			// TextBoxPhoneNumber
			// 
			this->TextBoxPhoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxPhoneNumber->Location = System::Drawing::Point(557, 260);
			this->TextBoxPhoneNumber->Name = L"TextBoxPhoneNumber";
			this->TextBoxPhoneNumber->Size = System::Drawing::Size(150, 24);
			this->TextBoxPhoneNumber->TabIndex = 9;
			// 
			// TextBoxStipendiya
			// 
			this->TextBoxStipendiya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxStipendiya->Location = System::Drawing::Point(440, 218);
			this->TextBoxStipendiya->Name = L"TextBoxStipendiya";
			this->TextBoxStipendiya->Size = System::Drawing::Size(143, 24);
			this->TextBoxStipendiya->TabIndex = 8;
			// 
			// TextBoxMail
			// 
			this->TextBoxMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxMail->Location = System::Drawing::Point(557, 295);
			this->TextBoxMail->Name = L"TextBoxMail";
			this->TextBoxMail->Size = System::Drawing::Size(150, 24);
			this->TextBoxMail->TabIndex = 10;
			// 
			// TextBoxPointEGE
			// 
			this->TextBoxPointEGE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxPointEGE->Location = System::Drawing::Point(440, 188);
			this->TextBoxPointEGE->Name = L"TextBoxPointEGE";
			this->TextBoxPointEGE->Size = System::Drawing::Size(143, 24);
			this->TextBoxPointEGE->TabIndex = 7;
			// 
			// TextBoxEducationalForm
			// 
			this->TextBoxEducationalForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxEducationalForm->Location = System::Drawing::Point(440, 115);
			this->TextBoxEducationalForm->Name = L"TextBoxEducationalForm";
			this->TextBoxEducationalForm->Size = System::Drawing::Size(143, 24);
			this->TextBoxEducationalForm->TabIndex = 5;
			// 
			// TextBoxYearEnrollment
			// 
			this->TextBoxYearEnrollment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxYearEnrollment->Location = System::Drawing::Point(440, 150);
			this->TextBoxYearEnrollment->Name = L"TextBoxYearEnrollment";
			this->TextBoxYearEnrollment->Size = System::Drawing::Size(143, 24);
			this->TextBoxYearEnrollment->TabIndex = 6;
			// 
			// buttonUpdateStudentCard
			// 
			this->buttonUpdateStudentCard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->buttonUpdateStudentCard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->buttonUpdateStudentCard->ForeColor = System::Drawing::SystemColors::Control;
			this->buttonUpdateStudentCard->Location = System::Drawing::Point(273, 328);
			this->buttonUpdateStudentCard->Name = L"buttonUpdateStudentCard";
			this->buttonUpdateStudentCard->Size = System::Drawing::Size(184, 44);
			this->buttonUpdateStudentCard->TabIndex = 12;
			this->buttonUpdateStudentCard->Text = L"Изменить";
			this->buttonUpdateStudentCard->UseVisualStyleBackColor = false;
			this->buttonUpdateStudentCard->Click += gcnew System::EventHandler(this, &UpdateStudentCard::buttonUpdateStudentCard_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// TextBoxPhotoStudent
			// 
			this->TextBoxPhotoStudent->Location = System::Drawing::Point(12, 225);
			this->TextBoxPhotoStudent->Name = L"TextBoxPhotoStudent";
			this->TextBoxPhotoStudent->Size = System::Drawing::Size(200, 22);
			this->TextBoxPhotoStudent->TabIndex = 11;
			// 
			// TextBoxPassword
			// 
			this->TextBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxPassword->Location = System::Drawing::Point(149, 295);
			this->TextBoxPassword->Name = L"TextBoxPassword";
			this->TextBoxPassword->Size = System::Drawing::Size(150, 24);
			this->TextBoxPassword->TabIndex = 52;
			// 
			// TextBoxLogin
			// 
			this->TextBoxLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxLogin->Location = System::Drawing::Point(149, 260);
			this->TextBoxLogin->Name = L"TextBoxLogin";
			this->TextBoxLogin->Size = System::Drawing::Size(150, 24);
			this->TextBoxLogin->TabIndex = 51;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label1->Location = System::Drawing::Point(12, 295);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 22);
			this->label1->TabIndex = 54;
			this->label1->Text = L"Пароль:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label4->Location = System::Drawing::Point(12, 260);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 22);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Логин:";
			// 
			// UpdateStudentCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->ClientSize = System::Drawing::Size(717, 379);
			this->Controls->Add(this->TextBoxPassword);
			this->Controls->Add(this->TextBoxLogin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TextBoxPhotoStudent);
			this->Controls->Add(this->buttonUpdateStudentCard);
			this->Controls->Add(this->TextBoxPointEGE);
			this->Controls->Add(this->TextBoxEducationalForm);
			this->Controls->Add(this->TextBoxYearEnrollment);
			this->Controls->Add(this->TextBoxMail);
			this->Controls->Add(this->TextBoxStipendiya);
			this->Controls->Add(this->TextBoxPhoneNumber);
			this->Controls->Add(this->TextBoxBirthday);
			this->Controls->Add(this->TextBoxOtcenka);
			this->Controls->Add(this->TextBoxGroup);
			this->Controls->Add(this->TextBoxFIO);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->LabelBirthdayStudent);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->LabelNameStudent);
			this->Controls->Add(this->PictureBoxPhotoStudent);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MinimizeBox = false;
			this->Name = L"UpdateStudentCard";
			this->Text = L"UpdateStudentCard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxPhotoStudent))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
		BaseData^ bd;
		Student^ SelectedStudent;
#pragma endregion
	private: System::Void PictureBoxPhotoStudent_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ open = gcnew OpenFileDialog();
		open->Filter = "Image Files(*.jpg; *.png; *.jpeg; *.gif; *.bmp)|*.jpg; *.png; *.jpeg; *.gif; *.bmp";
		if (open->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			PictureBoxPhotoStudent->Image = gcnew Bitmap(open->FileName);
			String^ url = open->FileName->Replace('\\', '/');
			TextBoxPhotoStudent->Text = url;
			this->PictureBoxPhotoStudent->Load(url);
		}
	}
	private: System::Void buttonUpdateStudentCard_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!
			if (String::IsNullOrEmpty(TextBoxFIO->Text)) {
				throw gcnew Exception("Заполните поле \"ФИО студент\"!");
			}
			else if (Convert::ToDouble(TextBoxOtcenka->Text)< 0.0 || Convert::ToDouble(TextBoxOtcenka->Text) > 5.0 || String::IsNullOrEmpty(TextBoxOtcenka->Text)) {
				throw gcnew Exception("Заполните поле \"Оценка\" (Диапозон: 0.0-5.0)!");
			}
			else if (String::IsNullOrEmpty(TextBoxBirthday->Text)) {
				throw gcnew Exception("Заполните поле \"Дата рождения\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxGroup->Text)) {
				throw gcnew Exception("Заполните поле \"Название группы\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxEducationalForm->Text)) {
				throw gcnew Exception("Заполните поле \"Форма обучения\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxYearEnrollment->Text)) {
				throw gcnew Exception("Заполните поле \"Год поступления\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxPointEGE->Text)) {
				throw gcnew Exception("Заполните поле \"Баллы ЕГЭ\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxStipendiya->Text)) {
				throw gcnew Exception("Заполните поле \"Стипендия\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxPhoneNumber->Text)) {
				throw gcnew Exception("Заполните поле \"Моб. телефон\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxMail->Text)) {
				throw gcnew Exception("Заполните поле \"Элект. почта\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxPhotoStudent->Text)) {
				throw gcnew Exception("Заполните поле \"Фото студента\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxLogin->Text)) {
				throw gcnew Exception("Заполните поле \"Логин\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxPassword->Text)) {
				throw gcnew Exception("Заполните поле \"Пароль\"!");
			}
			//проверка empty
			bd = gcnew BaseData();
			Student^ UpdatedStudent = gcnew Student();
			array<String^>^ FIO = TextBoxFIO->Text->Split(' ');

			UpdatedStudent->ID = SelectedStudent->ID;
			UpdatedStudent->Surname = FIO[0];
			UpdatedStudent->Name = FIO[1];
			UpdatedStudent->Middlename = FIO[2];
			UpdatedStudent->Otcenka = Convert::ToDouble(TextBoxOtcenka->Text);
			UpdatedStudent->Birthday = TextBoxBirthday->Text;
			UpdatedStudent->Photo_Student = TextBoxPhotoStudent->Text;
			UpdatedStudent->Title_Group = TextBoxGroup->Text;
			UpdatedStudent->Educational_Form = TextBoxEducationalForm->Text;
			UpdatedStudent->Year_Enrollment = TextBoxYearEnrollment->Text;
			UpdatedStudent->Point_EGE = Convert::ToInt32(TextBoxPointEGE->Text);
			UpdatedStudent->Stipendiya = Convert::ToInt32(TextBoxStipendiya->Text);
			UpdatedStudent->Phone_Number = TextBoxPhoneNumber->Text;
			UpdatedStudent->Mail = TextBoxMail->Text;
			UpdatedStudent->Login = TextBoxLogin->Text;
			UpdatedStudent->Password = TextBoxPassword->Text;

			if (bd->Checking(UpdatedStudent)) {
				TextBoxFIO->Text = Convert::ToString(SelectedStudent->Surname + " " + SelectedStudent->Name + " " + SelectedStudent->Middlename);
				TextBoxFIO->Focus();
				throw gcnew Exception("Измените ФИО студента. Нынешнее ФИО совпадает с уже имеющимися!");
			}

			if (bd->CheckingPassword(UpdatedStudent)) {
				TextBoxLogin->Text = SelectedStudent->Login;
				TextBoxPassword->Text = SelectedStudent->Password;
				TextBoxLogin->Focus();
				throw gcnew Exception("Измените логин и пароль студента. Нынешней логин и пароль совпадает с уже имеющимися!");
			}

			bd->Update(UpdatedStudent, SelectedStudent->ID);
			this->Close();
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}
	}
};
}
