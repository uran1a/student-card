#pragma once

#include "../../../BD/BaseData.h"

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ViewStudentCard
	/// </summary>
	public ref class ViewStudentCard : public System::Windows::Forms::Form
	{
	public:
		ViewStudentCard(int ID, array<String^>^ PathGroup) : Index(ID)
		{
			InitializeComponent();
			BaseData^ bd = gcnew BaseData();
			List<Student^>^ list_students = bd->FillListViewStudent(PathGroup[1]);

			LabelNameStudent->Text = Convert::ToString(list_students[Index]->Name + " " + list_students[Index]->Surname + " " + list_students[Index]->Middlename);
			//ButtonStatus
			//Otcekna
			LabelBirthdayStudent->Text = list_students[Index]->Birthday;
			LabelTitleFacultyStudent->Text = PathGroup[0];
			LabelTitleGroupStudent->Text = PathGroup[1];
			LabelSpecializationStudent->Text = list_students[Index]->Specialization;
			LabelNumberKurcStudent->Text = Convert::ToString(list_students[Index]->Number_Kurc);
			LabelEducationalFormStudent->Text = list_students[Index]->Educational_Form;
			LabelYearEnrollmentStudent->Text = list_students[Index]->Year_Enrollment;
			this->PictureBoxPhotoStudent->Load(list_students[Index]->Photo_Student);
			LabelPointEGEStudent->Text = Convert::ToString(list_students[Index]->Point_EGE);
			LabelStipendiyaStudent->Text = Convert::ToString(list_students[Index]->Stipendiya);
			LabelPhoneNumberStudent->Text = list_students[Index]->Phone_Number;
			LabelMailStudent->Text = list_students[Index]->Mail;
			
		
		}

	protected:
		~ViewStudentCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ PictureBoxPhotoStudent;
	private: System::Windows::Forms::Label^ LabelNameStudent;
	private: System::Windows::Forms::Button^ ButtonStatus;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ LabelBirthdayStudent;
	private: System::Windows::Forms::Label^ LabelTitleFacultyStudent;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ LabelNumberKurcStudent;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ LabelSpecializationStudent;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ LabelTitleGroupStudent;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ LabelEducationalFormStudent;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ LabelYearEnrollmentStudent;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ LabelPointEGEStudent;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ LabelMailStudent;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ LabelPhoneNumberStudent;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ LabelStipendiyaStudent;
	private: System::Windows::Forms::Label^ label24;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->PictureBoxPhotoStudent = (gcnew System::Windows::Forms::PictureBox());
			this->LabelNameStudent = (gcnew System::Windows::Forms::Label());
			this->ButtonStatus = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LabelBirthdayStudent = (gcnew System::Windows::Forms::Label());
			this->LabelTitleFacultyStudent = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->LabelNumberKurcStudent = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->LabelSpecializationStudent = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->LabelTitleGroupStudent = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->LabelEducationalFormStudent = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->LabelYearEnrollmentStudent = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->LabelPointEGEStudent = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->LabelMailStudent = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->LabelPhoneNumberStudent = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->LabelStipendiyaStudent = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxPhotoStudent))->BeginInit();
			this->SuspendLayout();
			// 
			// PictureBoxPhotoStudent
			// 
			this->PictureBoxPhotoStudent->Location = System::Drawing::Point(13, 13);
			this->PictureBoxPhotoStudent->Name = L"PictureBoxPhotoStudent";
			this->PictureBoxPhotoStudent->Size = System::Drawing::Size(200, 209);
			this->PictureBoxPhotoStudent->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBoxPhotoStudent->TabIndex = 0;
			this->PictureBoxPhotoStudent->TabStop = false;
			// 
			// LabelNameStudent
			// 
			this->LabelNameStudent->AutoSize = true;
			this->LabelNameStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelNameStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->LabelNameStudent->Location = System::Drawing::Point(219, 9);
			this->LabelNameStudent->Name = L"LabelNameStudent";
			this->LabelNameStudent->Size = System::Drawing::Size(316, 26);
			this->LabelNameStudent->TabIndex = 1;
			// 
			// ButtonStatus
			// 
			this->ButtonStatus->BackColor = System::Drawing::Color::Lime;
			this->ButtonStatus->Location = System::Drawing::Point(300, 45);
			this->ButtonStatus->Name = L"ButtonStatus";
			this->ButtonStatus->Size = System::Drawing::Size(20, 20);
			this->ButtonStatus->TabIndex = 2;
			this->ButtonStatus->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label2->Location = System::Drawing::Point(220, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Статус:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label3->Location = System::Drawing::Point(341, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Дата рождения:";
			// 
			// LabelBirthdayStudent
			// 
			this->LabelBirthdayStudent->AutoSize = true;
			this->LabelBirthdayStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelBirthdayStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->LabelBirthdayStudent->Location = System::Drawing::Point(494, 44);
			this->LabelBirthdayStudent->Name = L"LabelBirthdayStudent";
			this->LabelBirthdayStudent->Size = System::Drawing::Size(100, 22);
			this->LabelBirthdayStudent->TabIndex = 5;
			// 
			// LabelTitleFacultyStudent
			// 
			this->LabelTitleFacultyStudent->AutoSize = true;
			this->LabelTitleFacultyStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelTitleFacultyStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->LabelTitleFacultyStudent->Location = System::Drawing::Point(372, 80);
			this->LabelTitleFacultyStudent->Name = L"LabelTitleFacultyStudent";
			this->LabelTitleFacultyStudent->Size = System::Drawing::Size(77, 22);
			this->LabelTitleFacultyStudent->TabIndex = 7;
			this->LabelTitleFacultyStudent->Text = L"ФЭМИТ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label6->Location = System::Drawing::Point(219, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 22);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Факультет:";
			// 
			// LabelNumberKurcStudent
			// 
			this->LabelNumberKurcStudent->AutoSize = true;
			this->LabelNumberKurcStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelNumberKurcStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->LabelNumberKurcStudent->Location = System::Drawing::Point(372, 200);
			this->LabelNumberKurcStudent->Name = L"LabelNumberKurcStudent";
			this->LabelNumberKurcStudent->Size = System::Drawing::Size(20, 22);
			this->LabelNumberKurcStudent->TabIndex = 9;
			this->LabelNumberKurcStudent->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label8->Location = System::Drawing::Point(219, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 22);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Курс:";
			// 
			// LabelSpecializationStudent
			// 
			this->LabelSpecializationStudent->AutoSize = true;
			this->LabelSpecializationStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelSpecializationStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->LabelSpecializationStudent->Location = System::Drawing::Point(372, 146);
			this->LabelSpecializationStudent->Name = L"LabelSpecializationStudent";
			this->LabelSpecializationStudent->Size = System::Drawing::Size(241, 44);
			this->LabelSpecializationStudent->TabIndex = 11;
			this->LabelSpecializationStudent->Text = L"Информационные системы\r\nи технологии";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label10->Location = System::Drawing::Point(219, 146);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 22);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Направление:";
			// 
			// LabelTitleGroupStudent
			// 
			this->LabelTitleGroupStudent->AutoSize = true;
			this->LabelTitleGroupStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelTitleGroupStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->LabelTitleGroupStudent->Location = System::Drawing::Point(372, 113);
			this->LabelTitleGroupStudent->Name = L"LabelTitleGroupStudent";
			this->LabelTitleGroupStudent->Size = System::Drawing::Size(94, 22);
			this->LabelTitleGroupStudent->TabIndex = 13;
			this->LabelTitleGroupStudent->Text = L"бИСТ-214";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Control;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label12->Location = System::Drawing::Point(219, 113);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(74, 22);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Группа:";
			// 
			// LabelEducationalFormStudent
			// 
			this->LabelEducationalFormStudent->AutoSize = true;
			this->LabelEducationalFormStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelEducationalFormStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->LabelEducationalFormStudent->Location = System::Drawing::Point(172, 238);
			this->LabelEducationalFormStudent->Name = L"LabelEducationalFormStudent";
			this->LabelEducationalFormStudent->Size = System::Drawing::Size(64, 22);
			this->LabelEducationalFormStudent->TabIndex = 15;
			this->LabelEducationalFormStudent->Text = L"Очная";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Control;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label14->Location = System::Drawing::Point(9, 238);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(157, 22);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Форма обучения:";
			// 
			// LabelYearEnrollmentStudent
			// 
			this->LabelYearEnrollmentStudent->AutoSize = true;
			this->LabelYearEnrollmentStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelYearEnrollmentStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->LabelYearEnrollmentStudent->Location = System::Drawing::Point(172, 273);
			this->LabelYearEnrollmentStudent->Name = L"LabelYearEnrollmentStudent";
			this->LabelYearEnrollmentStudent->Size = System::Drawing::Size(50, 22);
			this->LabelYearEnrollmentStudent->TabIndex = 17;
			this->LabelYearEnrollmentStudent->Text = L"2021";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Control;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label16->Location = System::Drawing::Point(9, 273);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(157, 22);
			this->label16->TabIndex = 16;
			this->label16->Text = L"Год поступления:";
			// 
			// LabelPointEGEStudent
			// 
			this->LabelPointEGEStudent->AutoSize = true;
			this->LabelPointEGEStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelPointEGEStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->LabelPointEGEStudent->Location = System::Drawing::Point(172, 307);
			this->LabelPointEGEStudent->Name = L"LabelPointEGEStudent";
			this->LabelPointEGEStudent->Size = System::Drawing::Size(40, 22);
			this->LabelPointEGEStudent->TabIndex = 19;
			this->LabelPointEGEStudent->Text = L"184";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::Control;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label18->Location = System::Drawing::Point(9, 307);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(97, 22);
			this->label18->TabIndex = 18;
			this->label18->Text = L"Балл ЕГЭ:";
			// 
			// LabelMailStudent
			// 
			this->LabelMailStudent->AutoSize = true;
			this->LabelMailStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelMailStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->LabelMailStudent->Location = System::Drawing::Point(510, 307);
			this->LabelMailStudent->Name = L"LabelMailStudent";
			this->LabelMailStudent->Size = System::Drawing::Size(135, 22);
			this->LabelMailStudent->TabIndex = 25;
			this->LabelMailStudent->Text = L"pochta@mail.ru";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::Control;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label20->Location = System::Drawing::Point(294, 307);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(178, 22);
			this->label20->TabIndex = 24;
			this->label20->Text = L"Электронная почта:";
			// 
			// LabelPhoneNumberStudent
			// 
			this->LabelPhoneNumberStudent->AutoSize = true;
			this->LabelPhoneNumberStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelPhoneNumberStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->LabelPhoneNumberStudent->Location = System::Drawing::Point(510, 273);
			this->LabelPhoneNumberStudent->Name = L"LabelPhoneNumberStudent";
			this->LabelPhoneNumberStudent->Size = System::Drawing::Size(131, 22);
			this->LabelPhoneNumberStudent->TabIndex = 23;
			this->LabelPhoneNumberStudent->Text = L"+79204097999";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::Control;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label22->Location = System::Drawing::Point(294, 273);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(199, 22);
			this->label22->TabIndex = 22;
			this->label22->Text = L"Мобилийный телефон:";
			// 
			// LabelStipendiyaStudent
			// 
			this->LabelStipendiyaStudent->AutoSize = true;
			this->LabelStipendiyaStudent->BackColor = System::Drawing::SystemColors::Control;
			this->LabelStipendiyaStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->LabelStipendiyaStudent->Location = System::Drawing::Point(510, 238);
			this->LabelStipendiyaStudent->Name = L"LabelStipendiyaStudent";
			this->LabelStipendiyaStudent->Size = System::Drawing::Size(38, 22);
			this->LabelStipendiyaStudent->TabIndex = 21;
			this->LabelStipendiyaStudent->Text = L"хуй";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::Control;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label24->Location = System::Drawing::Point(294, 238);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(107, 22);
			this->label24->TabIndex = 20;
			this->label24->Text = L"Стипендия:";
			// 
			// ViewStudentCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(704, 343);
			this->Controls->Add(this->LabelMailStudent);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->LabelPhoneNumberStudent);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->LabelStipendiyaStudent);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->LabelPointEGEStudent);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->LabelYearEnrollmentStudent);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->LabelEducationalFormStudent);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->LabelTitleGroupStudent);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->LabelSpecializationStudent);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->LabelNumberKurcStudent);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->LabelTitleFacultyStudent);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->LabelBirthdayStudent);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ButtonStatus);
			this->Controls->Add(this->LabelNameStudent);
			this->Controls->Add(this->PictureBoxPhotoStudent);
			this->Name = L"ViewStudentCard";
			this->Text = L"ViewStudentCard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxPhotoStudent))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
		int Index;
#pragma endregion

};
}
