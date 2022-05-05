#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

ref class Admin
{
private:
	int id;
	String^ Name_;
	String^ Surname_;
	String^ Patronymic_;
	String^ Birthday_;
	String^ Dolzhnost_;
	int Stazh_;
	int Zarplata_;
	String^ Photo_;
	String^ MobilePhone_;
	String^ Mail_;
	String^ Login_;
	String^ Password_;
public:
	Admin()
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
	property String^ Patronymic {
		String^ get() {
			return Patronymic_;
		}
		void set(String^ value) {
			Patronymic_ = value;
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
	property String^ Photo {
		String^ get() {
			return Photo_;
		}
		void set(String^ value) {
			Photo_ = value;
		}
	}
	property String^ Mobile_Phone {
		String^ get() {
			return MobilePhone_;
		}
		void set(String^ value) {
			MobilePhone_ = value;
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

