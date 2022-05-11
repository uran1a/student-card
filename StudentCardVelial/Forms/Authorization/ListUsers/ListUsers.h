#pragma once

#include "../../../Classes/Admin/Admin.h"
#include "../../../BD/BaseData.h"

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ListUsers : public System::Windows::Forms::Form
	{
	public:
		ListUsers(bool isAdmin): isAdmin(isAdmin)
		{
			InitializeComponent();

			listView1->Columns->Clear();
			listView1->Columns->Add("ID", 25, HorizontalAlignment::Center);
			listView1->Columns->Add("Логин", 100, HorizontalAlignment::Center);
			listView1->Columns->Add("Пароль", 100, HorizontalAlignment::Center);

			bd = gcnew BaseData();
			if (isAdmin) {
				list_admin = bd->FillListViewAdmins();
				bd->Reload(list_admin, listView1);
			}
			else {
				list_user = bd->FillCheckedListBoxStudent(1);
				bd->Reload(list_user, listView1);
			}
		
		}

	protected:
		~ListUsers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(312, 194);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->button1->Location = System::Drawing::Point(12, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(312, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Удалить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ListUsers::button1_Click);
			// 
			// ListUsers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->ClientSize = System::Drawing::Size(336, 253);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MinimizeBox = false;
			this->Name = L"ListUsers";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Список пользователей";
			this->ResumeLayout(false);

		}
	private:
		BaseData^ bd;
		List<Admin^>^ list_admin;
		List<Student^>^ list_user;
		bool isAdmin;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!
			if (listView1->FocusedItem == nullptr) {
				if (isAdmin)
					throw gcnew Exception("Выберите админа для удаления!");
				else {
					throw gcnew Exception("Выберите пользователя для исключения!");
				}
			}
			String^ UserSelectedItem = listView1->FocusedItem->SubItems[1]->Text;
			bd = gcnew BaseData();
			if (isAdmin) {
				list_admin = bd->FillListViewAdmins();
				if (list_admin->Count == 1) {
					throw gcnew Exception("Нельзя удалить единственного админа!");
				}
				for (size_t i = 0; i < list_admin->Count; i++)
				{
					if (list_admin[i]->Login == UserSelectedItem)
						bd->Delete(list_admin[i]);
				}
				bd->Reload(list_admin, listView1);
			}
			else {
				for (size_t i = 0; i < list_user->Count; i++)
				{
					if (list_user[i]->Login == UserSelectedItem)
						bd->Delete(list_user[i]);
				}
				bd->Reload(list_user, listView1);
			}
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}
		
	}
	};
}
