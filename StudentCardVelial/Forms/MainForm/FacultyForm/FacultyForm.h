#pragma once

#include "../../../BD/BaseData.h"
#include "../CreateFaculty/CreateFaculty.h"
#include "../UpdateFaculty/UpdateForm.h"
#include "../CreatePanel/CreatePanel.h"
#include "../CreateStudent/CreateStudent.h"
#include "../AddStudent/AddStudent.h"
#include "../UpdatePanel/UpdatePanel.h"
#include "../../StudentCard/ViewStudentCard/ViewStudentCard.h"
#include "../../StudentCard/UpdateStudentCard/UpdateStudentCard.h"


namespace StudentCardVelial {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	enum Level { GroupLevel = 0, StudentLevel = 1 };

	public ref class FacultyForm : public System::Windows::Forms::Form
	{
	public:
		FacultyForm(bool Status) : isAdmin(Status)
		{
			InitializeComponent();

			if (isAdmin) {

			}
			else {
				this->PanelButton->Visible = false;
				this->PanelFacultyButton->Visible = false;
				this->ButtonUpdateForm->Visible = false;
				this->ButtonCreateStudentBD->Visible = false;

				this->LabelTitleUniversity->AutoSize = true;
				this->LabelTitleUniversity->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->LabelTitleUniversity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
				this->LabelTitleUniversity->Location = System::Drawing::Point(12, 9);
				//this->LabelTitleUniversity->Name = L"LabelTitleUniversity";
				this->LabelTitleUniversity->Size = System::Drawing::Size(171, 22);
				this->LabelTitleUniversity->TabIndex = 0;
				this->LabelTitleUniversity->Text = L"Архитектура VGTU";

				this->TreeViewFaculty->Location = System::Drawing::Point(12, 32);
				this->TreeViewFaculty->Size = System::Drawing::Size(230, 350);
				//this->TreeViewFaculty->Size = System::Drawing::Size(297, 272);

			}

			
			bd = gcnew BaseData();
			list = bd->FillBaseData();
			bd->Reload(list, TreeViewFaculty);

			
		}

	protected:
		~FacultyForm()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::TreeView^ TreeViewFaculty;
	private: System::Windows::Forms::Label^ LabelFacultyForm;
	private: System::Windows::Forms::Panel^ PanelFacultyButton;

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
	private: System::Windows::Forms::Panel^ PanelButton;
	private: System::Windows::Forms::Label^ LabelTitleUniversity;








	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

	void InitializeComponent(void)
		   {
		this->TreeViewFaculty = (gcnew System::Windows::Forms::TreeView());
		this->LabelFacultyForm = (gcnew System::Windows::Forms::Label());
		this->PanelFacultyButton = (gcnew System::Windows::Forms::Panel());
		this->ButtonDeleteFaculty = (gcnew System::Windows::Forms::Button());
		this->ButtonCreateFacultyForm = (gcnew System::Windows::Forms::Button());
		this->ButtonUpdateFacultyForm = (gcnew System::Windows::Forms::Button());
		this->ButtonUpdateForm = (gcnew System::Windows::Forms::Button());
		this->PanelMainForm = (gcnew System::Windows::Forms::Panel());
		this->PanelButton = (gcnew System::Windows::Forms::Panel());
		this->ButtonCreatePanel = (gcnew System::Windows::Forms::Button());
		this->ButtonUpdatePanel = (gcnew System::Windows::Forms::Button());
		this->ButtonDeletePanel = (gcnew System::Windows::Forms::Button());
		this->ButtonUpdateListViewPanel = (gcnew System::Windows::Forms::Button());
		this->PanelStudenet = (gcnew System::Windows::Forms::Panel());
		this->TextBoxNumberKurc = (gcnew System::Windows::Forms::TextBox());
		this->TextBoxNameMonitor = (gcnew System::Windows::Forms::TextBox());
		this->LabelNumberKurc = (gcnew System::Windows::Forms::Label());
		this->LabelNameMonitor = (gcnew System::Windows::Forms::Label());
		this->LabelPathPanel = (gcnew System::Windows::Forms::Label());
		this->LabelTextPathPanel = (gcnew System::Windows::Forms::Label());
		this->ListViewPanel = (gcnew System::Windows::Forms::ListView());
		this->TextBoxNamePanel = (gcnew System::Windows::Forms::TextBox());
		this->LabelNamePanel = (gcnew System::Windows::Forms::Label());
		this->TextBoxTitlePanel = (gcnew System::Windows::Forms::TextBox());
		this->LabelTitlePanel = (gcnew System::Windows::Forms::Label());
		this->ButtonCreateStudentBD = (gcnew System::Windows::Forms::Button());
		this->LabelTitleUniversity = (gcnew System::Windows::Forms::Label());
		this->PanelFacultyButton->SuspendLayout();
		this->PanelMainForm->SuspendLayout();
		this->PanelButton->SuspendLayout();
		this->PanelStudenet->SuspendLayout();
		this->SuspendLayout();
		// 
		// TreeViewFaculty
		// 
		this->TreeViewFaculty->Location = System::Drawing::Point(12, 86);
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
		// PanelFacultyButton
		// 
		this->PanelFacultyButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)),
			static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(112)));
		this->PanelFacultyButton->Controls->Add(this->ButtonDeleteFaculty);
		this->PanelFacultyButton->Controls->Add(this->LabelFacultyForm);
		this->PanelFacultyButton->Controls->Add(this->ButtonCreateFacultyForm);
		this->PanelFacultyButton->Controls->Add(this->ButtonUpdateFacultyForm);
		this->PanelFacultyButton->Location = System::Drawing::Point(12, 7);
		this->PanelFacultyButton->Name = L"PanelFacultyButton";
		this->PanelFacultyButton->Size = System::Drawing::Size(298, 73);
		this->PanelFacultyButton->TabIndex = 2;
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
		this->ButtonUpdateForm->Location = System::Drawing::Point(12, 365);
		this->ButtonUpdateForm->Name = L"ButtonUpdateForm";
		this->ButtonUpdateForm->Size = System::Drawing::Size(297, 53);
		this->ButtonUpdateForm->TabIndex = 4;
		this->ButtonUpdateForm->Text = L"Обновить";
		this->ButtonUpdateForm->UseVisualStyleBackColor = false;
		this->ButtonUpdateForm->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonUpdateForm_Click);
		// 
		// PanelMainForm
		// 
		this->PanelMainForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
			static_cast<System::Int32>(static_cast<System::Byte>(86)));
		this->PanelMainForm->Controls->Add(this->PanelButton);
		this->PanelMainForm->Controls->Add(this->PanelStudenet);
		this->PanelMainForm->Controls->Add(this->LabelPathPanel);
		this->PanelMainForm->Controls->Add(this->LabelTextPathPanel);
		this->PanelMainForm->Controls->Add(this->ListViewPanel);
		this->PanelMainForm->Controls->Add(this->TextBoxNamePanel);
		this->PanelMainForm->Controls->Add(this->LabelNamePanel);
		this->PanelMainForm->Controls->Add(this->TextBoxTitlePanel);
		this->PanelMainForm->Controls->Add(this->LabelTitlePanel);
		this->PanelMainForm->Location = System::Drawing::Point(333, 12);
		this->PanelMainForm->Name = L"PanelMainForm";
		this->PanelMainForm->Size = System::Drawing::Size(589, 477);
		this->PanelMainForm->TabIndex = 5;
		this->PanelMainForm->Visible = false;
		// 
		// PanelButton
		// 
		this->PanelButton->Controls->Add(this->ButtonCreatePanel);
		this->PanelButton->Controls->Add(this->ButtonUpdatePanel);
		this->PanelButton->Controls->Add(this->ButtonDeletePanel);
		this->PanelButton->Controls->Add(this->ButtonUpdateListViewPanel);
		this->PanelButton->Location = System::Drawing::Point(33, 414);
		this->PanelButton->Name = L"PanelButton";
		this->PanelButton->Size = System::Drawing::Size(507, 40);
		this->PanelButton->TabIndex = 12;
		// 
		// ButtonCreatePanel
		// 
		this->ButtonCreatePanel->Location = System::Drawing::Point(4, 5);
		this->ButtonCreatePanel->Name = L"ButtonCreatePanel";
		this->ButtonCreatePanel->Size = System::Drawing::Size(87, 30);
		this->ButtonCreatePanel->TabIndex = 5;
		this->ButtonCreatePanel->Text = L"Добавить";
		this->ButtonCreatePanel->UseVisualStyleBackColor = true;
		this->ButtonCreatePanel->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonCreatePanel_Click);
		// 
		// ButtonUpdatePanel
		// 
		this->ButtonUpdatePanel->Location = System::Drawing::Point(118, 6);
		this->ButtonUpdatePanel->Name = L"ButtonUpdatePanel";
		this->ButtonUpdatePanel->Size = System::Drawing::Size(87, 31);
		this->ButtonUpdatePanel->TabIndex = 6;
		this->ButtonUpdatePanel->Text = L"Изменить";
		this->ButtonUpdatePanel->UseVisualStyleBackColor = true;
		this->ButtonUpdatePanel->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonUpdatePanel_Click);
		// 
		// ButtonDeletePanel
		// 
		this->ButtonDeletePanel->Location = System::Drawing::Point(230, 6);
		this->ButtonDeletePanel->Name = L"ButtonDeletePanel";
		this->ButtonDeletePanel->Size = System::Drawing::Size(87, 31);
		this->ButtonDeletePanel->TabIndex = 7;
		this->ButtonDeletePanel->Text = L"Удалить";
		this->ButtonDeletePanel->UseVisualStyleBackColor = true;
		this->ButtonDeletePanel->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonDeletePanel_Click);
		// 
		// ButtonUpdateListViewPanel
		// 
		this->ButtonUpdateListViewPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ButtonUpdateListViewPanel->Location = System::Drawing::Point(406, 4);
		this->ButtonUpdateListViewPanel->Name = L"ButtonUpdateListViewPanel";
		this->ButtonUpdateListViewPanel->Size = System::Drawing::Size(88, 32);
		this->ButtonUpdateListViewPanel->TabIndex = 8;
		this->ButtonUpdateListViewPanel->Text = L"Reboot";
		this->ButtonUpdateListViewPanel->UseVisualStyleBackColor = false;
		this->ButtonUpdateListViewPanel->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonUpdateListViewPanel_Click);
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
		this->LabelNumberKurc->ForeColor = System::Drawing::SystemColors::Control;
		this->LabelNumberKurc->Location = System::Drawing::Point(7, 72);
		this->LabelNumberKurc->Name = L"LabelNumberKurc";
		this->LabelNumberKurc->Size = System::Drawing::Size(44, 16);
		this->LabelNumberKurc->TabIndex = 14;
		this->LabelNumberKurc->Text = L"label2";
		// 
		// LabelNameMonitor
		// 
		this->LabelNameMonitor->AutoSize = true;
		this->LabelNameMonitor->ForeColor = System::Drawing::SystemColors::Control;
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
		this->LabelTextPathPanel->ForeColor = System::Drawing::SystemColors::Control;
		this->LabelTextPathPanel->Location = System::Drawing::Point(3, 6);
		this->LabelTextPathPanel->Name = L"LabelTextPathPanel";
		this->LabelTextPathPanel->Size = System::Drawing::Size(45, 16);
		this->LabelTextPathPanel->TabIndex = 9;
		this->LabelTextPathPanel->Text = L"Путь: ";
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
		this->ListViewPanel->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &FacultyForm::ListViewPanel_MouseDoubleClick);
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
		this->LabelNamePanel->ForeColor = System::Drawing::SystemColors::Control;
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
		this->LabelTitlePanel->ForeColor = System::Drawing::SystemColors::Control;
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
		this->ButtonCreateStudentBD->Location = System::Drawing::Point(12, 426);
		this->ButtonCreateStudentBD->Name = L"ButtonCreateStudentBD";
		this->ButtonCreateStudentBD->Size = System::Drawing::Size(297, 53);
		this->ButtonCreateStudentBD->TabIndex = 6;
		this->ButtonCreateStudentBD->Text = L"Добавить студента в БД";
		this->ButtonCreateStudentBD->UseVisualStyleBackColor = false;
		this->ButtonCreateStudentBD->Click += gcnew System::EventHandler(this, &FacultyForm::ButtonCreateStudentBD_Click);
		// 
		// LabelTitleUniversity
		// 
		this->LabelTitleUniversity->BackColor = System::Drawing::Color::Transparent;
		this->LabelTitleUniversity->Location = System::Drawing::Point(226, 482);
		this->LabelTitleUniversity->Name = L"LabelTitleUniversity";
		this->LabelTitleUniversity->Size = System::Drawing::Size(100, 23);
		this->LabelTitleUniversity->TabIndex = 0;
		// 
		// FacultyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
			static_cast<System::Int32>(static_cast<System::Byte>(54)));
		this->ClientSize = System::Drawing::Size(934, 504);
		this->Controls->Add(this->LabelTitleUniversity);
		this->Controls->Add(this->PanelMainForm);
		this->Controls->Add(this->ButtonCreateStudentBD);
		this->Controls->Add(this->ButtonUpdateForm);
		this->Controls->Add(this->PanelFacultyButton);
		this->Controls->Add(this->TreeViewFaculty);
		this->Name = L"FacultyForm";
		this->Text = L"FacultyForm";
		this->Activated += gcnew System::EventHandler(this, &FacultyForm::FacultyForm_Activated);
		this->PanelFacultyButton->ResumeLayout(false);
		this->PanelFacultyButton->PerformLayout();
		this->PanelMainForm->ResumeLayout(false);
		this->PanelMainForm->PerformLayout();
		this->PanelButton->ResumeLayout(false);
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
		bool isAdmin;
