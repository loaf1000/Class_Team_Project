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
			this->SuspendLayout();
			// 
			// buttonSubmit
			// 
			this->buttonSubmit->Location = System::Drawing::Point(67, 391);
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
			this->textBoxAge->Location = System::Drawing::Point(35, 143);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 475);
			this->Controls->Add(this->textBoxLastName);
			this->Controls->Add(this->textBoxMiddleName);
			this->Controls->Add(this->textBoxAge);
			this->Controls->Add(this->textBoxFirstName);
			this->Controls->Add(this->buttonSubmit);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonSubmit_Click(System::Object^  sender, System::EventArgs^  e) {

		Person^ person = gcnew Person();

	}
	
	};
}
