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
		
			TextBoxName->Text = Convert::ToString(SelectedStudent->Name + " " + SelectedStudent->Surname + " " + SelectedStudent->Middlename);
			//ButtonStatus
			//Otcekna
			TextBoxOtcenka->Text = Convert::ToString(SelectedStudent->Otcenka);
			TextBoxBirthday->Text = SelectedStudent->Birthday;
			//TextBoxFaculty->Text = PathGroup[0];
			TextBoxGroup->Text = SelectedStudent->Title_Group;
			TextBoxSpecialization->Text = SelectedStudent->Specialization;
			TextBoxNumberKurc->Text = Convert::ToString(SelectedStudent->Number_Kurc);
			TextBoxEducationalForm->Text = SelectedStudent->Educational_Form;
			TextBoxYearEnrollment->Text = SelectedStudent->Year_Enrollment;
			this->PictureBoxPhotoStudent->Load(SelectedStudent->Photo_Student);
			TextBoxPhotoStudent->Text = SelectedStudent->Photo_Student;
			TextBoxPointEGE->Text = Convert::ToString(SelectedStudent->Point_EGE);
			TextBoxStipendiya->Text = Convert::ToString(SelectedStudent->Stipendiya);
			TextBoxPhoneNumber->Text = SelectedStudent->Phone_Number;
			TextBoxMail->Text = SelectedStudent->Mail;
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
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ LabelBirthdayStudent;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ LabelNameStudent;
	private: System::Windows::Forms::PictureBox^ PictureBoxPhotoStudent;
	private: System::Windows::Forms::TextBox^ TextBoxName;
	private: System::Windows::Forms::TextBox^ TextBoxGroup;
	private: System::Windows::Forms::TextBox^ TextBoxSpecialization;
	private: System::Windows::Forms::TextBox^ TextBoxOtcenka;
	private: System::Windows::Forms::TextBox^ TextBoxBirthday;
	private: System::Windows::Forms::TextBox^ TextBoxNumberKurc;
	private: System::Windows::Forms::TextBox^ TextBoxPhoneNumber;
	private: System::Windows::Forms::TextBox^ TextBoxStipendiya;
	private: System::Windows::Forms::TextBox^ TextBoxMail;
	private: System::Windows::Forms::TextBox^ TextBoxPointEGE;
	private: System::Windows::Forms::TextBox^ TextBoxEducationalForm;
	private: System::Windows::Forms::TextBox^ TextBoxYearEnrollment;
	private: System::Windows::Forms::Button^ buttonUpdateStudentCard;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ TextBoxPhotoStudent;
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
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->LabelBirthdayStudent = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LabelNameStudent = (gcnew System::Windows::Forms::Label());
			this->PictureBoxPhotoStudent = (gcnew System::Windows::Forms::PictureBox());
			this->TextBoxName = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxGroup = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxSpecialization = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxOtcenka = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxBirthday = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNumberKurc = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxStipendiya = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxMail = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxPointEGE = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxEducationalForm = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxYearEnrollment = (gcnew System::Windows::Forms::TextBox());
			this->buttonUpdateStudentCard = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->TextBoxPhotoStudent = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxPhotoStudent))->BeginInit();
			this->SuspendLayout();
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::Control;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label20->Location = System::Drawing::Point(319, 319);
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
			this->label22->Location = System::Drawing::Point(319, 285);
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
			this->label24->Location = System::Drawing::Point(319, 250);
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
			this->label18->Location = System::Drawing::Point(12, 319);
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
			this->label16->Location = System::Drawing::Point(12, 285);
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
			this->label14->Location = System::Drawing::Point(12, 254);
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
			this->label12->Location = System::Drawing::Point(218, 112);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(74, 22);
			this->label12->TabIndex = 38;
			this->label12->Text = L"Группа:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label10->Location = System::Drawing::Point(218, 145);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 22);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Направление:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label8->Location = System::Drawing::Point(218, 199);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 22);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Курс:";
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
			this->label3->Location = System::Drawing::Point(371, 45);
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
			this->label2->Location = System::Drawing::Point(219, 45);
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
			this->PictureBoxPhotoStudent->Size = System::Drawing::Size(200, 209);
			this->PictureBoxPhotoStudent->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBoxPhotoStudent->TabIndex = 26;
			this->PictureBoxPhotoStudent->TabStop = false;
			this->PictureBoxPhotoStudent->Click += gcnew System::EventHandler(this, &UpdateStudentCard::PictureBoxPhotoStudent_Click);
			// 
			// TextBoxName
			// 
			this->TextBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->TextBoxName->Location = System::Drawing::Point(218, 12);
			this->TextBoxName->Name = L"TextBoxName";
			this->TextBoxName->Size = System::Drawing::Size(324, 28);
			this->TextBoxName->TabIndex = 52;
			// 
			// TextBoxGroup
			// 
			this->TextBoxGroup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxGroup->Location = System::Drawing::Point(375, 109);
			this->TextBoxGroup->Name = L"TextBoxGroup";
			this->TextBoxGroup->Size = System::Drawing::Size(143, 24);
			this->TextBoxGroup->TabIndex = 54;
			// 
			// TextBoxSpecialization
			// 
			this->TextBoxSpecialization->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxSpecialization->Location = System::Drawing::Point(375, 137);
			this->TextBoxSpecialization->Multiline = true;
			this->TextBoxSpecialization->Name = L"TextBoxSpecialization";
			this->TextBoxSpecialization->Size = System::Drawing::Size(252, 53);
			this->TextBoxSpecialization->TabIndex = 55;
			// 
			// TextBoxOtcenka
			// 
			this->TextBoxOtcenka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxOtcenka->Location = System::Drawing::Point(307, 44);
			this->TextBoxOtcenka->Name = L"TextBoxOtcenka";
			this->TextBoxOtcenka->Size = System::Drawing::Size(49, 24);
			this->TextBoxOtcenka->TabIndex = 56;
			// 
			// TextBoxBirthday
			// 
			this->TextBoxBirthday->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxBirthday->Location = System::Drawing::Point(534, 45);
			this->TextBoxBirthday->Name = L"TextBoxBirthday";
			this->TextBoxBirthday->Size = System::Drawing::Size(100, 24);
			this->TextBoxBirthday->TabIndex = 57;
			// 
			// TextBoxNumberKurc
			// 
			this->TextBoxNumberKurc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxNumberKurc->Location = System::Drawing::Point(375, 199);
			this->TextBoxNumberKurc->Name = L"TextBoxNumberKurc";
			this->TextBoxNumberKurc->Size = System::Drawing::Size(100, 24);
			this->TextBoxNumberKurc->TabIndex = 58;
			// 
			// TextBoxPhoneNumber
			// 
			this->TextBoxPhoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxPhoneNumber->Location = System::Drawing::Point(541, 285);
			this->TextBoxPhoneNumber->Name = L"TextBoxPhoneNumber";
			this->TextBoxPhoneNumber->Size = System::Drawing::Size(150, 24);
			this->TextBoxPhoneNumber->TabIndex = 59;
			// 
			// TextBoxStipendiya
			// 
			this->TextBoxStipendiya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxStipendiya->Location = System::Drawing::Point(541, 250);
			this->TextBoxStipendiya->Name = L"TextBoxStipendiya";
			this->TextBoxStipendiya->Size = System::Drawing::Size(150, 24);
			this->TextBoxStipendiya->TabIndex = 60;
			// 
			// TextBoxMail
			// 
			this->TextBoxMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxMail->Location = System::Drawing::Point(541, 319);
			this->TextBoxMail->Name = L"TextBoxMail";
			this->TextBoxMail->Size = System::Drawing::Size(150, 24);
			this->TextBoxMail->TabIndex = 61;
			// 
			// TextBoxPointEGE
			// 
			this->TextBoxPointEGE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxPointEGE->Location = System::Drawing::Point(198, 317);
			this->TextBoxPointEGE->Name = L"TextBoxPointEGE";
			this->TextBoxPointEGE->Size = System::Drawing::Size(100, 24);
			this->TextBoxPointEGE->TabIndex = 64;
			// 
			// TextBoxEducationalForm
			// 
			this->TextBoxEducationalForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxEducationalForm->Location = System::Drawing::Point(198, 250);
			this->TextBoxEducationalForm->Name = L"TextBoxEducationalForm";
			this->TextBoxEducationalForm->Size = System::Drawing::Size(100, 24);
			this->TextBoxEducationalForm->TabIndex = 63;
			// 
			// TextBoxYearEnrollment
			// 
			this->TextBoxYearEnrollment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F));
			this->TextBoxYearEnrollment->Location = System::Drawing::Point(198, 283);
			this->TextBoxYearEnrollment->Name = L"TextBoxYearEnrollment";
			this->TextBoxYearEnrollment->Size = System::Drawing::Size(100, 24);
			this->TextBoxYearEnrollment->TabIndex = 62;
			// 
			// buttonUpdateStudentCard
			// 
			this->buttonUpdateStudentCard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->buttonUpdateStudentCard->Location = System::Drawing::Point(290, 350);
			this->buttonUpdateStudentCard->Name = L"buttonUpdateStudentCard";
			this->buttonUpdateStudentCard->Size = System::Drawing::Size(129, 44);
			this->buttonUpdateStudentCard->TabIndex = 65;
			this->buttonUpdateStudentCard->Text = L"Изменить";
			this->buttonUpdateStudentCard->UseVisualStyleBackColor = true;
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
			this->TextBoxPhotoStudent->TabIndex = 66;
			// 
			// UpdateStudentCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(703, 399);
			this->Controls->Add(this->TextBoxPhotoStudent);
			this->Controls->Add(this->buttonUpdateStudentCard);
			this->Controls->Add(this->TextBoxPointEGE);
			this->Controls->Add(this->TextBoxEducationalForm);
			this->Controls->Add(this->TextBoxYearEnrollment);
			this->Controls->Add(this->TextBoxMail);
			this->Controls->Add(this->TextBoxStipendiya);
			this->Controls->Add(this->TextBoxPhoneNumber);
			this->Controls->Add(this->TextBoxNumberKurc);
			this->Controls->Add(this->TextBoxBirthday);
			this->Controls->Add(this->TextBoxOtcenka);
			this->Controls->Add(this->TextBoxSpecialization);
			this->Controls->Add(this->TextBoxGroup);
			this->Controls->Add(this->TextBoxName);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->LabelBirthdayStudent);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->LabelNameStudent);
			this->Controls->Add(this->PictureBoxPhotoStudent);
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
		//проверка empty
		bd = gcnew BaseData();
		Student^ UpdatedStudent = gcnew Student();
		array<String^>^ FIO = TextBoxName->Text->Split(' ');
		//Console::WriteLine("ФИО: {0} {1} {2}", FIO[0], FIO[1], FIO[2]);
		UpdatedStudent->Name = FIO[0];
		UpdatedStudent->Surname = FIO[1];
		UpdatedStudent->Middlename = FIO[2];
		UpdatedStudent->Otcenka = Convert::ToDouble(TextBoxOtcenka->Text);
		UpdatedStudent->Birthday = TextBoxBirthday->Text;
		UpdatedStudent->Photo_Student = TextBoxPhotoStudent->Text;
		//Нельзя поменять факультет
		UpdatedStudent->Title_Group = TextBoxGroup->Text;
		UpdatedStudent->Specialization = TextBoxSpecialization->Text;
		UpdatedStudent->Number_Kurc = Convert::ToInt32(TextBoxNumberKurc->Text);
		UpdatedStudent->Educational_Form =TextBoxEducationalForm->Text;
		UpdatedStudent->Year_Enrollment =TextBoxYearEnrollment->Text;
		UpdatedStudent->Point_EGE = Convert::ToInt32(TextBoxPointEGE->Text);
		UpdatedStudent->Stipendiya = Convert::ToInt32(TextBoxStipendiya->Text);
		UpdatedStudent->Phone_Number = TextBoxPhoneNumber->Text;
		UpdatedStudent->Mail = TextBoxMail->Text;

		bd->Update(UpdatedStudent, SelectedStudent->ID);
		//bd->Reload(list_students, ListViewPanel, PathGroup[1]);
		this->Close();
	}
};
}
