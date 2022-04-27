#pragma once

#include "../../../BD/BaseData.h"
#include "../CreateFaculty/CreateFaculty.h"
#include "../UpdateFaculty/UpdateForm.h"
#include "../CreatePanel/CreatePanel.h"
#include "../CreateStudent/CreateStudent.h"
#include "../AddStudent/AddStudent.h"
#include "../UpdatePanel/UpdatePanel.h"


namespace StudentCardVelial {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FacultyForm : public System::Windows::Forms::Form
	{
	public:
		FacultyForm(void)
		{
			InitializeComponent();
			bd = gcnew BaseData();
			list = bd->FillBaseData();
			bd->Reload(list, list_groups, TreeViewFaculty);
		}

	protected:
		~FacultyForm()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::TreeView^ TreeViewFaculty;
	private: System::Windows::Forms::Label^ LabelFacultyForm;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ ButtonDeleteFaculty;
	private: System::Windows::Forms::Button^ ButtonCreateFacultyForm;
	private: System::Windows::Forms::Button^ ButtonUpdateFacultyForm;
	private: System::Windows::Forms::Button^ ButtonUpdateForm;
	private: System::Windows::Forms::Panel^ PanelMainForm;
	private: System::Windows::Forms::Button^ ButtonUpdateListViewPanel;
	private: System::Windows::Forms::Button^ ButtonDeletePanel;
	private: System::Windows::Forms::Button^ ButtonUpdatePanel;
	private: System::Windows::Forms::Button^ ButtonCreatePanel;
	private: System::Windows::Forms::ListView^ ListViewPanel;
	private: System::Windows::Forms::TextBox^ TextBoxNamePanel;
	private: System::Windows::Forms::Label^ LabelNamePanel;
	private: System::Windows::Forms::TextBox^ TextBoxTitlePanel;
	private: System::Windows::Forms::Label^ LabelTitlePanel;
	private: System::Windows::Forms::Button^ ButtonCreateStudentBD;
	private: System::Windows::Forms::Label^ LabelTextPathPanel;
	private: System::Windows::Forms::Label^ LabelPathPanel;
	private: System::Windows::Forms::Panel^ PanelStudenet;
	private: System::Windows::Forms::TextBox^ TextBoxNumberKurc;

	private: System::Windows::Forms::TextBox^ TextBoxNameMonitor;
	private: System::Windows::Forms::Label^ LabelNumberKurc;


	private: System::Windows::Forms::Label^ LabelNameMonitor;


	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

