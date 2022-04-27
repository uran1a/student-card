#pragma once

#include "../../../BD/BaseData.h"

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CreateStudent : public System::Windows::Forms::Form
	{
	public:
		CreateStudent(void)
		{
			InitializeComponent();
			TextBoxNameStudent->Focus();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		~CreateStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ButtonCreateStudent;
	private: System::Windows::Forms::TextBox^ TextBoxNameStudent;
	private: System::Windows::Forms::TextBox^ TextBoxSurnameStudent;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TextBoxMiddlenameStudent;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TextBoxBirthdayStudent;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TextBoxPointEGEStudent;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TextBoxPhoneNumber;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ TextBoxEducationalForm;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ TextBoxPhotoStudent;

	private: System::Windows::Forms::Label^ label10;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ButtonCreateStudent = (gcnew System::Windows::Forms::Button());
			this->TextBoxNameStudent = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxSurnameStudent = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TextBoxMiddlenameStudent = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TextBoxBirthdayStudent = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TextBoxPointEGEStudent = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TextBoxPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TextBoxEducationalForm = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TextBoxPhotoStudent = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label1->Location = System::Drawing::Point(23, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя:";
			// 
			// ButtonCreateStudent
			// 
			this->ButtonCreateStudent->Location = System::Drawing::Point(120, 250);
			this->ButtonCreateStudent->Name = L"ButtonCreateStudent";
			this->ButtonCreateStudent->Size = System::Drawing::Size(170, 43);
			this->ButtonCreateStudent->TabIndex = 1;
			this->ButtonCreateStudent->Text = L"Добавить студента в конкурс университета";
			this->ButtonCreateStudent->UseVisualStyleBackColor = true;
			this->ButtonCreateStudent->Click += gcnew System::EventHandler(this, &CreateStudent::button1_Click);
			// 
			// TextBoxNameStudent
			// 
			this->TextBoxNameStudent->Location = System::Drawing::Point(26, 33);
			this->TextBoxNameStudent->Name = L"TextBoxNameStudent";
			this->TextBoxNameStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxNameStudent->TabIndex = 2;
			// 
			// TextBoxSurnameStudent
			// 
			this->TextBoxSurnameStudent->Location = System::Drawing::Point(26, 88);
			this->TextBoxSurnameStudent->Name = L"TextBoxSurnameStudent";
			this->TextBoxSurnameStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxSurnameStudent->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label2->Location = System::Drawing::Point(23, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Фамилия:";
			// 
			// TextBoxMiddlenameStudent
			// 
			this->TextBoxMiddlenameStudent->Location = System::Drawing::Point(26, 151);
			this->TextBoxMiddlenameStudent->Name = L"TextBoxMiddlenameStudent";
			this->TextBoxMiddlenameStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxMiddlenameStudent->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label3->Location = System::Drawing::Point(23, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 22);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Отчество";
			// 
			// TextBoxBirthdayStudent
			// 
			this->TextBoxBirthdayStudent->Location = System::Drawing::Point(26, 209);
			this->TextBoxBirthdayStudent->Name = L"TextBoxBirthdayStudent";
			this->TextBoxBirthdayStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxBirthdayStudent->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label4->Location = System::Drawing::Point(23, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"День рождения:";
			// 
			// TextBoxPointEGEStudent
			// 
			this->TextBoxPointEGEStudent->Location = System::Drawing::Point(219, 34);
			this->TextBoxPointEGEStudent->Name = L"TextBoxPointEGEStudent";
			this->TextBoxPointEGEStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxPointEGEStudent->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label5->Location = System::Drawing::Point(217, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 22);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Балл ЕГЭ";
			// 
			// TextBoxPhoneNumber
			// 
			this->TextBoxPhoneNumber->Location = System::Drawing::Point(220, 205);
			this->TextBoxPhoneNumber->Name = L"TextBoxPhoneNumber";
			this->TextBoxPhoneNumber->Size = System::Drawing::Size(170, 22);
			this->TextBoxPhoneNumber->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label8->Location = System::Drawing::Point(217, 185);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 22);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Телефон:";
			// 
			// TextBoxEducationalForm
			// 
			this->TextBoxEducationalForm->Location = System::Drawing::Point(221, 151);
			this->TextBoxEducationalForm->Name = L"TextBoxEducationalForm";
			this->TextBoxEducationalForm->Size = System::Drawing::Size(170, 22);
			this->TextBoxEducationalForm->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label9->Location = System::Drawing::Point(218, 126);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(157, 22);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Форма обучения:";
			// 
			// TextBoxPhotoStudent
			// 
			this->TextBoxPhotoStudent->Location = System::Drawing::Point(220, 87);
			this->TextBoxPhotoStudent->Name = L"TextBoxPhotoStudent";
			this->TextBoxPhotoStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxPhotoStudent->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label10->Location = System::Drawing::Point(217, 63);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(145, 22);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Загрузить фото:";
			// 
			// CreateStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(427, 310);
			this->Controls->Add(this->TextBoxPhoneNumber);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TextBoxEducationalForm);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->TextBoxPhotoStudent);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->TextBoxPointEGEStudent);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TextBoxBirthdayStudent);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TextBoxMiddlenameStudent);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TextBoxSurnameStudent);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TextBoxNameStudent);
			this->Controls->Add(this->ButtonCreateStudent);
			this->Controls->Add(this->label1);
			this->Name = L"CreateStudent";
			this->Text = L"CreateStudent";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		BaseData^ bd = gcnew BaseData();
		
		bd->Insert(TextBoxNameStudent->Text, TextBoxSurnameStudent->Text, TextBoxMiddlenameStudent->Text, TextBoxBirthdayStudent->Text, TextBoxPointEGEStudent->Text, TextBoxPhotoStudent->Text, TextBoxEducationalForm->Text, TextBoxPhoneNumber->Text);
		TextBoxNameStudent->Clear();
		TextBoxSurnameStudent->Clear();
		TextBoxMiddlenameStudent->Clear();
		TextBoxBirthdayStudent->Clear();
		TextBoxPointEGEStudent->Clear();
		TextBoxPhoneNumber->Clear();
		TextBoxEducationalForm->Clear();
		TextBoxPhotoStudent->Clear();
		TextBoxNameStudent->Focus();
	}
};
}
