#pragma once

#include "../Person/Person.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

ref class Admin : Person
{
private:
	String^ Dolzhnost_;
	int Stazh_;
	int Zarplata_;
public:
	Admin()
	{}
	property String^ Dolzhnost {
		String^ get() {
			return Dolzhnost_;
		}
		void set(String^ value) {
			Dolzhnost_ = value;
		}
	}
	property int Stazh {
		int get() {
			return Stazh_;
		}
		void set(int value) {
			Stazh_ = value;
		}
	}
	property int Zarplata {
		int get() {
			return Zarplata_;
		}
		void set(int value) {
			Zarplata_ = value;
		}
	}
};

