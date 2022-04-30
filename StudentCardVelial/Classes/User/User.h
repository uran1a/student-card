#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

ref class User
{
private:
	int id;
	String^ Login_;
	String^ Password_;
public:
	User()
	{}
	property int ID {
		int get() {
			return id;
		}
		void set(int value) {
			id = value;
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
