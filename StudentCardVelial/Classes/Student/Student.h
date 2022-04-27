#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

ref class Student
{
private:
	int id;
	String^ Name_;
	String^ Surname_;
	String^ Middlename_;
	int Entrant_;
	String^ TitleGroup_;
	String^ Birthday_;
	int PointEGE_;
	int Stipendiya_;
	String^ YearEnrollment_;

public:
	Student()
	{}
	property int ID {
		int get() {
			return id;
		}
		void set(int value) {
			id = value;
		}
	}
	property String^ Name {
		String^ get() {
			return Name_;
		}
		void set(String^ value) {
			Name_ = value;
		}
	}
	property String^ Surname {
		String^ get() {
			return Surname_;
		}
		void set(String^ value) {
			Surname_ = value;
		}
	}
	property String^ Middlename {
		String^ get() {
			return Middlename_;
		}
		void set(String^ value) {
			Middlename_ = value;
		}
	}
	property int Entrant {
		int get() {
			return Entrant_;
		}
		void set(int value) {
			Entrant_ = value;
		}
	}
	property String^ Title_Group {
		String^ get() {
			return TitleGroup_;
		}
		void set(String^ value) {
			TitleGroup_ = value;
		}
	}
	property String^ Birthday {
		String^ get() {
			return Birthday_;
		}
		void set(String^ value) {
			Birthday_ = value;
		}
	}
	property int Point_EGE {
		int get() {
			return PointEGE_;
		}
		void set(int value) {
			PointEGE_ = value;
		}
	}
	property int Stipendiya {
		int get() {
			return Stipendiya_;
		}
		void set(int value) {
			Stipendiya_ = value;
		}
	}
	property String^ Year_Enrollment {
		String^ get() {
			return YearEnrollment_;
		}
		void set(String^ value) {
			YearEnrollment_ = value;
		}
	}
};

