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
	String^ TitleFaculty_;
	String^ TitleGroup_;
	String^ Birthday_;
	int PointEGE_;
	int Stipendiya_;
	String^ YearEnrollment_;
	String^ Photo_Student_;
	String^ Specialization_;
	String^ Educational_Form_;
	int Number_Kurc_;
	String^ Phone_Number_;
	String^ Mail_;
	int Otcenka_;
	String^ Login_;
	String^ Password_;

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
	property String^ Title_Faculty {
		String^ get() {
			return TitleFaculty_;
		}
		void set(String^ value) {
			TitleFaculty_ = value;
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
	property String^ Photo_Student {
		String^ get() {
			return Photo_Student_;
		}
		void set(String^ value) {
			Photo_Student_ = value;
		}
	}
	property String^ Specialization {
		String^ get() {
			return Specialization_;
		}
		void set(String^ value) {
			Specialization_ = value;
		}
	}
	property String^ Educational_Form {
		String^ get() {
			return Educational_Form_;
		}
		void set(String^ value) {
			Educational_Form_ = value;
		}
	}
	property int Number_Kurc {
		int get() {
			return Number_Kurc_;
		}
		void set(int value) {
			Number_Kurc_ = value;
		}
	}
	property String^ Phone_Number {
		String^ get() {
			return Phone_Number_;
		}
		void set(String^ value) {
			Phone_Number_ = value;
		}
	}
	property String^ Mail {
		String^ get() {
			return Mail_;
		}
		void set(String^ value) {
			Mail_ = value;
		}
	}
	property int Otcenka {
		int get() {
			return Otcenka_;
		}
		void set(int value) {
			Otcenka_ = value;
		}
	}
	property String^ Login {
		String^ get() {
			return Login_;
		}
		void set(String^ value) {
			Login_ = value;
		}
	}
	property String^ Password {
		String^ get() {
			return Password_;
		}
		void set(String^ value) {
			Password_ = value;
		}
	}
};

