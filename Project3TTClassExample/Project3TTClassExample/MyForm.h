#pragma once

#include "Person.h"	//include the header file that contains our class

namespace Project3TTClassExample {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonSubmit;
	private: System::Windows::Forms::TextBox^  textBoxFirstName;
	private: System::Windows::Forms::TextBox^  textBoxAge;
	private: System::Windows::Forms::TextBox^  textBoxMiddleName;
	private: System::Windows::Forms::TextBox^  textBoxLastName;
	private: System::Windows::Forms::Label^  labelFirstName;
	private: System::Windows::Forms::Label^  labelMiddleName;
	private: System::Windows::Forms::Label^  labelLastName;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonSubmit = (gcnew System::Windows::Forms::Button());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAge = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMiddleName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->labelMiddleName = (gcnew System::Windows::Forms::Label());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonSubmit
			// 
			this->buttonSubmit->Location = System::Drawing::Point(35, 401);
			this->buttonSubmit->Name = L"buttonSubmit";
			this->buttonSubmit->Size = System::Drawing::Size(75, 23);
			this->buttonSubmit->TabIndex = 0;
			this->buttonSubmit->Text = L"Submit";
			this->buttonSubmit->UseVisualStyleBackColor = true;
			this->buttonSubmit->Click += gcnew System::EventHandler(this, &MyForm::buttonSubmit_Click);
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(35, 48);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(148, 20);
			this->textBoxFirstName->TabIndex = 1;
			// 
			// textBoxAge
			// 
			this->textBoxAge->Location = System::Drawing::Point(35, 113);
			this->textBoxAge->Name = L"textBoxAge";
			this->textBoxAge->Size = System::Drawing::Size(100, 20);
			this->textBoxAge->TabIndex = 2;
			// 
			// textBoxMiddleName
			// 
			this->textBoxMiddleName->Location = System::Drawing::Point(208, 48);
			this->textBoxMiddleName->Name = L"textBoxMiddleName";
			this->textBoxMiddleName->Size = System::Drawing::Size(148, 20);
			this->textBoxMiddleName->TabIndex = 4;
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(381, 48);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(148, 20);
			this->textBoxLastName->TabIndex = 5;
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(32, 29);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(60, 13);
			this->labelFirstName->TabIndex = 6;
			this->labelFirstName->Text = L"First Name:";
			// 
			// labelMiddleName
			// 
			this->labelMiddleName->AutoSize = true;
			this->labelMiddleName->Location = System::Drawing::Point(205, 29);
			this->labelMiddleName->Name = L"labelMiddleName";
			this->labelMiddleName->Size = System::Drawing::Size(69, 13);
			this->labelMiddleName->TabIndex = 7;
			this->labelMiddleName->Text = L"Middle Name";
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(378, 29);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(61, 13);
			this->labelLastName->TabIndex = 8;
			this->labelLastName->Text = L"Last Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Age:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(582, 48);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(341, 402);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(35, 160);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 20);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(296, 160);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(207, 20);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(35, 204);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(255, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(296, 204);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(381, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Update Name";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(152, 110);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 23);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Update Age";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(402, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 23);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Update Address";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 475);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelLastName);
			this->Controls->Add(this->labelMiddleName);
			this->Controls->Add(this->labelFirstName);
			this->Controls->Add(this->textBoxLastName);
			this->Controls->Add(this->textBoxMiddleName);
			this->Controls->Add(this->textBoxAge);
			this->Controls->Add(this->textBoxFirstName);
			this->Controls->Add(this->buttonSubmit);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSubmit_Click(System::Object^  sender, System::EventArgs^  e) {

		Person^ person = gcnew Person();

	}
	
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
