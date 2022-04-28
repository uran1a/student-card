#pragma once

#include "../../../Classes/Group/Group.h"
#include "../../../BD/BaseData.h"

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class UpdatePanel : public System::Windows::Forms::Form
	{
	public:
		UpdatePanel(Group^ ItemGroup_) : ItemGroup(ItemGroup_)
		{
			InitializeComponent();
			BaseData^ bd = gcnew BaseData();
			TextBoxTitleGroupUpdatePanel->Text = ItemGroup->TitleGroup;
			ComboBoxTitleFacultyUpdatePanel->DataSource = bd->FillComboBox();
			List<Faculty^>^ list = bd->FillBaseData();
			for (size_t i = 0; i < list->Count; i++)
			{
				if (ItemGroup->TitleFaculty == list[i]->TitleFaculty) {
					ComboBoxTitleFacultyUpdatePanel->SelectedIndex = i;
				}
			}
			TextboxSpecializationUpdatePanel->Text = ItemGroup->Specialization;
			TextBoxNameKuratorUpdatePanel->Text = ItemGroup->NameKurator;
			TextBoxNameMonitorUpdatePanel->Text = ItemGroup->NameMonitor;
			TextBoxNumberKurcUpdatePanel->Text = Convert::ToString(ItemGroup->NumberKurc);
		}
	protected:

		~UpdatePanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TextboxSpecializationUpdatePanel;
	private: System::Windows::Forms::TextBox^ TextBoxNameMonitorUpdatePanel;
	private: System::Windows::Forms::TextBox^ TextBoxNumberKurcUpdatePanel;
	private: System::Windows::Forms::ComboBox^ ComboBoxTitleFacultyUpdatePanel;
	private: System::Windows::Forms::TextBox^ TextBoxNameKuratorUpdatePanel;
	private: System::Windows::Forms::TextBox^ TextBoxTitleGroupUpdatePanel;
	private: System::Windows::Forms::Button^ ButtonUpdatePanel;
	private: System::Windows::Forms::Label^ label8;
	private: System::ComponentModel::Container ^components;
	
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->TextboxSpecializationUpdatePanel = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNameMonitorUpdatePanel = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNumberKurcUpdatePanel = (gcnew System::Windows::Forms::TextBox());
			this->ComboBoxTitleFacultyUpdatePanel = (gcnew System::Windows::Forms::ComboBox());
			this->TextBoxNameKuratorUpdatePanel = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxTitleGroupUpdatePanel = (gcnew System::Windows::Forms::TextBox());
			this->ButtonUpdatePanel = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// TextboxSpecializationUpdatePanel
			// 
			this->TextboxSpecializationUpdatePanel->Location = System::Drawing::Point(12, 96);
			this->TextboxSpecializationUpdatePanel->Name = L"TextboxSpecializationUpdatePanel";
			this->TextboxSpecializationUpdatePanel->Size = System::Drawing::Size(230, 22);
			this->TextboxSpecializationUpdatePanel->TabIndex = 28;
			// 
			// TextBoxNameMonitorUpdatePanel
			// 
			this->TextBoxNameMonitorUpdatePanel->Location = System::Drawing::Point(12, 152);
			this->TextBoxNameMonitorUpdatePanel->Name = L"TextBoxNameMonitorUpdatePanel";
			this->TextBoxNameMonitorUpdatePanel->Size = System::Drawing::Size(230, 22);
			this->TextBoxNameMonitorUpdatePanel->TabIndex = 27;
			// 
			// TextBoxNumberKurcUpdatePanel
			// 
			this->TextBoxNumberKurcUpdatePanel->Location = System::Drawing::Point(12, 180);
			this->TextBoxNumberKurcUpdatePanel->Name = L"TextBoxNumberKurcUpdatePanel";
			this->TextBoxNumberKurcUpdatePanel->Size = System::Drawing::Size(230, 22);
			this->TextBoxNumberKurcUpdatePanel->TabIndex = 26;
			// 
			// ComboBoxTitleFacultyUpdatePanel
			// 
			this->ComboBoxTitleFacultyUpdatePanel->FormattingEnabled = true;
			this->ComboBoxTitleFacultyUpdatePanel->Location = System::Drawing::Point(12, 66);
			this->ComboBoxTitleFacultyUpdatePanel->Name = L"ComboBoxTitleFacultyUpdatePanel";
			this->ComboBoxTitleFacultyUpdatePanel->Size = System::Drawing::Size(230, 24);
			this->ComboBoxTitleFacultyUpdatePanel->TabIndex = 23;
			// 
			// TextBoxNameKuratorUpdatePanel
			// 
			this->TextBoxNameKuratorUpdatePanel->Location = System::Drawing::Point(12, 124);
			this->TextBoxNameKuratorUpdatePanel->Name = L"TextBoxNameKuratorUpdatePanel";
			this->TextBoxNameKuratorUpdatePanel->Size = System::Drawing::Size(230, 22);
			this->TextBoxNameKuratorUpdatePanel->TabIndex = 21;
			// 
			// TextBoxTitleGroupUpdatePanel
			// 
			this->TextBoxTitleGroupUpdatePanel->Location = System::Drawing::Point(12, 38);
			this->TextBoxTitleGroupUpdatePanel->Name = L"TextBoxTitleGroupUpdatePanel";
			this->TextBoxTitleGroupUpdatePanel->Size = System::Drawing::Size(230, 22);
			this->TextBoxTitleGroupUpdatePanel->TabIndex = 18;
			// 
			// ButtonUpdatePanel
			// 
			this->ButtonUpdatePanel->Location = System::Drawing::Point(61, 208);
			this->ButtonUpdatePanel->Name = L"ButtonUpdatePanel";
			this->ButtonUpdatePanel->Size = System::Drawing::Size(138, 36);
			this->ButtonUpdatePanel->TabIndex = 16;
			this->ButtonUpdatePanel->Text = L"Добавить";
			this->ButtonUpdatePanel->UseVisualStyleBackColor = true;
			this->ButtonUpdatePanel->Click += gcnew System::EventHandler(this, &UpdatePanel::ButtonUpdatePanel_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label8->Location = System::Drawing::Point(49, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(167, 22);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Измените данные:";
			// 
			// UpdatePanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(258, 257);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TextboxSpecializationUpdatePanel);
			this->Controls->Add(this->TextBoxNameMonitorUpdatePanel);
			this->Controls->Add(this->TextBoxNumberKurcUpdatePanel);
			this->Controls->Add(this->ComboBoxTitleFacultyUpdatePanel);
			this->Controls->Add(this->TextBoxNameKuratorUpdatePanel);
			this->Controls->Add(this->TextBoxTitleGroupUpdatePanel);
			this->Controls->Add(this->ButtonUpdatePanel);
			this->Name = L"UpdatePanel";
			this->Text = L"UpdatePanel";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
		Group^ ItemGroup = gcnew Group();
#pragma endregion
	private: System::Void ButtonUpdatePanel_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TextBoxTitleGroupUpdatePanel->Text == " " && ComboBoxTitleFacultyUpdatePanel->SelectedText == " "  && TextboxSpecializationUpdatePanel->Text == " " && TextBoxNameKuratorUpdatePanel->Text == " " && TextBoxNameMonitorUpdatePanel->Text == " " && TextBoxNumberKurcUpdatePanel->Text == " ")
			MessageBox::Show("Поле для ввода нового имени не может быть пустым!");
		else {
			Group^ g = gcnew Group();
			BaseData^ bd = gcnew BaseData();
			List<Faculty^>^ list = bd->FillBaseData();
			List<Student^>^ list_students = bd->FillListViewStudent(ItemGroup->TitleGroup);

			g->TitleGroup = TextBoxTitleGroupUpdatePanel->Text;
			g->TitleFaculty = list[ComboBoxTitleFacultyUpdatePanel->SelectedIndex]->TitleFaculty;
			g->NameKurator = TextBoxNameKuratorUpdatePanel->Text;
			//Console::WriteLine("{0} ", list[ComboBoxTitleFacultyUpdatePanel->SelectedIndex]->TitleFaculty);
			g->Specialization = TextboxSpecializationUpdatePanel->Text;
			//Console::WriteLine("{0} ", g->Specialization);
			g->NameMonitor = TextBoxNameMonitorUpdatePanel->Text;
			g->NumberKurc = Convert::ToInt32(TextBoxNumberKurcUpdatePanel->Text);
		
			//передать новые данные о студенте: группа факультет курс направление

			for (size_t i = 0; i < list_students->Count; i++)
			{
				list_students[i]->Title_Group = g->TitleGroup;
				list_students[i]->Specialization = g->Specialization;
				list_students[i]->Number_Kurc = g->NumberKurc;
				bd->Update(list_students[i]);
			}
			bd->Update(g, ItemGroup->ID);
			//bd->Reload()
		}
	}
};
}
