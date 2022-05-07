#pragma once

#include "../../../BD/BaseData.h"

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AddStudent : public System::Windows::Forms::Form
	{
	public:
		AddStudent(Group^ PathGroup_) : ItemGroup(PathGroup_)
		{
			InitializeComponent();
			bd = gcnew BaseData();
			list_students = bd->FillCheckedListBoxStudent(1);
			bd->Reload(list_students, CheckedListBoxStudent);
		}

	protected:
		~AddStudent()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::CheckedListBox^ CheckedListBoxStudent;
	private: System::Windows::Forms::Button^ ButtonAddStudent;
	private: System::Windows::Forms::Button^ ButtonDeleteStudent;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->CheckedListBoxStudent = (gcnew System::Windows::Forms::CheckedListBox());
			this->ButtonAddStudent = (gcnew System::Windows::Forms::Button());
			this->ButtonDeleteStudent = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CheckedListBoxStudent
			// 
			this->CheckedListBoxStudent->CheckOnClick = true;
			this->CheckedListBoxStudent->FormattingEnabled = true;
			this->CheckedListBoxStudent->Location = System::Drawing::Point(13, 13);
			this->CheckedListBoxStudent->Name = L"CheckedListBoxStudent";
			this->CheckedListBoxStudent->Size = System::Drawing::Size(196, 208);
			this->CheckedListBoxStudent->TabIndex = 0;
			// 
			// ButtonAddStudent
			// 
			this->ButtonAddStudent->Location = System::Drawing::Point(13, 228);
			this->ButtonAddStudent->Name = L"ButtonAddStudent";
			this->ButtonAddStudent->Size = System::Drawing::Size(196, 23);
			this->ButtonAddStudent->TabIndex = 1;
			this->ButtonAddStudent->Text = L"��������";
			this->ButtonAddStudent->UseVisualStyleBackColor = true;
			this->ButtonAddStudent->Click += gcnew System::EventHandler(this, &AddStudent::button1_Click);
			// 
			// ButtonDeleteStudent
			// 
			this->ButtonDeleteStudent->Location = System::Drawing::Point(13, 257);
			this->ButtonDeleteStudent->Name = L"ButtonDeleteStudent";
			this->ButtonDeleteStudent->Size = System::Drawing::Size(196, 23);
			this->ButtonDeleteStudent->TabIndex = 2;
			this->ButtonDeleteStudent->Text = L"��������";
			this->ButtonDeleteStudent->UseVisualStyleBackColor = true;
			this->ButtonDeleteStudent->Click += gcnew System::EventHandler(this, &AddStudent::ButtonDeleteStudent_Click);
			// 
			// AddStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(222, 291);
			this->Controls->Add(this->ButtonDeleteStudent);
			this->Controls->Add(this->ButtonAddStudent);
			this->Controls->Add(this->CheckedListBoxStudent);
			this->Name = L"AddStudent";
			this->Text = L"AddStudent";
			this->ResumeLayout(false);

		}
	private: 
		List<Student^>^ list_students;
		Group^ ItemGroup;
		BaseData^ bd;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		for (size_t i = 0; i < CheckedListBoxStudent->CheckedItems->Count; i++)
		{
			for (size_t j = 0; j < list_students->Count; j++)
			{
				if (list_students[j]->Surname == CheckedListBoxStudent->CheckedItems[i]->ToString()) {
					list_students[j]->Entrant = 0;
					list_students[j]->Title_Group = ItemGroup->TitleGroup;
					list_students[j]->Specialization = ItemGroup->Specialization;
					list_students[j]->Number_Kurc = ItemGroup->NumberKurc;
					bd->Update(list_students[j]);
				}
			}
		}
		this->Close();
	}
	private: System::Void ButtonDeleteStudent_Click(System::Object^ sender, System::EventArgs^ e) {
		for (size_t i = 0; i < CheckedListBoxStudent->CheckedItems->Count; i++)
		{
			for (size_t j = 0; j < list_students->Count; j++)
			{
				if (list_students[j]->Surname == CheckedListBoxStudent->CheckedItems[i]->ToString()) {
					bd->Delete(list_students[j]);
				}
			}
		}
	}
	};
}