#pragma endregion

	//Добавление нового факультета
	private: System::Void ButtonCreateFacultyForm_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!

			//Реализация!
			CreateFaculty^ Create = gcnew CreateFaculty();
			Create->Show();
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}
		
	}
	//Изменение данных факультета
	private: System::Void ButtonUpdateFacultyForm_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!
			if (this->TreeViewFaculty->SelectedNode == nullptr) {
				throw gcnew Exception("Выберите факультет для изменения!");
			}
			//Реализация!
			UpdateForm^ UpdateFacultyForm = gcnew UpdateForm(list[this->TreeViewFaculty->SelectedNode->Index]);
			UpdateFacultyForm->Show();
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}
		
	}
	//Удаление факультета
	private: System::Void ButtonDeleteFaculty_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!
			if (this->TreeViewFaculty->SelectedNode == nullptr) {
				throw gcnew Exception("Выберите факультет для удаление!");
			}
			//Реализация!
			list_groups = bd->FillListView(list[this->TreeViewFaculty->SelectedNode->Index]->TitleFaculty);
			for (size_t i = 0; i < list_groups->Count; i++)
			{
				bd->Update(1, list_groups[i]->TitleGroup);
				bd->Delete(list_groups[i]->TitleGroup);
			}
			bd->Delete(list[this->TreeViewFaculty->SelectedNode->Index]);
			bd->Reload(list, TreeViewFaculty);
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}
	}
	//Обновление TreeView
	private: System::Void ButtonUpdateForm_Click(System::Object^ sender, System::EventArgs^ e) {
		bd = gcnew BaseData();
		bd->Reload(list, TreeViewFaculty);
	}
	//Добавление Группы/Студента
	private: System::Void ButtonCreatePanel_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!

			//Реализация!
			if (LevelTreeView == GroupLevel) {
				CreatePanel^ Create = gcnew CreatePanel(this->TreeViewFaculty->SelectedNode->Index);
				Create->Show();
			}
			else if (LevelTreeView == StudentLevel) {
				//Находим студентов с этим названием группы
				list_groups = bd->FillListView(PathGroup[GroupLevel]);
				for (size_t i = 0; i < list_groups->Count; i++)
				{
					if (list_groups[i]->TitleGroup == PathGroup[StudentLevel]) {
						AddStudent^ Add = gcnew AddStudent(list_groups[i]);
						Add->Show();
					}
				}
			}
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: Выберите элемент TreeView!", "Ошибка", MessageBoxButtons::OK);
		}
	}
	//Изменение Группы/Студента
	private: System::Void ButtonUpdatePanel_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!
			if (ListViewPanel->FocusedItem == nullptr) {
				if (LevelTreeView == GroupLevel)
					throw gcnew Exception("Выберите группу для изменения!");
				else if (LevelTreeView == StudentLevel)
					throw gcnew Exception("Выберите студента для изменения!");
			}

			//Реализация!
			if (LevelTreeView == GroupLevel) {
				list_groups = bd->FillListView(PathGroup[GroupLevel]);
				for (size_t i = 0; i < list_groups->Count; i++) {
					if (list_groups[i]->TitleGroup == ListViewPanel->FocusedItem->SubItems[1]->Text) {
						UpdatePanel^ UpdateGroup = gcnew StudentCardVelial::UpdatePanel(list_groups[i]);
						UpdateGroup->Show();
					}
				}
			}
			else if (LevelTreeView == StudentLevel) {
				UpdateStudentCard^ UpdateStudent = gcnew UpdateStudentCard(list_students[ListViewPanel->FocusedItem->Index], PathGroup);
				UpdateStudent->Show();
				Console::WriteLine("lol");
				
			}
			else {
				throw gcnew Exception("Выберите элемент TreeView!");
			}
		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}
	}
	//Обновление ListView
	private: System::Void ButtonUpdateListViewPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		if(LevelTreeView == GroupLevel)
			bd->Reload(list_groups, ListViewPanel, list[this->TreeViewFaculty->SelectedNode->Index]->TitleFaculty);
		else if(LevelTreeView == StudentLevel)
			bd->Reload(list_students, ListViewPanel, PathGroup[1]);
		else MessageBox::Show("Решение: Выберите ветвь TreeView", "Ошибка", MessageBoxButtons::OK);
	}
	//Удалание Группы/Студента
	private: System::Void ButtonDeletePanel_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			//Проверка!
			if (ListViewPanel->FocusedItem == nullptr) {
				if (LevelTreeView == GroupLevel)
					throw gcnew Exception("Выберите группу для удаления!");
				else if (LevelTreeView == StudentLevel)
					throw gcnew Exception("Выберите студента для исключения из группы!");
			}
			
			//Реализация!
			if (LevelTreeView == GroupLevel) {
				String^ TitleGroupSelectedItem = ListViewPanel->FocusedItem->SubItems[1]->Text;
				bd->Update(1, TitleGroupSelectedItem);
				bd->Delete(TitleGroupSelectedItem);
				bd->Reload(list_groups, ListViewPanel, list[this->TreeViewFaculty->SelectedNode->Index]->TitleFaculty);
				bd->Reload(list, TreeViewFaculty);
				for (int i = 0; i < list->Count; i++) {
					if (list[i]->TitleFaculty == PathGroup[0]) TreeViewFaculty->SelectedNode = TreeViewFaculty->Nodes[i];
				}
			}
			else if (LevelTreeView == StudentLevel) {
				//Console::WriteLine(list_students[ListViewPanel->FocusedItem->Index]->ID);
				list_students[ListViewPanel->FocusedItem->Index]->Entrant = 1;
				list_students[ListViewPanel->FocusedItem->Index]->Title_Group = PathGroup[GroupLevel];
				bd->Update(list_students[ListViewPanel->FocusedItem->Index]);
				bd->Reload(list_students, ListViewPanel, PathGroup[1]);
			}
			else {
				throw gcnew Exception("Выберите элемент TreeView!");
			}

		}
		catch (Exception^ e) {
			//Ошибка
			MessageBox::Show("Решение: " + Convert::ToString(e->Message), "Ошибка", MessageBoxButtons::OK);
		}
	}
	//Определние элемента для открытия Panel
	private: System::Void TreeViewFaculty_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
		//Console::WriteLine("{0}", e->Node->FullPath);
		//Console::WriteLine("{0}", e->Node->Index);
		//Console::WriteLine("{0}", e->Node->Level);

		//Включение Панели факультета
		PanelMainForm->Visible = true;
		//Определение пути/уровня
		LabelPathPanel->Text = e->Node->FullPath;
		LevelTreeView = e->Node->Level;

		//Разбиение на уровни
		PathGroup = gcnew array<String^>(e->Node->Level + 1);
		PathGroup = e->Node->FullPath->Split('\\');
		for (size_t i = 0; i < e->Node->Level + 1; i++)
			Console::WriteLine("{0} ", PathGroup[i]);

		//Реализация!
		if (e->Node->Level == GroupLevel) {
			PanelStudenet->Visible = false;
			//Добавление полей
			LabelTitlePanel->Text = "Название факультета:";
			TextBoxTitlePanel->Text = list[e->Node->Index]->TitleFaculty;
			LabelNamePanel->Text = "Декан:";
			TextBoxNamePanel->Text = list[e->Node->Index]->NameDekan;

			//Добавление столбцев
			ListViewPanel->Columns->Clear();
			ListViewPanel->Columns->Add("#", 21, HorizontalAlignment::Center);
			ListViewPanel->Columns->Add("Название группы", 180, HorizontalAlignment::Center);
			ListViewPanel->Columns->Add("Имя куратора", 175, HorizontalAlignment::Center);

			list_groups = gcnew List<Group^>();
			list_groups = bd->FillListView(list[e->Node->Index]->TitleFaculty);
			bd->Reload(list_groups, ListViewPanel, list[e->Node->Index]->TitleFaculty);
		}
		else if (e->Node->Level == StudentLevel) {
			PanelStudenet->Visible = true;
			list_groups = bd->FillListView(PathGroup[GroupLevel]);
			
			//Добавление полей
			LabelTitlePanel->Text = "Название группы:";
			TextBoxTitlePanel->Text = list_groups[e->Node->Index]->TitleGroup;
			LabelNamePanel->Text = "Куратор:";
			TextBoxNamePanel->Text = list_groups[e->Node->Index]->NameKurator;
			LabelNameMonitor->Text = "ФИО старосты:";
			TextBoxNameMonitor->Text = list_groups[e->Node->Index]->NameMonitor;
			LabelNumberKurc->Text = "Курс:";
			TextBoxNumberKurc->Text = Convert::ToString(list_groups[e->Node->Index]->NumberKurc);

			//Добавление столбцев
			ListViewPanel->Columns->Clear();
			ListViewPanel->Columns->Add("#", 21, HorizontalAlignment::Center);
			ListViewPanel->Columns->Add("Имя", 115, HorizontalAlignment::Center);
			ListViewPanel->Columns->Add("Фамилия", 120, HorizontalAlignment::Center);
			ListViewPanel->Columns->Add("Отчество", 120, HorizontalAlignment::Center);

			list_students = gcnew List<Student^>();
			list_students = bd->FillListViewStudent(PathGroup[1]);
			bd->Reload(list_students, ListViewPanel, PathGroup[1]);
		}
		else {
			MessageBox::Show("Решение: Выберите ветвь TreeView", "Ошибка", MessageBoxButtons::OK);
		}
	}
	//Добавления абитуриента
	private: System::Void ButtonCreateStudentBD_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateStudent^ Create = gcnew CreateStudent();
		Create->Show();
	}
	//Просмотр профиля студента
	private: System::Void ListViewPanel_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//Console::WriteLine("{0}", ListViewPanel->FocusedItem->Index);
		ViewStudentCard^ Student = gcnew ViewStudentCard(ListViewPanel->FocusedItem->Index, PathGroup);
		Student->Show();
	}
	//Обновление TreeView при активации
	private: System::Void FacultyForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		//Реализация!
		bd = gcnew BaseData();
		list = bd->FillBaseData();
		//Проверка!
		if (list->Count != 0) {
			bd->Reload(list, TreeViewFaculty);
			for (int i = 0; i < list->Count; i++) {
				if (PathGroup != nullptr) {
					if (list[i]->TitleFaculty == PathGroup[GroupLevel]) {
						Console::WriteLine("Путь: " + LevelTreeView);
						Console::WriteLine("Размер: " + PathGroup->Length);
						if (LevelTreeView == GroupLevel)
							TreeViewFaculty->SelectedNode = TreeViewFaculty->Nodes[i];
						else if (LevelTreeView == StudentLevel) {
							list_groups = bd->FillListView(list[i]->TitleFaculty);
							for (int j = 0; j < list_groups->Count; j++)
							{
								if (list[i]->TitleFaculty == PathGroup[GroupLevel]) {
									TreeViewFaculty->SelectedNode = TreeViewFaculty->Nodes[i]->Nodes[j];
									break;
								}
							}
						}
						break;
					}
				}
			}
		}
	}
};
}
