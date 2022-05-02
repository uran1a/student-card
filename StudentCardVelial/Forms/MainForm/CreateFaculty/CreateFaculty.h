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
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(334, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите название нового факультета:\r\n";
			// 
			// TextBoxCreateFaculty
			// 
			this->TextBoxCreateFaculty->Location = System::Drawing::Point(67, 40);
			this->TextBoxCreateFaculty->Name = L"TextBoxCreateFaculty";
			this->TextBoxCreateFaculty->Size = System::Drawing::Size(219, 22);
			this->TextBoxCreateFaculty->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(314, 32);
			this->label4->TabIndex = 8;
			this->label4->Text = L"* название факультета не должно совпадать с\r\nназваниями уже имеющихся факультетов"
				L".\r\n";
			// 
			// ButtonCreateFaculty
			// 
			this->ButtonCreateFaculty->Location = System::Drawing::Point(130, 161);
			this->ButtonCreateFaculty->Name = L"ButtonCreateFaculty";
			this->ButtonCreateFaculty->Size = System::Drawing::Size(102, 33);
			this->ButtonCreateFaculty->TabIndex = 3;
			this->ButtonCreateFaculty->Text = L"Добавить";
			this->ButtonCreateFaculty->UseVisualStyleBackColor = true;
			this->ButtonCreateFaculty->Click += gcnew System::EventHandler(this, &CreateFaculty::ButtonCreateFaculty_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label2->Location = System::Drawing::Point(78, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 22);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Введите ФИО декана:";
			// 
			// TextBoxNameDekan
			// 
			this->TextBoxNameDekan->Location = System::Drawing::Point(67, 133);
			this->TextBoxNameDekan->Name = L"TextBoxNameDekan";
			this->TextBoxNameDekan->Size = System::Drawing::Size(219, 22);
			this->TextBoxNameDekan->TabIndex = 2;
			// 
			// CreateFaculty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(369, 206);
			this->Controls->Add(this->TextBoxNameDekan);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ButtonCreateFaculty);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TextBoxCreateFaculty);
			this->Controls->Add(this->label1);
			this->Name = L"CreateFaculty";
			this->Text = L"CreateFaculty";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonCreateFaculty_Click(System::Object^ sender, System::EventArgs^ e) {
		

		try {
			//Проверка!
			if (TextBoxCreateFaculty->Text == "") {
				throw gcnew Exception("Заполните поле Факультет!");
			}
			else if (TextBoxNameDekan->Text == "") {
				throw gcnew Exception("Заполните поле Декан!");
			}
			//Реализация!
			BaseData^ bd = gcnew BaseData();
			TextBoxCreateFaculty->Focus();
			bd->Insert(TextBoxCreateFaculty->Text, TextBoxNameDekan->Text);
			TextBoxCreateFaculty->Clear();
			TextBoxNameDekan->Clear();
			this->Close();
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}

	}
};
}
