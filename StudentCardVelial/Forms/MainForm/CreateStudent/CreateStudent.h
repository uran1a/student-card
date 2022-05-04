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
		}

	protected:
		~CreateStudent()
		{
			if (components) delete components;
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
	private: System::Windows::Forms::TextBox^ TextBoxPhoneNumberStudent;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ TextBoxEducationalFormStudent;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ TextBoxPhotoStudent;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ TextBoxMailStudent;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ ButtonGetImage;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ TextBoxPasswordStudent;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TextBoxLoginStudent;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ ButtonCreatePassword;
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
			this->TextBoxPhoneNumberStudent = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TextBoxEducationalFormStudent = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TextBoxPhotoStudent = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TextBoxMailStudent = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->ButtonGetImage = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TextBoxPasswordStudent = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TextBoxLoginStudent = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ButtonCreatePassword = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label1->Location = System::Drawing::Point(23, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя:";
			// 
			// ButtonCreateStudent
			// 
			this->ButtonCreateStudent->Location = System::Drawing::Point(397, 328);
			this->ButtonCreateStudent->Name = L"ButtonCreateStudent";
			this->ButtonCreateStudent->Size = System::Drawing::Size(185, 53);
			this->ButtonCreateStudent->TabIndex = 12;
			this->ButtonCreateStudent->Text = L"Добавить студента в конкурс университета";
			this->ButtonCreateStudent->UseVisualStyleBackColor = true;
			this->ButtonCreateStudent->Click += gcnew System::EventHandler(this, &CreateStudent::button1_Click);
			// 
			// TextBoxNameStudent
			// 
			this->TextBoxNameStudent->Location = System::Drawing::Point(26, 85);
			this->TextBoxNameStudent->Name = L"TextBoxNameStudent";
			this->TextBoxNameStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxNameStudent->TabIndex = 2;
			// 
			// TextBoxSurnameStudent
			// 
			this->TextBoxSurnameStudent->Location = System::Drawing::Point(26, 34);
			this->TextBoxSurnameStudent->Name = L"TextBoxSurnameStudent";
			this->TextBoxSurnameStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxSurnameStudent->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label2->Location = System::Drawing::Point(23, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Фамилия:";
			// 
			// TextBoxMiddlenameStudent
			// 
			this->TextBoxMiddlenameStudent->Location = System::Drawing::Point(26, 140);
			this->TextBoxMiddlenameStudent->Name = L"TextBoxMiddlenameStudent";
			this->TextBoxMiddlenameStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxMiddlenameStudent->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label3->Location = System::Drawing::Point(23, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 22);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Отчество";
			// 
			// TextBoxBirthdayStudent
			// 
			this->TextBoxBirthdayStudent->Location = System::Drawing::Point(224, 34);
			this->TextBoxBirthdayStudent->Name = L"TextBoxBirthdayStudent";
			this->TextBoxBirthdayStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxBirthdayStudent->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label4->Location = System::Drawing::Point(221, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"День рождения:";
			// 
			// TextBoxPointEGEStudent
			// 
			this->TextBoxPointEGEStudent->Location = System::Drawing::Point(223, 88);
			this->TextBoxPointEGEStudent->Name = L"TextBoxPointEGEStudent";
			this->TextBoxPointEGEStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxPointEGEStudent->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label5->Location = System::Drawing::Point(221, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 22);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Балл ЕГЭ";
			// 
			// TextBoxPhoneNumberStudent
			// 
			this->TextBoxPhoneNumberStudent->Location = System::Drawing::Point(413, 30);
			this->TextBoxPhoneNumberStudent->Name = L"TextBoxPhoneNumberStudent";
			this->TextBoxPhoneNumberStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxPhoneNumberStudent->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label8->Location = System::Drawing::Point(410, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 22);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Телефон:";
			// 
			// TextBoxEducationalFormStudent
			// 
			this->TextBoxEducationalFormStudent->Location = System::Drawing::Point(224, 145);
			this->TextBoxEducationalFormStudent->Name = L"TextBoxEducationalFormStudent";
			this->TextBoxEducationalFormStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxEducationalFormStudent->TabIndex = 6;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label9->Location = System::Drawing::Point(221, 120);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(157, 22);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Форма обучения:";
			// 
			// TextBoxPhotoStudent
			// 
			this->TextBoxPhotoStudent->Location = System::Drawing::Point(27, 359);
			this->TextBoxPhotoStudent->Name = L"TextBoxPhotoStudent";
			this->TextBoxPhotoStudent->Size = System::Drawing::Size(226, 22);
			this->TextBoxPhotoStudent->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label10->Location = System::Drawing::Point(23, 176);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(145, 22);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Загрузить фото:";
			// 
			// TextBoxMailStudent
			// 
			this->TextBoxMailStudent->Location = System::Drawing::Point(412, 82);
			this->TextBoxMailStudent->Name = L"TextBoxMailStudent";
			this->TextBoxMailStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxMailStudent->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label6->Location = System::Drawing::Point(411, 61);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 22);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Почта:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// ButtonGetImage
			// 
			this->ButtonGetImage->Location = System::Drawing::Point(174, 174);
			this->ButtonGetImage->Name = L"ButtonGetImage";
			this->ButtonGetImage->Size = System::Drawing::Size(79, 31);
			this->ButtonGetImage->TabIndex = 7;
			this->ButtonGetImage->Text = L"Выбрать";
			this->ButtonGetImage->UseVisualStyleBackColor = true;
			this->ButtonGetImage->Click += gcnew System::EventHandler(this, &CreateStudent::ButtonGetImage_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Location = System::Drawing::Point(26, 211);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(226, 142);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// TextBoxPasswordStudent
			// 
			this->TextBoxPasswordStudent->Location = System::Drawing::Point(414, 197);
			this->TextBoxPasswordStudent->Name = L"TextBoxPasswordStudent";
			this->TextBoxPasswordStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxPasswordStudent->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label7->Location = System::Drawing::Point(413, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 22);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Пароль:";
			// 
			// TextBoxLoginStudent
			// 
			this->TextBoxLoginStudent->Location = System::Drawing::Point(415, 145);
			this->TextBoxLoginStudent->Name = L"TextBoxLoginStudent";
			this->TextBoxLoginStudent->Size = System::Drawing::Size(170, 22);
			this->TextBoxLoginStudent->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label11->Location = System::Drawing::Point(412, 124);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 22);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Логин:";
			// 
			// ButtonCreatePassword
			// 
			this->ButtonCreatePassword->Location = System::Drawing::Point(509, 225);
			this->ButtonCreatePassword->Name = L"ButtonCreatePassword";
			this->ButtonCreatePassword->Size = System::Drawing::Size(75, 23);
			this->ButtonCreatePassword->TabIndex = 24;
			this->ButtonCreatePassword->Text = L"Сгенерировать";
			this->ButtonCreatePassword->UseVisualStyleBackColor = true;
			// 
			// CreateStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(612, 406);
			this->Controls->Add(this->ButtonCreatePassword);
			this->Controls->Add(this->TextBoxPasswordStudent);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TextBoxLoginStudent);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ButtonGetImage);
			this->Controls->Add(this->TextBoxMailStudent);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TextBoxPhoneNumberStudent);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TextBoxEducationalFormStudent);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		BaseData^ bd = gcnew BaseData();
		Student^ newStudent = gcnew Student();
		newStudent->Name = TextBoxNameStudent->Text;
		newStudent->Surname = TextBoxSurnameStudent->Text;
		newStudent->Middlename = TextBoxMiddlenameStudent->Text;
		newStudent->Birthday = TextBoxBirthdayStudent->Text;
		newStudent->Point_EGE = Convert::ToInt32(TextBoxPointEGEStudent->Text);
		newStudent->Photo_Student = TextBoxPhotoStudent->Text;
		newStudent->Educational_Form = TextBoxEducationalFormStudent->Text;
		newStudent->Phone_Number = TextBoxPhoneNumberStudent->Text;
		newStudent->Mail = TextBoxMailStudent->Text;
		newStudent->Login = TextBoxLoginStudent->Text;
		newStudent->Password = TextBoxPasswordStudent->Text;

		bd->Insert(newStudent);

		TextBoxNameStudent->Clear();
		TextBoxSurnameStudent->Clear();
		TextBoxMiddlenameStudent->Clear();
		TextBoxBirthdayStudent->Clear();
		TextBoxPointEGEStudent->Clear();
		TextBoxPhoneNumberStudent->Clear();
		TextBoxEducationalFormStudent->Clear();
		TextBoxPhotoStudent->Clear();
		TextBoxMailStudent->Clear();
		this->pictureBox1->Image = nullptr;
		TextBoxNameStudent->Focus();
		
		this->Close();
	}
	private: System::Void ButtonGetImage_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ open = gcnew OpenFileDialog();
		open->Filter = "Image Files(*.jpg; *.png; *.jpeg; *.gif; *.bmp)|*.jpg; *.png; *.jpeg; *.gif; *.bmp";
		if (open->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pictureBox1->Image = gcnew Bitmap(open->FileName);
			String^ url = open->FileName->Replace('\\', '/');
			TextBoxPhotoStudent->Text = url;
			this->pictureBox1->Load(url);

		}
	}
};
}
