#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

ref class Faculty
{
private:
	int id;
	String^ TitleFaculty_; 
	String^ NameDekan_;
public:
	Faculty() 
	{}
	property int ID {
		int get() {
			return id;
		}
		void set(int value) {
			id = value;
		}
	}
	property String^ TitleFaculty {
		String^ get() {
			return TitleFaculty_;
		}
		void set(String^ value) {
			TitleFaculty_ = value;
		}
	}
	property String^ NameDekan {
		String^ get() {
			return NameDekan_;
		}
		void set(String^ value) {
			NameDekan_ = value;
		}
	}
};

