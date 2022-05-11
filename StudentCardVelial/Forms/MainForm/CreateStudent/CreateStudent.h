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
			this->ComboBoxEducationalForm->SelectedIndex = 0;
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

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ TextBoxPhotoStudent;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ TextBoxMailStudent;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::Button^ ButtonGetImage;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ TextBoxPasswordStudent;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TextBoxLoginStudent;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ ButtonCreatePassword;
	private: System::Windows::Forms::ComboBox^ ComboBoxEducationalForm;

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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TextBoxPhotoStudent = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TextBoxMailStudent = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->ButtonGetImage = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TextBoxPasswordStudent = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TextBoxLoginStudent = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ButtonCreatePassword = (gcnew System::Windows::Forms::Button());
			this->ComboBoxEducationalForm = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(23, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя:";
			// 
			// ButtonCreateStudent
			// 
			this->ButtonCreateStudent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->ButtonCreateStudent->ForeColor = System::Drawing::SystemColors::Control;
			this->ButtonCreateStudent->Location = System::Drawing::Point(370, 323);
			this->ButtonCreateStudent->Name = L"ButtonCreateStudent";
			this->ButtonCreateStudent->Size = System::Drawing::Size(212, 58);
			this->ButtonCreateStudent->TabIndex = 12;
			this->ButtonCreateStudent->Text = L"Добавить студента в конкурс университета";
			this->ButtonCreateStudent->UseVisualStyleBackColor = false;
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
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
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
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
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
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
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
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
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
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(410, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 22);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Телефон:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
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
			this->label10->ForeColor = System::Drawing::SystemColors::Control;
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
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
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
			this->ButtonGetImage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->ButtonGetImage->ForeColor = System::Drawing::SystemColors::Control;
			this->ButtonGetImage->Location = System::Drawing::Point(190, 174);
			this->ButtonGetImage->Name = L"ButtonGetImage";
			this->ButtonGetImage->Size = System::Drawing::Size(79, 31);
			this->ButtonGetImage->TabIndex = 7;
			this->ButtonGetImage->Text = L"Выбрать";
			this->ButtonGetImage->UseVisualStyleBackColor = false;
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
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
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
			this->label11->ForeColor = System::Drawing::SystemColors::Control;
			this->label11->Location = System::Drawing::Point(412, 124);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 22);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Логин:";
			// 
			// ButtonCreatePassword
			// 
			this->ButtonCreatePassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->ButtonCreatePassword->ForeColor = System::Drawing::SystemColors::Control;
			this->ButtonCreatePassword->Location = System::Drawing::Point(509, 225);
			this->ButtonCreatePassword->Name = L"ButtonCreatePassword";
			this->ButtonCreatePassword->Size = System::Drawing::Size(75, 23);
			this->ButtonCreatePassword->TabIndex = 24;
			this->ButtonCreatePassword->Text = L"Сгенерировать";
			this->ButtonCreatePassword->UseVisualStyleBackColor = false;
			this->ButtonCreatePassword->Click += gcnew System::EventHandler(this, &CreateStudent::ButtonCreatePassword_Click);
			// 
			// ComboBoxEducationalForm
			// 
			this->ComboBoxEducationalForm->FormattingEnabled = true;
			this->ComboBoxEducationalForm->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Очная", L"Очно-заочная", L"Заочная" });
			this->ComboBoxEducationalForm->Location = System::Drawing::Point(223, 149);
			this->ComboBoxEducationalForm->Name = L"ComboBoxEducationalForm";
			this->ComboBoxEducationalForm->Size = System::Drawing::Size(170, 24);
			this->ComboBoxEducationalForm->TabIndex = 25;
			// 
			// CreateStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->ClientSize = System::Drawing::Size(612, 406);
			this->Controls->Add(this->ComboBoxEducationalForm);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"CreateStudent";
			this->Text = L"Создание студента";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!
			if (String::IsNullOrEmpty(TextBoxSurnameStudent->Text)) {
				throw gcnew Exception("Заполните поле \"Фамилия студент\" (Пример: Иванов Иван Иванович)!");
			}
			if (String::IsNullOrEmpty(TextBoxNameStudent->Text)) {
				throw gcnew Exception("Заполните поле \"Имя студент\" (Пример: Иванов Иван Иванович)!");
			}
			if (String::IsNullOrEmpty(TextBoxMiddlenameStudent->Text)) {
				throw gcnew Exception("Заполните поле \"Отчество студент\" (Пример: Иванов Иван Иванович)!");
			}
			else if (String::IsNullOrEmpty(TextBoxBirthdayStudent->Text)) {
				throw gcnew Exception("Заполните поле \"Дата рождения\"!");
			}
			else if (((Convert::ToInt32(TextBoxPointEGEStudent->Text) < 0) || (Convert::ToInt32(TextBoxPointEGEStudent->Text) > 300)) || String::IsNullOrEmpty(TextBoxPointEGEStudent->Text)) {
				throw gcnew Exception("Заполните поле \"Баллы ЕГЭ\" (Диапозон: 0-300 баллов)!");
			}
			else if (String::IsNullOrEmpty(TextBoxPhotoStudent->Text)) {
				throw gcnew Exception("Заполните поле \"Фото студента\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxPhoneNumberStudent->Text)) {
				throw gcnew Exception("Заполните поле \"Моб. телефон\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxMailStudent->Text)) {
				throw gcnew Exception("Заполните поле \"Элект. почта\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxLoginStudent->Text)) {
				throw gcnew Exception("Заполните поле \"Логин студента\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxPasswordStudent->Text)) {
				throw gcnew Exception("Заполните поле \"Пароль студента\"!");
			}

			BaseData^ bd = gcnew BaseData();
			Student^ NewStudent = gcnew Student();
			NewStudent->Name = TextBoxNameStudent->Text;
			NewStudent->Surname = TextBoxSurnameStudent->Text;
			NewStudent->Middlename = TextBoxMiddlenameStudent->Text;
			NewStudent->Birthday = TextBoxBirthdayStudent->Text;
			NewStudent->Point_EGE = Convert::ToInt32(TextBoxPointEGEStudent->Text);
			NewStudent->Photo = TextBoxPhotoStudent->Text;
			NewStudent->Educational_Form = Convert::ToString(ComboBoxEducationalForm->SelectedItem);;
			NewStudent->Phone_Number = TextBoxPhoneNumberStudent->Text;
			NewStudent->Mail = TextBoxMailStudent->Text;
			NewStudent->Login = TextBoxLoginStudent->Text;
			NewStudent->Password = TextBoxPasswordStudent->Text;

			if (bd->Checking(NewStudent)) {
				TextBoxNameStudent->Clear();
				TextBoxSurnameStudent->Clear();
				TextBoxMiddlenameStudent->Clear();
				TextBoxNameStudent->Focus();
				throw gcnew Exception("Измените ФИО студента. Нынешнее ФИО совпадает с уже имеющимися!");
			}

			if (bd->CheckingPassword(NewStudent)) {
				TextBoxLoginStudent->Clear();
				TextBoxPasswordStudent->Clear();
				TextBoxLoginStudent->Focus();
				throw gcnew Exception("Измените логин и пароль студента. Нынешнее логин и пароль совпадает с уже имеющимися!");
			}

			bd->Insert(NewStudent);

			TextBoxNameStudent->Clear();
			TextBoxSurnameStudent->Clear();
			TextBoxMiddlenameStudent->Clear();
			TextBoxBirthdayStudent->Clear();
			TextBoxPointEGEStudent->Clear();
			TextBoxPhoneNumberStudent->Clear();
			this->ComboBoxEducationalForm->SelectedIndex = 0;
			TextBoxPhotoStudent->Clear();
			TextBoxMailStudent->Clear();
			this->pictureBox1->Image = nullptr;
			TextBoxNameStudent->Focus();

			this->Close();
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}
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
	private: System::Void ButtonCreatePassword_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rand = gcnew Random();
		array<String^>^ ArrayWords = { "unknown", "dragon", "monkey", "chocolate", "soccer", "butterfly", "angel", "football", "secret", "summer", "cookie", "pepper", "greenday", "batman", "icecream", "mexico"};
		String^ Login; String^ Password; 
		BaseData^ bd = gcnew BaseData();
		Student^ temp = gcnew Student();
		while (true)
		{
			 Login = "vgtu-student" + rand->Next(1, 1000);
			Password = ArrayWords[rand->Next(0, ArrayWords->Length)] + rand->Next(1, 1000);
			temp->Login = Login;
			temp->Password = Password;
			Console::WriteLine("{0} {1}", Login, Password);
			if (!bd->CheckingPassword(temp)) break;
		}
		TextBoxLoginStudent->Text = Login;
		TextBoxPasswordStudent->Text = Password;
	}
};
}
