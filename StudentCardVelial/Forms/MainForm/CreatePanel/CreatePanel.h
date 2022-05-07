#pragma once

#include "../../../BD/BaseData.h"

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CreatePanel : public System::Windows::Forms::Form
	{
	public:
		CreatePanel(int index) : IndexSelectedFaculty(index)
		{
			InitializeComponent();
			bd = gcnew BaseData();
			ComboBoxTitleFacultyCreatePanel->DataSource = bd->FillComboBox();
			this->ComboBoxTitleFacultyCreatePanel->SelectedIndex = IndexSelectedFaculty;
		}

	protected:
		~CreatePanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ButtonCreatePanel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TextBoxTitleGroupCreatePanel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TextBoxNameKuratorCreatePanel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ ComboBoxTitleFacultyCreatePanel;
	private: System::Windows::Forms::TextBox^ TextBoxNumberKurc;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TextBoxNameMonitor;
	private: System::Windows::Forms::TextBox^ TextboxSpecialization;
	private: System::Windows::Forms::Label^ label7;
	private: System::ComponentModel::Container ^components;
	
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->ButtonCreatePanel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TextBoxTitleGroupCreatePanel = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TextBoxNameKuratorCreatePanel = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ComboBoxTitleFacultyCreatePanel = (gcnew System::Windows::Forms::ComboBox());
			this->TextBoxNumberKurc = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TextBoxNameMonitor = (gcnew System::Windows::Forms::TextBox());
			this->TextboxSpecialization = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ButtonCreatePanel
			// 
			this->ButtonCreatePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->ButtonCreatePanel->ForeColor = System::Drawing::Color::White;
			this->ButtonCreatePanel->Location = System::Drawing::Point(85, 386);
			this->ButtonCreatePanel->Name = L"ButtonCreatePanel";
			this->ButtonCreatePanel->Size = System::Drawing::Size(138, 36);
			this->ButtonCreatePanel->TabIndex = 7;
			this->ButtonCreatePanel->Text = L"Добавить";
			this->ButtonCreatePanel->UseVisualStyleBackColor = false;
			this->ButtonCreatePanel->Click += gcnew System::EventHandler(this, &CreatePanel::ButtonCreatePanel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(33, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите название группы:";
			// 
			// TextBoxTitleGroupCreatePanel
			// 
			this->TextBoxTitleGroupCreatePanel->Location = System::Drawing::Point(35, 35);
			this->TextBoxTitleGroupCreatePanel->Name = L"TextBoxTitleGroupCreatePanel";
			this->TextBoxTitleGroupCreatePanel->Size = System::Drawing::Size(230, 22);
			this->TextBoxTitleGroupCreatePanel->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(18, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(272, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите название факультета:";
			// 
			// TextBoxNameKuratorCreatePanel
			// 
			this->TextBoxNameKuratorCreatePanel->Location = System::Drawing::Point(35, 235);
			this->TextBoxNameKuratorCreatePanel->Name = L"TextBoxNameKuratorCreatePanel";
			this->TextBoxNameKuratorCreatePanel->Size = System::Drawing::Size(235, 22);
			this->TextBoxNameKuratorCreatePanel->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(46, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 22);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Введите ФИО куратора:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(13, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(282, 32);
			this->label4->TabIndex = 7;
			this->label4->Text = L"* название группы не должно совпадать с\r\nназваниями уже имеющихся групп.\r\n";
			// 
			// ComboBoxTitleFacultyCreatePanel
			// 
			this->ComboBoxTitleFacultyCreatePanel->FormattingEnabled = true;
			this->ComboBoxTitleFacultyCreatePanel->Location = System::Drawing::Point(35, 127);
			this->ComboBoxTitleFacultyCreatePanel->Name = L"ComboBoxTitleFacultyCreatePanel";
			this->ComboBoxTitleFacultyCreatePanel->Size = System::Drawing::Size(230, 24);
			this->ComboBoxTitleFacultyCreatePanel->TabIndex = 2;
			// 
			// TextBoxNumberKurc
			// 
			this->TextBoxNumberKurc->Location = System::Drawing::Point(35, 353);
			this->TextBoxNumberKurc->Name = L"TextBoxNumberKurc";
			this->TextBoxNumberKurc->Size = System::Drawing::Size(235, 22);
			this->TextBoxNumberKurc->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(81, 328);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 22);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Введите курс:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(48, 269);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(210, 22);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Введите ФИО старосты";
			// 
			// TextBoxNameMonitor
			// 
			this->TextBoxNameMonitor->Location = System::Drawing::Point(35, 294);
			this->TextBoxNameMonitor->Name = L"TextBoxNameMonitor";
			this->TextBoxNameMonitor->Size = System::Drawing::Size(235, 22);
			this->TextBoxNameMonitor->TabIndex = 5;
			// 
			// TextboxSpecialization
			// 
			this->TextboxSpecialization->Location = System::Drawing::Point(35, 185);
			this->TextboxSpecialization->Name = L"TextboxSpecialization";
			this->TextboxSpecialization->Size = System::Drawing::Size(235, 22);
			this->TextboxSpecialization->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(54, 160);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(201, 22);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Введите направление:";
			// 
			// CreatePanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->ClientSize = System::Drawing::Size(303, 433);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TextboxSpecialization);
			this->Controls->Add(this->TextBoxNameMonitor);
			this->Controls->Add(this->TextBoxNumberKurc);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->ComboBoxTitleFacultyCreatePanel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TextBoxNameKuratorCreatePanel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TextBoxTitleGroupCreatePanel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ButtonCreatePanel);
			this->Name = L"CreatePanel";
			this->Text = L"CreatePanel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
		BaseData^ bd; 
		int IndexSelectedFaculty;
#pragma endregion
	private: System::Void ButtonCreatePanel_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!
			if (String::IsNullOrEmpty(TextBoxTitleGroupCreatePanel->Text)) {
				throw gcnew Exception("Заполните поле \"Название группы\"!");
			}
			else if (TextboxSpecialization->Text == "") {
				throw gcnew Exception("Заполните поле \"Специализации\"!");
			}
			else if (TextBoxNameKuratorCreatePanel->Text == "") {
				throw gcnew Exception("Заполните поле \"ФИО куратора\"!");
			}
			else if (TextBoxNameMonitor->Text == "") {
				throw gcnew Exception("Заполните поле \"ФИО старосты\"!");
			}
			else if (TextBoxNumberKurc->Text == "") {
				throw gcnew Exception("Заполните поле \"Курс\"!");
			}

			BaseData^ bd = gcnew BaseData();
			Group^ g = gcnew Group();
			g->TitleGroup = TextBoxTitleGroupCreatePanel->Text;
			g->TitleFaculty = Convert::ToString(ComboBoxTitleFacultyCreatePanel->SelectedItem);
			g->NameKurator = TextBoxNameKuratorCreatePanel->Text;
			g->NameMonitor = TextBoxNameMonitor->Text;
			g->NumberKurc = Convert::ToInt32(TextBoxNumberKurc->Text);
			g->Specialization = TextboxSpecialization->Text;

			if (bd->Checking(g)) {
				TextBoxTitleGroupCreatePanel->Clear();
				TextBoxTitleGroupCreatePanel->Focus();
				throw gcnew Exception("Измените название группы. Нынешнее название совпадает с уже имеющимися!");
			}

			bd->Insert(g);
			TextBoxTitleGroupCreatePanel->Clear();
			TextBoxNameKuratorCreatePanel->Clear();
			TextBoxNameMonitor->Clear();
			TextBoxNumberKurc->Clear();
			TextboxSpecialization->Clear();
			TextBoxTitleGroupCreatePanel->Focus();
			this->Close();
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}
	}
};
}
