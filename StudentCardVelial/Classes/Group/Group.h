#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

ref class Group
{
private:
	int id;
	String^ TitleFaculty_;
	String^ TitleGroup_;
	String^ NameKurator_;
	String^ Specialization_;
	String^ NameMonitor_;
	int NumberKurc_;

public:
	Group()
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
	property String^ TitleGroup {
		String^ get() {
			return TitleGroup_;
		}
		void set(String^ value) {
			TitleGroup_ = value;
		}
	}
	property String^ NameKurator {
		String^ get() {
			return NameKurator_;
		}
		void set(String^ value) {
			NameKurator_ = value;
		}
	}
	property String^ NameMonitor {
		String^ get() {
			return NameMonitor_;
		}
		void set(String^ value) {
			NameMonitor_ = value;
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
	property int NumberKurc {
		int get() {
			return NumberKurc_;
		}
		void set(int value) {
			NumberKurc_ = value;
		}
	}
};