	void InitializeComponent(void)
		   {
		this->TreeViewFaculty = (gcnew System::Windows::Forms::TreeView());
		this->LabelFacultyForm = (gcnew System::Windows::Forms::Label());
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->ButtonDeleteFaculty = (gcnew System::Windows::Forms::Button());
		this->ButtonCreateFacultyForm = (gcnew System::Windows::Forms::Button());
		this->ButtonUpdateFacultyForm = (gcnew System::Windows::Forms::Button());
		this->ButtonUpdateForm = (gcnew System::Windows::Forms::Button());
		this->PanelMainForm = (gcnew System::Windows::Forms::Panel());
		this->PanelStudenet = (gcnew System::Windows::Forms::Panel());
		this->TextBoxNumberKurc = (gcnew System::Windows::Forms::TextBox());
		this->TextBoxNameMonitor = (gcnew System::Windows::Forms::TextBox());
		this->LabelNumberKurc = (gcnew System::Windows::Forms::Label());
		this->LabelNameMonitor = (gcnew System::Windows::Forms::Label());
		this->LabelPathPanel = (gcnew System::Windows::Forms::Label());
		this->LabelTextPathPanel = (gcnew System::Windows::Forms::Label());
		this->ListViewPanel = (gcnew System::Windows::Forms::ListView());
		this->ButtonUpdateListViewPanel = (gcnew System::Windows::Forms::Button());
		this->ButtonDeletePanel = (gcnew System::Windows::Forms::Button());
		this->ButtonUpdatePanel = (gcnew System::Windows::Forms::Button());
		this->ButtonCreatePanel = (gcnew System::Windows::Forms::Button());
		this->TextBoxNamePanel = (gcnew System::Windows::Forms::TextBox());
		this->LabelNamePanel = (gcnew System::Windows::Forms::Label());
		this->TextBoxTitlePanel = (gcnew System::Windows::Forms::TextBox());
		this->LabelTitlePanel = (gcnew System::Windows::Forms::Label());
		this->ButtonCreateStudentBD = (gcnew System::Windows::Forms::Button());
		this->panel1->SuspendLayout();
		this->PanelMainForm->SuspendLayout();
		this->PanelStudenet->SuspendLayout();
		this->SuspendLayout();
		// 
		// TreeViewFaculty
		// 
		this->TreeViewFaculty->Location = System::Drawing::Point(12, 91);
		this->TreeViewFaculty->Name = L"TreeViewFaculty";
		this->TreeViewFaculty->Size = System::Drawing::Size(297, 272);
		this->TreeViewFaculty->TabIndex = 0;
		this->TreeViewFaculty->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &FacultyForm::TreeViewFaculty_AfterSelect);
		// 
		// LabelFacultyForm
		// 
		this->LabelFacultyForm->AutoSize = true;
		this->LabelFacultyForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
		this->LabelFacultyForm->Location = System::Drawing::Point(5, 5);
		this->LabelFacultyForm->Name = L"LabelFacultyForm";
		this->LabelFacultyForm->Size = System::Drawing::Size(98, 22);
		this->LabelFacultyForm->TabIndex = 0;
		this->LabelFacultyForm->Text = L"Факультет";
		// 
		// panel1
		// 
		this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
			static_cast<System::Int32>(static_cast<System::Byte>(112)));
		this->panel1->Controls->Add(this->ButtonDeleteFaculty);
		this->panel1->Controls->Add(this->LabelFacultyForm);
		this->panel1->Controls->Add(this->ButtonCreateFacultyForm);
		this->panel1->Controls->Add(this->ButtonUpdateFacultyForm);
		this->panel1->Location = System::Drawing::Point(12, 12);
		this->panel1->Name = L"panel1";
		this->panel1->Size = System::Drawing::Size(298, 73);
		this->panel1->TabIndex = 2;
		// 
		// ButtonDeleteFaculty
		// 
		this->ButtonDeleteFaculty->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ButtonDeleteFaculty->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
		this->ButtonDeleteFaculty->Location = System::Drawing::Point(217, 30);
		this->ButtonDeleteFaculty->Margin = System::Windows::Forms::Padding(0);
		this->ButtonDeleteFaculty->Name = L"ButtonDeleteFaculty";
		this->ButtonDeleteFaculty->Size = System::Drawing::Size(73, 36);
		this->ButtonDeleteFaculty->TabIndex = 2;
		this->ButtonDeleteFaculty->Text = L"Удалить";
		this->ButtonDeleteFaculty->UseVisualStyleBackColor = false;
		this->ButtonDeleteFaculty->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonDeleteFaculty_Click);
		// 
		// ButtonCreateFacultyForm
		// 
		this->ButtonCreateFacultyForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
			static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		this->ButtonCreateFacultyForm->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
		this->ButtonCreateFacultyForm->Location = System::Drawing::Point(9, 30);
		this->ButtonCreateFacultyForm->Name = L"ButtonCreateFacultyForm";
		this->ButtonCreateFacultyForm->Size = System::Drawing::Size(100, 36);
		this->ButtonCreateFacultyForm->TabIndex = 1;
		this->ButtonCreateFacultyForm->Text = L"Добавить";
		this->ButtonCreateFacultyForm->UseVisualStyleBackColor = false;
		this->ButtonCreateFacultyForm->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonCreateFacultyForm_Click);
		// 
		// ButtonUpdateFacultyForm
		// 
		this->ButtonUpdateFacultyForm->BackColor = System::Drawing::Color::Silver;
		this->ButtonUpdateFacultyForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
		this->ButtonUpdateFacultyForm->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
		this->ButtonUpdateFacultyForm->Location = System::Drawing::Point(115, 30);
		this->ButtonUpdateFacultyForm->Name = L"ButtonUpdateFacultyForm";
		this->ButtonUpdateFacultyForm->Size = System::Drawing::Size(98, 36);
		this->ButtonUpdateFacultyForm->TabIndex = 0;
		this->ButtonUpdateFacultyForm->Text = L"Изменить";
		this->ButtonUpdateFacultyForm->UseVisualStyleBackColor = false;
		this->ButtonUpdateFacultyForm->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonUpdateFacultyForm_Click);
		// 
		// ButtonUpdateForm
		// 
		this->ButtonUpdateForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
			static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(112)));
		this->ButtonUpdateForm->Location = System::Drawing::Point(12, 370);
		this->ButtonUpdateForm->Name = L"ButtonUpdateForm";
		this->ButtonUpdateForm->Size = System::Drawing::Size(297, 53);
		this->ButtonUpdateForm->TabIndex = 4;
		this->ButtonUpdateForm->Text = L"Обновить";
		this->ButtonUpdateForm->UseVisualStyleBackColor = false;
		this->ButtonUpdateForm->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonUpdateForm_Click);
		// 
		// PanelMainForm
		// 
		this->PanelMainForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(179)),
			static_cast<System::Int32>(static_cast<System::Byte>(112)));
		this->PanelMainForm->Controls->Add(this->PanelStudenet);
		this->PanelMainForm->Controls->Add(this->LabelPathPanel);
		this->PanelMainForm->Controls->Add(this->LabelTextPathPanel);
		this->PanelMainForm->Controls->Add(this->ListViewPanel);
		this->PanelMainForm->Controls->Add(this->ButtonUpdateListViewPanel);
		this->PanelMainForm->Controls->Add(this->ButtonDeletePanel);
		this->PanelMainForm->Controls->Add(this->ButtonUpdatePanel);
		this->PanelMainForm->Controls->Add(this->ButtonCreatePanel);
		this->PanelMainForm->Controls->Add(this->TextBoxNamePanel);
		this->PanelMainForm->Controls->Add(this->LabelNamePanel);
		this->PanelMainForm->Controls->Add(this->TextBoxTitlePanel);
		this->PanelMainForm->Controls->Add(this->LabelTitlePanel);
		this->PanelMainForm->Location = System::Drawing::Point(333, 17);
		this->PanelMainForm->Name = L"PanelMainForm";
		this->PanelMainForm->Size = System::Drawing::Size(589, 477);
		this->PanelMainForm->TabIndex = 5;
		this->PanelMainForm->Visible = false;
		// 
		// PanelStudenet
		// 
		this->PanelStudenet->Controls->Add(this->TextBoxNumberKurc);
		this->PanelStudenet->Controls->Add(this->TextBoxNameMonitor);
		this->PanelStudenet->Controls->Add(this->LabelNumberKurc);
		this->PanelStudenet->Controls->Add(this->LabelNameMonitor);
		this->PanelStudenet->Location = System::Drawing::Point(253, 24);
		this->PanelStudenet->Name = L"PanelStudenet";
		this->PanelStudenet->Size = System::Drawing::Size(166, 128);
		this->PanelStudenet->TabIndex = 11;
		this->PanelStudenet->Visible = false;
		// 
		// TextBoxNumberKurc
		// 
		this->TextBoxNumberKurc->Location = System::Drawing::Point(3, 90);
		this->TextBoxNumberKurc->Name = L"TextBoxNumberKurc";
		this->TextBoxNumberKurc->Size = System::Drawing::Size(146, 22);
		this->TextBoxNumberKurc->TabIndex = 15;
		// 
		// TextBoxNameMonitor
		// 
		this->TextBoxNameMonitor->Location = System::Drawing::Point(3, 31);
		this->TextBoxNameMonitor->Name = L"TextBoxNameMonitor";
		this->TextBoxNameMonitor->Size = System::Drawing::Size(146, 22);
		this->TextBoxNameMonitor->TabIndex = 13;
		// 
		// LabelNumberKurc
		// 
		this->LabelNumberKurc->AutoSize = true;
		this->LabelNumberKurc->Location = System::Drawing::Point(7, 72);
		this->LabelNumberKurc->Name = L"LabelNumberKurc";
		this->LabelNumberKurc->Size = System::Drawing::Size(44, 16);
		this->LabelNumberKurc->TabIndex = 14;
		this->LabelNumberKurc->Text = L"label2";
		// 
		// LabelNameMonitor
		// 
		this->LabelNameMonitor->AutoSize = true;
		this->LabelNameMonitor->Location = System::Drawing::Point(7, 12);
		this->LabelNameMonitor->Name = L"LabelNameMonitor";
		this->LabelNameMonitor->Size = System::Drawing::Size(44, 16);
		this->LabelNameMonitor->TabIndex = 12;
		this->LabelNameMonitor->Text = L"label1";
		// 
		// LabelPathPanel
		// 
		this->LabelPathPanel->AutoSize = true;
		this->LabelPathPanel->Location = System::Drawing::Point(40, 6);
		this->LabelPathPanel->Name = L"LabelPathPanel";
		this->LabelPathPanel->Size = System::Drawing::Size(0, 16);
		this->LabelPathPanel->TabIndex = 10;
		// 
		// LabelTextPathPanel
		// 
		this->LabelTextPathPanel->AutoSize = true;
		this->LabelTextPathPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F));
		this->LabelTextPathPanel->Location = System::Drawing::Point(3, 6);
		this->LabelTextPathPanel->Name = L"LabelTextPathPanel";
		this->LabelTextPathPanel->Size = System::Drawing::Size(42, 16);
		this->LabelTextPathPanel->TabIndex = 9;
		this->LabelTextPathPanel->Text = L"Путь:";
		// 
		// ListViewPanel
		// 
		this->ListViewPanel->FullRowSelect = true;
		this->ListViewPanel->GridLines = true;
		this->ListViewPanel->HideSelection = false;
		this->ListViewPanel->Location = System::Drawing::Point(33, 159);
		this->ListViewPanel->Name = L"ListViewPanel";
		this->ListViewPanel->Size = System::Drawing::Size(507, 247);
		this->ListViewPanel->TabIndex = 4;
		this->ListViewPanel->UseCompatibleStateImageBehavior = false;
		this->ListViewPanel->View = System::Windows::Forms::View::Details;
		// 
		// ButtonUpdateListViewPanel
		// 
		this->ButtonUpdateListViewPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ButtonUpdateListViewPanel->Location = System::Drawing::Point(333, 424);
		this->ButtonUpdateListViewPanel->Name = L"ButtonUpdateListViewPanel";
		this->ButtonUpdateListViewPanel->Size = System::Drawing::Size(88, 32);
		this->ButtonUpdateListViewPanel->TabIndex = 8;
		this->ButtonUpdateListViewPanel->Text = L"Reboot";
		this->ButtonUpdateListViewPanel->UseVisualStyleBackColor = false;
		this->ButtonUpdateListViewPanel->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonUpdateListViewPanel_Click);
		// 
		// ButtonDeletePanel
		// 
		this->ButtonDeletePanel->Location = System::Drawing::Point(229, 425);
		this->ButtonDeletePanel->Name = L"ButtonDeletePanel";
		this->ButtonDeletePanel->Size = System::Drawing::Size(87, 31);
		this->ButtonDeletePanel->TabIndex = 7;
		this->ButtonDeletePanel->Text = L"Удалить";
		this->ButtonDeletePanel->UseVisualStyleBackColor = true;
		this->ButtonDeletePanel->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonDeletePanel_Click);
		// 
		// ButtonUpdatePanel
		// 
		this->ButtonUpdatePanel->Location = System::Drawing::Point(136, 424);
		this->ButtonUpdatePanel->Name = L"ButtonUpdatePanel";
		this->ButtonUpdatePanel->Size = System::Drawing::Size(87, 31);
		this->ButtonUpdatePanel->TabIndex = 6;
		this->ButtonUpdatePanel->Text = L"Изменить";
		this->ButtonUpdatePanel->UseVisualStyleBackColor = true;
		this->ButtonUpdatePanel->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonUpdatePanel_Click);
		// 
		// ButtonCreatePanel
		// 
		this->ButtonCreatePanel->Location = System::Drawing::Point(43, 424);
		this->ButtonCreatePanel->Name = L"ButtonCreatePanel";
		this->ButtonCreatePanel->Size = System::Drawing::Size(87, 30);
		this->ButtonCreatePanel->TabIndex = 5;
		this->ButtonCreatePanel->Text = L"Добавить";
		this->ButtonCreatePanel->UseVisualStyleBackColor = true;
		this->ButtonCreatePanel->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonCreatePanel_Click);
		// 
		// TextBoxNamePanel
		// 
		this->TextBoxNamePanel->Location = System::Drawing::Point(30, 114);
		this->TextBoxNamePanel->Name = L"TextBoxNamePanel";
		this->TextBoxNamePanel->Size = System::Drawing::Size(146, 22);
		this->TextBoxNamePanel->TabIndex = 3;
		// 
		// LabelNamePanel
		// 
		this->LabelNamePanel->AutoSize = true;
		this->LabelNamePanel->Location = System::Drawing::Point(34, 96);
		this->LabelNamePanel->Name = L"LabelNamePanel";
		this->LabelNamePanel->Size = System::Drawing::Size(44, 16);
		this->LabelNamePanel->TabIndex = 2;
		this->LabelNamePanel->Text = L"label2";
		// 
		// TextBoxTitlePanel
		// 
		this->TextBoxTitlePanel->Location = System::Drawing::Point(30, 55);
		this->TextBoxTitlePanel->Name = L"TextBoxTitlePanel";
		this->TextBoxTitlePanel->Size = System::Drawing::Size(146, 22);
		this->TextBoxTitlePanel->TabIndex = 1;
		// 
		// LabelTitlePanel
		// 
		this->LabelTitlePanel->AutoSize = true;
		this->LabelTitlePanel->Location = System::Drawing::Point(33, 37);
		this->LabelTitlePanel->Name = L"LabelTitlePanel";
		this->LabelTitlePanel->Size = System::Drawing::Size(44, 16);
		this->LabelTitlePanel->TabIndex = 0;
		this->LabelTitlePanel->Text = L"label1";
		// 
		// ButtonCreateStudentBD
		// 
		this->ButtonCreateStudentBD->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
			static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(112)));
		this->ButtonCreateStudentBD->Location = System::Drawing::Point(12, 431);
		this->ButtonCreateStudentBD->Name = L"ButtonCreateStudentBD";
		this->ButtonCreateStudentBD->Size = System::Drawing::Size(297, 53);
		this->ButtonCreateStudentBD->TabIndex = 6;
		this->ButtonCreateStudentBD->Text = L"Добавить студента в БД";
		this->ButtonCreateStudentBD->UseVisualStyleBackColor = false;
		this->ButtonCreateStudentBD->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonCreateStudentBD_Click);
		// 
		// FacultyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
			static_cast<System::Int32>(static_cast<System::Byte>(68)));
		this->ClientSize = System::Drawing::Size(934, 506);
		this->Controls->Add(this->PanelMainForm);
		this->Controls->Add(this->ButtonCreateStudentBD);
		this->Controls->Add(this->ButtonUpdateForm);
		this->Controls->Add(this->panel1);
		this->Controls->Add(this->TreeViewFaculty);
		this->Name = L"FacultyForm";
		this->Text = L"FacultyForm";
		this->panel1->ResumeLayout(false);
		this->panel1->PerformLayout();
		this->PanelMainForm->ResumeLayout(false);
		this->PanelMainForm->PerformLayout();
		this->PanelStudenet->ResumeLayout(false);
		this->PanelStudenet->PerformLayout();
		this->ResumeLayout(false);

	}
	private:
		//Переменные (Поля класса)
		BaseData^ bd;
		List<Faculty^>^ list;
		List<Group^>^ list_groups;
		List<Student^>^ list_students;
		int ListViewPanel_SelectedIndex;
		int LevelTreeView;
		array<String^>^ PathGroup;
