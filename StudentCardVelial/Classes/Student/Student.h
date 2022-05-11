#pragma once

#include "../Person/Person.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

ref class Student : Person
{
private:
	int Entrant_;
	String^ TitleFaculty_;
	String^ TitleGroup_;
	int PointEGE_;
	int Stipendiya_;
	String^ YearEnrollment_;
	String^ Specialization_;
	String^ Educational_Form_;
	int Number_Kurc_;
	double Otcenka_;

public:
	Student()
	{}
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
	property double Otcenka {
		double get() {
			return Otcenka_;
		}
		void set(double value) {
			Otcenka_ = value;
		}
	}
};

