#pragma once

#include "../Classes/Faculty/Faculty.h"
#include "../Classes/Group/Group.h"
#include "../Classes/Student/Student.h"
#include "../Classes/User/User.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class BaseData
{
private:
	SqlConnection^ conn;
	SqlConnectionStringBuilder^ connStringBuilder;

private:
	//Подключение в базе данных MC Sql Server
	void ConnectToBD() {
		//Data Source=LAPTOP-N0SDJAIT\SQLEXPRESS;Initial Catalog=StudentCard;Integrated Security=True
		
		connStringBuilder = gcnew SqlConnectionStringBuilder();
		connStringBuilder->DataSource = "LAPTOP-N0SDJAIT\\SQLEXPRESS";
		connStringBuilder->InitialCatalog = "StudentCard";
		connStringBuilder->IntegratedSecurity = true;

		conn = gcnew SqlConnection(Convert::ToString(connStringBuilder));
	}
public:
	BaseData()
	{}
	//FACULTY
	//----------------------------------------
	void Insert(String^ TitleFaculty, String^ NameDekan) {
		try {
			//Подключение в БД
			ConnectToBD();

			String^ cmdText = "INSERT INTO dbo.TABLE_FACULTIES(Title_Faculty, Name_Dekan) VALUES(@TitleFaculty, @NameDekan)";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			cmd->Parameters->AddWithValue("@TitleFaculty", TitleFaculty);
			cmd->Parameters->AddWithValue("@NameDekan", NameDekan);
			conn->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При добавлении элемента в БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}

	}
	List<Faculty^>^ FillBaseData() {
		try {
			//Подключение в БД
			ConnectToBD();

			List<Faculty^>^ list = gcnew List<Faculty^>();

			String^ cmdText = "SELECT * FROM dbo.TABLE_FACULTIES";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			conn->Open();

			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				Faculty^ facl = gcnew Faculty();
				facl->ID = Convert::ToInt32(reader["ID"]->ToString());
				facl->TitleFaculty = (reader["Title_Faculty"]->ToString());
				facl->NameDekan = (reader["Name_Dekan"]->ToString());
				list->Add(facl);
			}
			return list;
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При чтении элементов из БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	ListBox::ObjectCollection^ FillComboBox() {
		try {
			//Подключение в БД
			ConnectToBD();

			//List<Faculty^>^ list = gcnew List<Faculty^>();
			ListBox^ list = gcnew ListBox();


			String^ cmdText = "SELECT * FROM dbo.TABLE_FACULTIES";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			conn->Open();

			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				Faculty^ facl = gcnew Faculty();
				facl->ID = Convert::ToInt32(reader["ID"]->ToString());
				facl->TitleFaculty = (reader["Title_Faculty"]->ToString());
				//list->Add(facl);
				list->Items->Add(String::Format("{0}", facl->TitleFaculty));
			}
			return list->Items;
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При чтении элементов из БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	void Reload(List<Faculty^>^% list, List<Group^>^ list_groups, TreeView^ TreeViewFaculty) {
		//bd->Reload(list, bd, treeViewFaculty);
		//BaseData^ bd = gcnew BaseData();
		list = FillBaseData();
		//list_groups = FillListView(String ^ NameFaculty);

		TreeViewFaculty->Nodes->Clear();
		for (int i = 0; i < list->Count; i++) {
			list_groups = FillListView(list[i]->TitleFaculty);
			Console::WriteLine("{0} {1}", list[i]->ID, list[i]->TitleFaculty);
			System::Windows::Forms::TreeNode^ newTreeNode = (gcnew System::Windows::Forms::TreeNode(list[i]->TitleFaculty));
			newTreeNode->Name = list[i]->TitleFaculty;
			newTreeNode->Text = list[i]->TitleFaculty;
			for (int j = 0; j < list_groups->Count; j++)
			{
				System::Windows::Forms::TreeNode^ newTreeSubNode = (gcnew System::Windows::Forms::TreeNode(Convert::ToString(list_groups[j]->TitleGroup)));
				//newTreeSubNode->Name = L"Узел5";
				//newTreeSubNode->Text = L"бИСТ-214";
				newTreeNode->Nodes->Add(newTreeSubNode);
			}
			TreeViewFaculty->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { newTreeNode });
		}

	}
	void Delete(Faculty^ f) {
		try {
			//Подключение в БД
			ConnectToBD();

			String^ cmdText = "DELETE FROM dbo.TABLE_FACULTIES WHERE ID = @ID";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			cmd->Parameters->AddWithValue("@ID", f->ID);
			conn->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При удалении элемента в БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	void Update(Faculty^ f, int ID) {
		try {
			//Подключение в БД
			ConnectToBD();

			String^ cmdText = "UPDATE dbo.TABLE_FACULTIES SET Title_Faculty = @TitleFaculty, Name_Dekan = @NameDekan WHERE ID = @ID";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			cmd->Parameters->AddWithValue("@TitleFaculty", f->TitleFaculty);
			cmd->Parameters->AddWithValue("@NameDekan", f->NameDekan);
			cmd->Parameters->AddWithValue("@ID", ID);

			conn->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При обновлении элемента в БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	//----------------------------------------
	
	//GROUP
	//----------------------------------------
	void Insert(String^ TitleGroup, String^ TitleFaculty, String^ NameKurator, String^ NameMonitor, String^ NumberKurc, String^ Specialization) {
		try {
			//Подключение в БД
			ConnectToBD();

			String^ cmdText = "INSERT INTO dbo.TABLE_GROUPS(Title_Group, Title_Faculty, Name_Kurator, Name_Monitor, Number_Kurc, Specialization) VALUES(@Title_Group, @Title_Faculty, @Name_Kurator, @Name_Monitor, @Number_Kurc, @Specialization)";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			cmd->Parameters->AddWithValue("@Title_Group", TitleGroup);
			cmd->Parameters->AddWithValue("@Title_Faculty", TitleFaculty);
			cmd->Parameters->AddWithValue("@Name_Kurator", NameKurator);
			cmd->Parameters->AddWithValue("@Name_Monitor", NameMonitor);
			cmd->Parameters->AddWithValue("@Number_Kurc", NumberKurc);
			cmd->Parameters->AddWithValue("@Specialization", Specialization);

			conn->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При добавлении элемента в БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	List<Group^>^ FillListView(String^ NameFaculty) {
		try {
			//Подключение в БД
			ConnectToBD();

			List<Group^>^ list = gcnew List<Group^>();

			String^ cmdText = "SELECT * FROM dbo.TABLE_GROUPS WHERE Title_Faculty = @Title";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			cmd->Parameters->AddWithValue("@Title", NameFaculty);
			conn->Open();

			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				Group^ group = gcnew Group();
				group->ID = Convert::ToInt32(reader["ID"]->ToString());
				group->TitleGroup = (reader["Title_Group"]->ToString());
				group->TitleFaculty = (reader["Title_Faculty"]->ToString());
				group->NameKurator = (reader["Name_Kurator"]->ToString());
				group->NameMonitor = (reader["Name_Monitor"]->ToString());
				group->Specialization = (reader["Specialization"]->ToString());
				//group->NumberKurc = Convert::ToInt32(reader["ID"]->ToString());
				group->NumberKurc = Convert::ToInt32(reader["Number_Kurc"]->ToString());

				list->Add(group);
			}
			return list;
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При чтении элементов из БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	void Reload(List<Group^>^% list_groups, ListView^ ListViewPanel, String^ NameFaculty) {
		list_groups = FillListView(NameFaculty);
		ListViewPanel->Items->Clear();
		for (int i = 0; i < list_groups->Count; i++) {
			Console::WriteLine("{0} {1} {2}", list_groups[i]->ID, list_groups[i]->TitleGroup, list_groups[i]->TitleFaculty);
			ListViewItem^ newItem = gcnew ListViewItem(Convert::ToString(i + 1));
			ListViewItem::ListViewSubItem^ TitleGroup = gcnew ListViewItem::ListViewSubItem(newItem, list_groups[i]->TitleGroup);
			ListViewItem::ListViewSubItem^ NameKurator = gcnew ListViewItem::ListViewSubItem(newItem, list_groups[i]->NameKurator);
			newItem->SubItems->Add(TitleGroup);
			newItem->SubItems->Add(NameKurator);
			ListViewPanel->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { newItem });
		}
	}
	void Delete(String^ TitleGroup) {
		try {
			//Подключение в БД
			ConnectToBD();

			String^ cmdText = "DELETE FROM dbo.TABLE_GROUPS WHERE Title_Group = @TitleGroup";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			cmd->Parameters->AddWithValue("@TitleGroup", TitleGroup);
			conn->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При удалении элемента в БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	void Update(Group^ g, int ID) {
		try {
			//Подключение в БД
			ConnectToBD();

			String^ cmdText = "UPDATE dbo.TABLE_GROUPS SET Title_Group = @TitleGroup, Title_Faculty = @TitleFaculty, Name_Kurator = @NameKurator, Name_Monitor = @NameMonitor, Number_Kurc = @NumberKurc, Specialization = @Specialization WHERE ID = @ID";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			cmd->Parameters->AddWithValue("@TitleGroup", g->TitleGroup);
			cmd->Parameters->AddWithValue("@TitleFaculty", g->TitleFaculty);
			cmd->Parameters->AddWithValue("@NameKurator", g->NameKurator);
			cmd->Parameters->AddWithValue("@NameMonitor", g->NameMonitor);
			cmd->Parameters->AddWithValue("@NumberKurc", g->NumberKurc);
			cmd->Parameters->AddWithValue("@Specialization", g->Specialization);
			cmd->Parameters->AddWithValue("@ID", ID);

			conn->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При обновлении элемента в БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	//----------------------------------------
	//STUDENT
	//----------------------------------------
	void Insert(Student^ s) {
		try {
			//Подключение в БД
			ConnectToBD();

			String^ cmdText = "INSERT INTO dbo.TABLE_STUDENTS(Name, Surname, Middlename, Entrant, Title_Group, Birthday, Point_EGE, Stipendiya, Year_Enrollment, Photo_Student, Specialization, Educational_Form, Number_Kurc, Phone_Number, Mail, Otcenka) VALUES(@Name, @Surname, @Middlename, @Entrant, @Title_Group, @Birthday, @Point_EGE, @Stipendiya, @Year_Enrollment, @Photo_Student, @Specialization, @Educational_Form, @Number_Kurc, @Phone_Number, @Mail, @Otcenka)";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			cmd->Parameters->AddWithValue("@Name", s->Name);
			cmd->Parameters->AddWithValue("@Surname", s->Surname);
			cmd->Parameters->AddWithValue("@Middlename", s->Middlename);
			cmd->Parameters->AddWithValue("@Entrant", 1);
			cmd->Parameters->AddWithValue("@Title_Group", "");
			cmd->Parameters->AddWithValue("@Stipendiya", 0);
			cmd->Parameters->AddWithValue("@Birthday", s->Birthday);
			cmd->Parameters->AddWithValue("@Point_EGE", s->Point_EGE);
			cmd->Parameters->AddWithValue("@Year_Enrollment", "");
			cmd->Parameters->AddWithValue("@Photo_Student", s->Photo_Student);
			cmd->Parameters->AddWithValue("@Specialization", "");
			cmd->Parameters->AddWithValue("@Educational_Form", s->Educational_Form);
			cmd->Parameters->AddWithValue("@Number_Kurc", "");
			cmd->Parameters->AddWithValue("@Phone_Number", s->Phone_Number);
			cmd->Parameters->AddWithValue("@Mail", s->Mail);
			cmd->Parameters->AddWithValue("@Otcenka", 0);

			conn->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При добавлении элемента в БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	List<Student^>^ FillListViewStudent(String^ NameGroup) {
		try {
			//Подключение в БД
			ConnectToBD();

			List<Student^>^ list = gcnew List<Student^>();

			String^ cmdText = "SELECT * FROM dbo.TABLE_STUDENTS WHERE Title_Group = @Title";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			cmd->Parameters->AddWithValue("@Title", NameGroup);
			conn->Open();

			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				if (Convert::ToInt32(reader["Entrant"]) == 0) {
					Student^ student = gcnew Student();
					student->ID = Convert::ToInt32(reader["ID"]->ToString());
					student->Name = (reader["Name"]->ToString());
					student->Surname = (reader["Surname"]->ToString());
					student->Middlename = (reader["Middlename"]->ToString());
					student->Entrant = Convert::ToInt32(reader["Entrant"]);
					student->Title_Group = (reader["Title_Group"]->ToString());
					student->Birthday = (reader["Birthday"]->ToString());
					student->Point_EGE = Convert::ToInt32(reader["Point_EGE"]->ToString());
					student->Stipendiya = Convert::ToInt32(reader["Stipendiya"]->ToString());
					student->Year_Enrollment = (reader["Year_Enrollment"]->ToString());
					student->Photo_Student = (reader["Photo_Student"]->ToString());
					student->Specialization = (reader["Specialization"]->ToString());
					student->Educational_Form = (reader["Educational_Form"]->ToString());
					student->Number_Kurc = Convert::ToInt32(reader["Number_Kurc"]->ToString());
					student->Phone_Number = (reader["Phone_Number"]->ToString());
					student->Mail = (reader["Mail"]->ToString());
					student->Otcenka = Convert::ToInt32(reader["Otcenka"]->ToString());
			
					list->Add(student);
				}
			}
			return list;
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При чтении элементов из БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	List<Student^>^ FillCheckedListBoxStudent() {
		try {
			//Подключение в БД
			ConnectToBD();

			List<Student^>^ list = gcnew List<Student^>();

			String^ cmdText = "SELECT * FROM dbo.TABLE_STUDENTS WHERE Entrant = @Yes";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			cmd->Parameters->AddWithValue("@Yes", 1);
			conn->Open();

			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				Student^ student = gcnew Student();
				student->ID = Convert::ToInt32(reader["ID"]->ToString());
				student->Name = (reader["Name"]->ToString());
				student->Surname = (reader["Surname"]->ToString());
				student->Middlename = (reader["Middlename"]->ToString());
				student->Entrant = Convert::ToInt32(reader["Entrant"]->ToString());
				student->Title_Group = (reader["Title_Group"]->ToString());
				student->Birthday = (reader["Birthday"]->ToString());
				student->Point_EGE = Convert::ToInt32(reader["Point_EGE"]->ToString());
				student->Stipendiya = Convert::ToInt32(reader["Stipendiya"]->ToString());
				student->Year_Enrollment = (reader["Year_Enrollment"]->ToString());
				list->Add(student);
			}
			Console::WriteLine("Все круто!");
			return list;
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При чтении элементов из БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	void Reload(List<Student^>^% list_student, ListView^ ListViewPanel, String^ NameGroup) {
		list_student = FillListViewStudent(NameGroup);
		//list_groups = bd->FillListView();
		ListViewPanel->Items->Clear();
		for (int i = 0; i < list_student->Count; i++) {
			//Console::WriteLine("{0} {1} {2}", list_student[i]->ID, list_student[i]->TitleGroup, list_student[i]->TitleFaculty);
			ListViewItem^ newItem = gcnew ListViewItem(Convert::ToString(i + 1));
			ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem(newItem, list_student[i]->Name);
			ListViewItem::ListViewSubItem^ Surname = gcnew ListViewItem::ListViewSubItem(newItem, list_student[i]->Surname);
			ListViewItem::ListViewSubItem^ Middlename = gcnew ListViewItem::ListViewSubItem(newItem, list_student[i]->Middlename);
			newItem->SubItems->Add(Name);
			newItem->SubItems->Add(Surname);
			newItem->SubItems->Add(Middlename);
			ListViewPanel->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { newItem });
		}
	}
	void Reload(List<Student^>^% list_student, CheckedListBox^ CheckedListBoxStudent) {
		list_student = FillCheckedListBoxStudent();
		//Добавить столбец балл ЕГЭ с сортировкой
		CheckedListBoxStudent->Items->Clear();
		for (size_t i = 0; i < list_student->Count; i++)
		{
			CheckedListBoxStudent->Items->AddRange(gcnew cli::array< System::Object^  >(1) { Convert::ToString(list_student[i]->Surname) });
		}
	}
	void Delete(int ID) {
		try {
			//Подключение в БД
			ConnectToBD();

			String^ cmdText = "DELETE FROM dbo.TABLE_STUDENTS WHERE ID = @ID";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			cmd->Parameters->AddWithValue("@ID", ID);
			conn->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При удалении элемента в БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	void Update(Student^ s) {
		try {
			//Подключение в БД
			ConnectToBD();

			String^ cmdText = "UPDATE dbo.TABLE_STUDENTS SET Entrant = @Entrant, Title_Group = @Title_Group, Specialization = @Specialization, Number_Kurc = @Number_Kurc WHERE ID = @ID";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			cmd->Parameters->AddWithValue("@ID", s->ID);
			cmd->Parameters->AddWithValue("@Entrant", s->Entrant);
			cmd->Parameters->AddWithValue("@Title_Group", s->Title_Group);
			cmd->Parameters->AddWithValue("@Specialization", s->Specialization);
			cmd->Parameters->AddWithValue("@Number_Kurc", s->Number_Kurc);

			conn->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При обновлении элемента в БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	void Update(int Entrant, String^ PathGroup) {
		try {
			//Подключение в БД
			ConnectToBD();

			String^ cmdText = "UPDATE dbo.TABLE_STUDENTS SET Entrant = @Entrant WHERE Title_Group = @Title_Group";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			//cmd->Parameters->AddWithValue("@ID", ID);
			cmd->Parameters->AddWithValue("@Entrant", Entrant);
			cmd->Parameters->AddWithValue("@Title_Group", PathGroup);

			conn->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При обновлении элемента в БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	//----------------------------------------
	//AUTORIZATION
	//----------------------------------------
	int SignOn(String^ Login, String^ Password) {
		try {
			//Подключение в БД
			ConnectToBD();

		//List<Faculty^>^ list = gcnew List<Faculty^>();
			//enum
			int isAdmin = 0;

			String^ cmdText = "SELECT * FROM dbo.TABLE_USERS";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			conn->Open();

			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				if (Login == reader["Login"]->ToString() && Password == reader["Password"]->ToString() && "User      " == reader["Type"]->ToString()) {
					MessageBox::Show("Верный логин и пароль!");
					return isAdmin = 1;
				}
				if (Login == "admin" && Password == "lox" && "Admin     " == reader["Type"]->ToString()) {
					MessageBox::Show("Ты админ!");
					return isAdmin = 2;
				}
			}
			if (!isAdmin)
				MessageBox::Show("Неверный логин или пароль!");
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			
			else MessageBox::Show("Ошибка: При чтении элементов из БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	void SignIn(String^ Login, String^ Password) {
		try {
			//Подключение в БД
			ConnectToBD();

			String^ cmdText = "INSERT INTO dbo.TABLE_USERS(Login, Password, Type) VALUES(@Login, @Password, @Type)";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			cmd->Parameters->AddWithValue("@Login", Login);
			cmd->Parameters->AddWithValue("@Password", Password);
			cmd->Parameters->AddWithValue("@Type", "User");
			conn->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При добавлении элемента в БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			MessageBox::Show("Вы успешно зарегистрировались!");
		}
		//try
	}
	List<User^>^ FillListViewUsers() {
		try {
			//Подключение в БД
			ConnectToBD();

			List<User^>^ list = gcnew List<User^>();

			String^ cmdText = "SELECT * FROM dbo.TABLE_USERS WHERE Type = @Type";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);
			cmd->Parameters->AddWithValue("@Type", "User      ");
			conn->Open();

			SqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
			
				User^ user = gcnew User();
				user->ID = Convert::ToInt32(reader["ID"]->ToString());
				user->Login = (reader["Login"]->ToString());
				user->Password = (reader["Password"]->ToString());

				list->Add(user);
			}
			return list;
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При чтении элементов из БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	void Reload(List<User^>^% list_user, ListView^ ListViewPanel) {
		list_user = FillListViewUsers();
		ListViewPanel->FullRowSelect = true;
		ListViewPanel->Items->Clear();
		for (int i = 0; i < list_user->Count; i++) {
			ListViewItem^ newItem = gcnew ListViewItem(Convert::ToString(i + 1));
			ListViewItem::ListViewSubItem^ Login = gcnew ListViewItem::ListViewSubItem(newItem, list_user[i]->Login);
			ListViewItem::ListViewSubItem^ Password = gcnew ListViewItem::ListViewSubItem(newItem, list_user[i]->Password);
			newItem->SubItems->Add(Login);
			newItem->SubItems->Add(Password);
			ListViewPanel->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { newItem });
		}
	}
	void Delete(int ID, ListView^ ListViewPanel) {
		try {
			//Подключение в БД
			ConnectToBD();

			String^ cmdText = "DELETE FROM dbo.TABLE_USERS WHERE ID = @ID";
			SqlCommand^ cmd = gcnew SqlCommand(cmdText, conn);

			cmd->Parameters->AddWithValue("@ID", ID);
			conn->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (conn != nullptr)
				conn->Close();
			else MessageBox::Show("Ошибка: При удалении элемента в БД!", "Help", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	//----------------------------------------
};

