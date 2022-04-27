#pragma once

namespace StudentCardVelial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ViewStudentCard
	/// </summary>
	public ref class ViewStudentCard : public System::Windows::Forms::Form
	{
	public:
		ViewStudentCard(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ViewStudentCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 209);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F));
			this->label1->Location = System::Drawing::Point(219, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(316, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Забурдяев Никита Сергеевич";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(298, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(20, 20);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label2->Location = System::Drawing::Point(220, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Статус:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label3->Location = System::Drawing::Point(341, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Дата рождения:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label4->Location = System::Drawing::Point(494, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"26.09.2003";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label5->Location = System::Drawing::Point(372, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 22);
			this->label5->TabIndex = 7;
			this->label5->Text = L"ФЭМИТ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label6->Location = System::Drawing::Point(219, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 22);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Факультет:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label7->Location = System::Drawing::Point(372, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 22);
			this->label7->TabIndex = 9;
			this->label7->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label8->Location = System::Drawing::Point(219, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 22);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Курс:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label9->Location = System::Drawing::Point(372, 146);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(241, 44);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Информационные системы\r\nи технологии";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label10->Location = System::Drawing::Point(219, 146);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 22);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Направление:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Control;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label11->Location = System::Drawing::Point(372, 113);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(94, 22);
			this->label11->TabIndex = 13;
			this->label11->Text = L"бИСТ-214";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Control;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label12->Location = System::Drawing::Point(219, 113);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(74, 22);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Группа:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Control;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label13->Location = System::Drawing::Point(162, 238);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(94, 22);
			this->label13->TabIndex = 15;
			this->label13->Text = L"бИСТ-214";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Control;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label14->Location = System::Drawing::Point(9, 238);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(74, 22);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Группа:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::Control;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label15->Location = System::Drawing::Point(162, 273);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(94, 22);
			this->label15->TabIndex = 17;
			this->label15->Text = L"бИСТ-214";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Control;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label16->Location = System::Drawing::Point(9, 273);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(74, 22);
			this->label16->TabIndex = 16;
			this->label16->Text = L"Группа:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::Control;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label17->Location = System::Drawing::Point(162, 310);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(94, 22);
			this->label17->TabIndex = 19;
			this->label17->Text = L"бИСТ-214";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::Control;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			this->label18->Location = System::Drawing::Point(9, 310);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(74, 22);
			this->label18->TabIndex = 18;
			this->label18->Text = L"Группа:";
			// 
			// ViewStudentCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(709, 472);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ViewStudentCard";
			this->Text = L"ViewStudentCard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
