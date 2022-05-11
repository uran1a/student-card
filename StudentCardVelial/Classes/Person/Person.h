#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

ref class Person
{
private:
	int ID_;
	String^ Name_;
	String^ Surname_;
	String^ Middlename_;
	String^ Birthday_;
	String^ Photo_;
	String^ Phone_Number_;
	String^ Mail_;
	String^ Login_;
	String^ Password_;
public:
	Person()
	{}
	property int ID {
		int get() {
			return ID_;
		}
		void set(int value) {
			ID_ = value;
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
	property String^ Birthday {
		String^ get() {
			return Birthday_;
		}
		void set(String^ value) {
			Birthday_ = value;
		}
	}
	property String^ Photo {
		String^ get() {
			return Photo_;
		}
		void set(String^ value) {
			Photo_ = value;
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