#pragma endregion

	//Добавление нового факультета
	private: System::Void ButtonCreateFacultyForm_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateFaculty^ Create = gcnew CreateFaculty();
		Create->Show();
	}
	//Изменение данных факультета
	private: System::Void ButtonUpdateFacultyForm_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateForm^ UpdateFacultyForm = gcnew UpdateForm(list[this->TreeViewFaculty->SelectedNode->Index]);
		UpdateFacultyForm->Show();
	}
	//Удаление факультета
	private: System::Void ButtonDeleteFaculty_Click(System::Object^ sender, System::EventArgs^ e) {
		if (list[this->TreeViewFaculty->SelectedNode->Index] == nullptr)
			MessageBox::Show("Ошибка: Выберите экземпляр объекта!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else {
			Console::WriteLine("{0}", list[this->TreeViewFaculty->SelectedNode->Index]->ID);
			list_groups = bd->FillListView(list[this->TreeViewFaculty->SelectedNode->Index]->TitleFaculty);
			for (size_t i = 0; i < list_groups->Count; i++)
			{
				bd->Update(1, list_groups[i]->TitleGroup);
				bd->Delete(list_groups[i]->TitleGroup);
			}
			bd->Delete(list[this->TreeViewFaculty->SelectedNode->Index]);
			bd->Reload(list, list_groups, TreeViewFaculty);
		}
	}
	//Обновление TreeView
	private: System::Void ButtonUpdateForm_Click(System::Object^ sender, System::EventArgs^ e) {
		bd = gcnew BaseData();
		bd->Reload(list, list_groups, TreeViewFaculty);
	}
	//Добавление Группы/Студента
	private: System::Void ButtonCreatePanel_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (LevelTreeView)
		{
		case 0: {
			CreatePanel^ Create = gcnew CreatePanel(this->TreeViewFaculty->SelectedNode->Index);
			Create->Show();
			break;
		}
		case 1: {
			AddStudent^ Add = gcnew AddStudent(PathGroup[1]);
			Add->Show();
			break;
		}
		default:

			break;
		}

	}
	//Изменение Группы/Студента
	private: System::Void ButtonUpdatePanel_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (LevelTreeView)
		{
		case 0: {
			for (size_t i = 0; i < list_groups->Count; i++)
			{
				if (list_groups[i]->TitleGroup == ListViewPanel->FocusedItem->SubItems[1]->Text) {
					UpdatePanel^ UpdatePanel = gcnew StudentCardVelial::UpdatePanel(list_groups[i]);
					UpdatePanel->Show();
				}
			}
			break;
		}
		case 1: {
			
			
			break;
		}
		default:

			break;
		}
	}
	//Обновление ListView
	private: System::Void ButtonUpdateListViewPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (LevelTreeView)
		{
		case 0: {
			bd->Reload(list_groups, ListViewPanel, list[this->TreeViewFaculty->SelectedNode->Index]->TitleFaculty);
			break;
		}
		case 1: {
			bd->Reload(list_students, ListViewPanel, PathGroup[1]);
			break;
		}
		default:

			break;
		}
	}
	//Удалание Группы/Студента
	private: System::Void ButtonDeletePanel_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (LevelTreeView)
		{
		case 0: {
			String^ TitleGroupSelectedItem = ListViewPanel->FocusedItem->SubItems[1]->Text;
			Console::WriteLine("Название группы: {0}", TitleGroupSelectedItem);
			bd->Update(1, TitleGroupSelectedItem);
			bd->Delete(TitleGroupSelectedItem);
			bd->Reload(list_groups, ListViewPanel, list[this->TreeViewFaculty->SelectedNode->Index]->TitleFaculty);
			break;
		}
		case 1: {
			//list_students = bd->FillListViewStudent(PathGroup[0]);
			Console::WriteLine(list_students[ListViewPanel->FocusedItem->Index]->ID);
			bd->Update(list_students[ListViewPanel->FocusedItem->Index]->ID, 1, PathGroup[1]);
			bd->Reload(list_students, ListViewPanel, PathGroup[1]);
			break;
		}
		default:

			break;
		}
	}
	//Определние элемента для открытия Panel
	private: System::Void TreeViewFaculty_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
		Console::WriteLine("{0}", e->Node->FullPath);
		Console::WriteLine("{0}", e->Node->Index);
		Console::WriteLine("{0}", e->Node->Level);
		
		PanelMainForm->Visible = true;
		LabelPathPanel->Text = e->Node->FullPath;
		LevelTreeView = e->Node->Level;

		switch (e->Node->Level)
		{
		case 0: {
			PanelStudenet->Visible = false;
			LabelTitlePanel->Text = "Название факультета:";
			//TextBoxTitlePanel->Text = list[this->TreeViewFaculty->SelectedNode->Index]->Name;
			TextBoxTitlePanel->Text = list[e->Node->Index]->TitleFaculty;
			LabelNamePanel->Text = "Декан:";
			TextBoxNamePanel->Text = list[e->Node->Index]->NameDekan;

			ListViewPanel->Columns->Clear();
			ListViewPanel->Columns->Add("ID", 40, HorizontalAlignment::Center);
			ListViewPanel->Columns->Add("Название группы", 140, HorizontalAlignment::Center);
			ListViewPanel->Columns->Add("Имя куратора", 140, HorizontalAlignment::Center);
			
			list_groups = gcnew List<Group^>();
			list_groups = bd->FillListView(list[e->Node->Index]->TitleFaculty);
			bd->Reload(list_groups, ListViewPanel, list[e->Node->Index]->TitleFaculty);
			
			break;
		}
		case 1: {
			PanelStudenet->Visible = true;
			PathGroup = gcnew array<String^>(e->Node->Level + 1);
			PathGroup = e->Node->FullPath->Split('\\');
			for (size_t i = 0; i < e->Node->Level + 1; i++)
				Console::WriteLine("{0} ", PathGroup[i]);

			//заменить цифры на enum
			//int IndexGroup;
			list_groups = bd->FillListView(PathGroup[0]);
			LabelTitlePanel->Text = "Название группы:";
			TextBoxTitlePanel->Text = list_groups[e->Node->Index]->TitleGroup;
			LabelNamePanel->Text = "Куратор:";
			TextBoxNamePanel->Text = list_groups[e->Node->Index]->NameKurator;
			LabelNameMonitor->Text = "ФИО старосты:";
			TextBoxNameMonitor->Text = list_groups[e->Node->Index]->NameMonitor;
			LabelNumberKurc->Text = "Курс:";
			TextBoxNumberKurc->Text = Convert::ToString(list_groups[e->Node->Index]->NumberKurc);

			ListViewPanel->Columns->Clear();
			ListViewPanel->Columns->Add("ID", 40, HorizontalAlignment::Center);
			ListViewPanel->Columns->Add("Имя", 140, HorizontalAlignment::Center);
			ListViewPanel->Columns->Add("Фамилия", 140, HorizontalAlignment::Center);
			ListViewPanel->Columns->Add("Отчество", 140, HorizontalAlignment::Center);
			//ListViewPanel->Columns->Add("", 140, HorizontalAlignment::Center);

			list_students = gcnew List<Student^>();
			list_students = bd->FillListViewStudent(PathGroup[1]);
			bd->Reload(list_students, ListViewPanel, PathGroup[1]);
			
			break;
		}
		case 2: {
			LabelTitlePanel->Text = "ФИО:";
			LabelNamePanel->Text = "Курс:";
			break;
		}
		default:
			Console::WriteLine("ошибка ветки!");
			break;
		}
		//bd->Reload(list, list_groups, TreeViewFaculty);
		//int index = list[this->TreeViewFaculty->SelectedNode->Index]->ID;
	}
	//Добавления абитуриента
	private: System::Void ButtonCreateStudentBD_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateStudent^ Create = gcnew CreateStudent();
		Create->Show();
	}
};
}
