#pragma once

#include "../../../BD/BaseData.h"

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CreateFaculty : public System::Windows::Forms::Form
	{
	public:
		CreateFaculty(void)
		{
			InitializeComponent();
			this->Icon = gcnew System::Drawing::Icon("C:/Users/voron/Downloads/edu3.ico");
			TextBoxCreateFaculty->Focus();
		}

	protected:
		~CreateFaculty()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TextBoxCreateFaculty;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ ButtonCreateFaculty;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TextBoxNameDekan;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TextBoxCreateFaculty = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ButtonCreateFaculty = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TextBoxNameDekan = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(44, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(334, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите название нового факультета:\r\n";
			// 
			// TextBoxCreateFaculty
			// 
			this->TextBoxCreateFaculty->Location = System::Drawing::Point(99, 59);
			this->TextBoxCreateFaculty->Name = L"TextBoxCreateFaculty";
			this->TextBoxCreateFaculty->Size = System::Drawing::Size(219, 22);
			this->TextBoxCreateFaculty->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(54, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(314, 32);
			this->label4->TabIndex = 8;
			this->label4->Text = L"* название факультета не должно совпадать с\r\nназваниями уже имеющихся факультетов"
				L".\r\n";
			// 
			// ButtonCreateFaculty
			// 
			this->ButtonCreateFaculty->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->ButtonCreateFaculty->ForeColor = System::Drawing::SystemColors::Control;
			this->ButtonCreateFaculty->Location = System::Drawing::Point(152, 180);
			this->ButtonCreateFaculty->Name = L"ButtonCreateFaculty";
			this->ButtonCreateFaculty->Size = System::Drawing::Size(120, 41);
			this->ButtonCreateFaculty->TabIndex = 3;
			this->ButtonCreateFaculty->Text = L"Добавить";
			this->ButtonCreateFaculty->UseVisualStyleBackColor = false;
			this->ButtonCreateFaculty->Click += gcnew System::EventHandler(this, &CreateFaculty::ButtonCreateFaculty_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(110, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 22);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Введите ФИО декана:";
			// 
			// TextBoxNameDekan
			// 
			this->TextBoxNameDekan->Location = System::Drawing::Point(99, 152);
			this->TextBoxNameDekan->Name = L"TextBoxNameDekan";
			this->TextBoxNameDekan->Size = System::Drawing::Size(219, 22);
			this->TextBoxNameDekan->TabIndex = 2;
			// 
			// CreateFaculty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->ClientSize = System::Drawing::Size(429, 242);
			this->Controls->Add(this->TextBoxNameDekan);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ButtonCreateFaculty);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TextBoxCreateFaculty);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MinimizeBox = false;
			this->Name = L"CreateFaculty";
			this->Text = L"CreateFaculty";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonCreateFaculty_Click(System::Object^ sender, System::EventArgs^ e) {
		

		try {
			//Проверка!
			if (String::IsNullOrEmpty(TextBoxCreateFaculty->Text)) {
				throw gcnew Exception("Заполните поле \"Факультет\"!");
			}
			else if (String::IsNullOrEmpty(TextBoxNameDekan->Text)) {
				throw gcnew Exception("Заполните поле \"Декан\"!");
			}
			//Реализация!
			BaseData^ bd = gcnew BaseData();
			Faculty^ f = gcnew Faculty();
			f->TitleFaculty = TextBoxCreateFaculty->Text->Replace(" ", "");
			f->NameDekan = TextBoxNameDekan->Text;
			if (bd->Checking(f)) {
				TextBoxCreateFaculty->Clear();
				TextBoxCreateFaculty->Focus();
				throw gcnew Exception("Измените название факультета. Нынешнее название совпадает с уже имеющимися!");
			}
			bd->Insert(f);
			TextBoxCreateFaculty->Clear();
			TextBoxNameDekan->Clear();
			TextBoxCreateFaculty->Focus();
			this->Close();
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}

	}
};
}
