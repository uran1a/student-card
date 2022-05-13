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
	/// Сводка для UpdateForm
	/// </summary>
	public ref class UpdateForm : public System::Windows::Forms::Form
	{
	public:
		UpdateForm(Faculty^ ItemFaculty_) : ItemFaculty(ItemFaculty_)
		{
			InitializeComponent();
			BaseData^ bd = gcnew BaseData();
			//List<Faculty^>^ list = bd->FillBaseData();
			TextBoxUpdateTitleFaculty->Text = ItemFaculty->TitleFaculty->Replace(" ", "");
			TextBoxUpdateNameDekan->Text = ItemFaculty->NameDekan->Replace(" ", "");
		}

	protected:
		~UpdateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TextBoxUpdateTitleFaculty;
	private: System::Windows::Forms::Button^ ButtonUpdateFaculty;
	private: System::Windows::Forms::TextBox^ TextBoxUpdateNameDekan;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TextBoxUpdateTitleFaculty = (gcnew System::Windows::Forms::TextBox());
			this->ButtonUpdateFaculty = (gcnew System::Windows::Forms::Button());
			this->TextBoxUpdateNameDekan = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(84, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Измените данные:";
			// 
			// TextBoxUpdateTitleFaculty
			// 
			this->TextBoxUpdateTitleFaculty->Location = System::Drawing::Point(58, 45);
			this->TextBoxUpdateTitleFaculty->Name = L"TextBoxUpdateTitleFaculty";
			this->TextBoxUpdateTitleFaculty->Size = System::Drawing::Size(213, 22);
			this->TextBoxUpdateTitleFaculty->TabIndex = 1;
			// 
			// ButtonUpdateFaculty
			// 
			this->ButtonUpdateFaculty->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->ButtonUpdateFaculty->ForeColor = System::Drawing::SystemColors::Control;
			this->ButtonUpdateFaculty->Location = System::Drawing::Point(115, 101);
			this->ButtonUpdateFaculty->Name = L"ButtonUpdateFaculty";
			this->ButtonUpdateFaculty->Size = System::Drawing::Size(111, 34);
			this->ButtonUpdateFaculty->TabIndex = 3;
			this->ButtonUpdateFaculty->Text = L"Изменить";
			this->ButtonUpdateFaculty->UseVisualStyleBackColor = false;
			this->ButtonUpdateFaculty->Click += gcnew System::EventHandler(this, &UpdateForm::ButtonUpdateFaculty_Click);
			// 
			// TextBoxUpdateNameDekan
			// 
			this->TextBoxUpdateNameDekan->Location = System::Drawing::Point(58, 73);
			this->TextBoxUpdateNameDekan->Name = L"TextBoxUpdateNameDekan";
			this->TextBoxUpdateNameDekan->Size = System::Drawing::Size(213, 22);
			this->TextBoxUpdateNameDekan->TabIndex = 2;
			// 
			// UpdateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->ClientSize = System::Drawing::Size(345, 166);
			this->Controls->Add(this->TextBoxUpdateNameDekan);
			this->Controls->Add(this->ButtonUpdateFaculty);
			this->Controls->Add(this->TextBoxUpdateTitleFaculty);
			this->Controls->Add(this->label1);
			this->Name = L"UpdateForm";
			this->Text = L"Факультет";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
		Faculty^ ItemFaculty = gcnew Faculty();
#pragma endregion
	private: System::Void ButtonUpdateFaculty_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!
			if (TextBoxUpdateTitleFaculty->Text == "") {
				throw gcnew Exception("Заполните поле Факультет!");
			}
			else if (TextBoxUpdateNameDekan->Text == "") {
				throw gcnew Exception("Заполните поле Декан!");
			}
			//Реализация!
			BaseData^ bd = gcnew BaseData();
			Faculty^ f = gcnew Faculty();
			List<Group^>^ list_groups = bd->FillListView(ItemFaculty->TitleFaculty);
			f->TitleFaculty = TextBoxUpdateTitleFaculty->Text;
			f->NameDekan = TextBoxUpdateNameDekan->Text;
			if (bd->Checking(f)) {
				TextBoxUpdateTitleFaculty->Text = ItemFaculty->TitleFaculty;
				TextBoxUpdateNameDekan->Text = ItemFaculty->NameDekan;
				throw gcnew Exception("Измените название факультета. Нынешнее название совпадает с уже имеющимися!");
			}
			for (size_t i = 0; i < list_groups->Count; i++)
			{
				list_groups[i]->TitleFaculty = f->TitleFaculty;
				List<Student^>^ list_students = bd->FillListViewStudent(list_groups[i]->TitleGroup);
				for (size_t j = 0; j < list_students->Count; j++)
				{
					list_students[j]->Title_Faculty = list_groups[i]->TitleFaculty;
					bd->Update(list_students[j]);
				}
				bd->Update(list_groups[i], list_groups[i]->ID);
			}
			bd->Update(f, ItemFaculty->ID);
			this->Close();
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}
	}
	};
}
