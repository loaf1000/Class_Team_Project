#pragma once

#include "Person.h"	//include the header file that contains our class in order to have access to it.

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
	
	//wait... isn't this a class?
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
	private: System::Windows::Forms::RichTextBox^  richTextBoxEcho;
	private: System::Windows::Forms::TextBox^  textBoxStreet;
	private: System::Windows::Forms::TextBox^  textBoxCity;
	private: System::Windows::Forms::TextBox^  textBoxState;
	private: System::Windows::Forms::TextBox^  textBoxZip;





	private: System::Windows::Forms::Button^  buttonUpdateName;

	private: System::Windows::Forms::Button^  buttonUpdateAge;
	private: System::Windows::Forms::Button^  buttonUpdateAddress;


	private: System::Windows::Forms::TextBox^  textBoxNickname;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonUpdateNickname;
	private: System::Windows::Forms::TextBox^  textBoxSearch;
	private: System::Windows::Forms::Button^  buttonSearch;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;


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
			this->richTextBoxEcho = (gcnew System::Windows::Forms::RichTextBox());
			this->textBoxStreet = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCity = (gcnew System::Windows::Forms::TextBox());
			this->textBoxState = (gcnew System::Windows::Forms::TextBox());
			this->textBoxZip = (gcnew System::Windows::Forms::TextBox());
			this->buttonUpdateName = (gcnew System::Windows::Forms::Button());
			this->buttonUpdateAge = (gcnew System::Windows::Forms::Button());
			this->buttonUpdateAddress = (gcnew System::Windows::Forms::Button());
			this->textBoxNickname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonUpdateNickname = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->textBoxAge->Location = System::Drawing::Point(35, 141);
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
			this->label1->Location = System::Drawing::Point(32, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Age:";
			// 
			// richTextBoxEcho
			// 
			this->richTextBoxEcho->Location = System::Drawing::Point(582, 48);
			this->richTextBoxEcho->Name = L"richTextBoxEcho";
			this->richTextBoxEcho->Size = System::Drawing::Size(341, 355);
			this->richTextBoxEcho->TabIndex = 10;
			this->richTextBoxEcho->Text = L"";
			// 
			// textBoxStreet
			// 
			this->textBoxStreet->Location = System::Drawing::Point(34, 188);
			this->textBoxStreet->Name = L"textBoxStreet";
			this->textBoxStreet->Size = System::Drawing::Size(255, 20);
			this->textBoxStreet->TabIndex = 11;
			// 
			// textBoxCity
			// 
			this->textBoxCity->Location = System::Drawing::Point(295, 188);
			this->textBoxCity->Name = L"textBoxCity";
			this->textBoxCity->Size = System::Drawing::Size(207, 20);
			this->textBoxCity->TabIndex = 12;
			// 
			// textBoxState
			// 
			this->textBoxState->Location = System::Drawing::Point(34, 232);
			this->textBoxState->Name = L"textBoxState";
			this->textBoxState->Size = System::Drawing::Size(255, 20);
			this->textBoxState->TabIndex = 13;
			// 
			// textBoxZip
			// 
			this->textBoxZip->Location = System::Drawing::Point(295, 232);
			this->textBoxZip->Name = L"textBoxZip";
			this->textBoxZip->Size = System::Drawing::Size(100, 20);
			this->textBoxZip->TabIndex = 14;
			// 
			// buttonUpdateName
			// 
			this->buttonUpdateName->Location = System::Drawing::Point(381, 74);
			this->buttonUpdateName->Name = L"buttonUpdateName";
			this->buttonUpdateName->Size = System::Drawing::Size(122, 23);
			this->buttonUpdateName->TabIndex = 15;
			this->buttonUpdateName->Text = L"Update Name";
			this->buttonUpdateName->UseVisualStyleBackColor = true;
			this->buttonUpdateName->Click += gcnew System::EventHandler(this, &MyForm::buttonUpdateName_Click);
			// 
			// buttonUpdateAge
			// 
			this->buttonUpdateAge->Location = System::Drawing::Point(151, 138);
			this->buttonUpdateAge->Name = L"buttonUpdateAge";
			this->buttonUpdateAge->Size = System::Drawing::Size(122, 23);
			this->buttonUpdateAge->TabIndex = 16;
			this->buttonUpdateAge->Text = L"Update Age";
			this->buttonUpdateAge->UseVisualStyleBackColor = true;
			this->buttonUpdateAge->Click += gcnew System::EventHandler(this, &MyForm::buttonUpdateAge_Click);
			// 
			// buttonUpdateAddress
			// 
			this->buttonUpdateAddress->Location = System::Drawing::Point(402, 229);
			this->buttonUpdateAddress->Name = L"buttonUpdateAddress";
			this->buttonUpdateAddress->Size = System::Drawing::Size(101, 23);
			this->buttonUpdateAddress->TabIndex = 17;
			this->buttonUpdateAddress->Text = L"Update Address";
			this->buttonUpdateAddress->UseVisualStyleBackColor = true;
			this->buttonUpdateAddress->Click += gcnew System::EventHandler(this, &MyForm::buttonUpdateAddress_Click);
			// 
			// textBoxNickname
			// 
			this->textBoxNickname->Location = System::Drawing::Point(34, 90);
			this->textBoxNickname->Name = L"textBoxNickname";
			this->textBoxNickname->Size = System::Drawing::Size(193, 20);
			this->textBoxNickname->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Nickname:";
			// 
			// buttonUpdateNickname
			// 
			this->buttonUpdateNickname->Location = System::Drawing::Point(234, 90);
			this->buttonUpdateNickname->Name = L"buttonUpdateNickname";
			this->buttonUpdateNickname->Size = System::Drawing::Size(122, 23);
			this->buttonUpdateNickname->TabIndex = 20;
			this->buttonUpdateNickname->Text = L"Update Nickname";
			this->buttonUpdateNickname->UseVisualStyleBackColor = true;
			this->buttonUpdateNickname->Click += gcnew System::EventHandler(this, &MyForm::buttonUpdateNickname_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(366, 425);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(255, 20);
			this->textBoxSearch->TabIndex = 21;
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(627, 423);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(121, 23);
			this->buttonSearch->TabIndex = 22;
			this->buttonSearch->Text = L"Search by Last Name";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &MyForm::buttonSearch_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Address:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(295, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"City:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 216);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 25;
			this->label5->Text = L"State:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(295, 216);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Zip:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 475);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->textBoxSearch);
			this->Controls->Add(this->buttonUpdateNickname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxNickname);
			this->Controls->Add(this->buttonUpdateAddress);
			this->Controls->Add(this->buttonUpdateAge);
			this->Controls->Add(this->buttonUpdateName);
			this->Controls->Add(this->textBoxZip);
			this->Controls->Add(this->textBoxState);
			this->Controls->Add(this->textBoxCity);
			this->Controls->Add(this->textBoxStreet);
			this->Controls->Add(this->richTextBoxEcho);
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
	///////////GLOBAL VARIABLES//////////////
	ArrayList^ database = gcnew ArrayList;

	int databaseIndex;

	/////////////////////////////////////////
	
	//this button submits a new Person into the database by constructing a new Person using the info provided
	private: System::Void buttonSubmit_Click(System::Object^  sender, System::EventArgs^  e) {

		int age = 0;

		int zip = 0;

		int::TryParse(textBoxZip->Text, zip);

		int::TryParse(textBoxAge->Text, age);

		Person^ person = gcnew Person(
			textBoxFirstName->Text, textBoxMiddleName->Text, textBoxLastName->Text, age);


		Address^ address = gcnew Address(textBoxStreet->Text, textBoxState->Text, textBoxCity->Text, zip);

		person->changeThisAddress(address);

		person->changeNickName(textBoxNickname->Text);

		database->Add(person);

		richTextBoxEcho->Clear();

		for (int i = 0; i < database->Count; i++){

			person = safe_cast<Person^>(database[i]);
			richTextBoxEcho->Text += person->getLastName() + "\n";

		}

		MessageBox::Show("New person has been added to the database");


	}
	
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		Person^ person;
		
		person = gcnew Person();
		person->changeNickName("Gaming Hombre");//legal Nickname change
		database->Add(person);
		person = gcnew Person("Roberto", "Rodriguez", "Gonzalez", 33);
		person->changeNickName("G");
		database->Add(person);
		person = gcnew Person("Dennis", "The-Creator-of-C", "Ritchie", 70);
		database->Add(person);
		person = gcnew Person("Thomas", "Alva", "Edison", 85);
		database->Add(person);

		for (int i = 0; i < database->Count; i++){

			person = safe_cast<Person^>(database[i]);
			richTextBoxEcho->Text += person->getLastName() + "\n";

		}

		buttonUpdateName->Visible = false;
		buttonUpdateAge->Visible = false;
		buttonUpdateAddress->Visible = false;
		buttonUpdateNickname->Visible = false;
		
	}
	private: System::Void buttonSearch_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ targetName;
		Person^ target;
		Person^ somePerson;

		targetName = textBoxSearch->Text->ToLower();

		for (int i = 0; i < database->Count; i++){

			somePerson = safe_cast<Person^>(database[i]);
			if ((somePerson->getLastName())->ToLower() == targetName){
				MessageBox::Show("Person found.");

				textBoxFirstName->Text = somePerson->getFirstName();
				textBoxMiddleName->Text = somePerson->getMiddleName();
				textBoxLastName->Text = somePerson->getLastName();

				textBoxNickname->Text = somePerson->getNickname();

				textBoxAge->Text = somePerson->getAge().ToString();

				textBoxStreet->Text = somePerson->getAddress()->getAddress();

				textBoxCity->Text = somePerson->getAddress()->getCity();

				textBoxState->Text = somePerson->getAddress()->getState();

				textBoxZip->Text = somePerson->getAddress()->getZipCode().ToString();

				buttonUpdateName->Visible = true;
				buttonUpdateAge->Visible = true;
				buttonUpdateAddress->Visible = true;
				buttonUpdateNickname->Visible = true;

				databaseIndex = i;
				break;
			}
			else {
				buttonUpdateName->Visible = false;
				buttonUpdateAge->Visible = false;
				buttonUpdateAddress->Visible = false;
				buttonUpdateNickname->Visible = false;
			}

		}
	}
private: System::Void buttonUpdateName_Click(System::Object^  sender, System::EventArgs^  e) {
	safe_cast<Person^>(database[databaseIndex])->changeName(textBoxFirstName->Text, textBoxMiddleName->Text, textBoxLastName->Text);

	MessageBox::Show("Name has been changed");
}
private: System::Void buttonUpdateNickname_Click(System::Object^  sender, System::EventArgs^  e) {
	safe_cast<Person^>(database[databaseIndex])->changeNickName(textBoxNickname->Text);

	MessageBox::Show("Nickname has been changed");
}
private: System::Void buttonUpdateAge_Click(System::Object^  sender, System::EventArgs^  e) {

	int newAge;

	int::TryParse(textBoxAge->Text, newAge);

	safe_cast<Person^>(database[databaseIndex])->changeAge(newAge);

	MessageBox::Show("Age has been changed");
}
private: System::Void buttonUpdateAddress_Click(System::Object^  sender, System::EventArgs^  e) {

	Address^ newAddress = gcnew Address(
		textBoxStreet->Text, textBoxState->Text, textBoxCity->Text,Convert::ToInt32(textBoxZip->Text));

	safe_cast<Person^>(database[databaseIndex])->changeThisAddress(newAddress);

	MessageBox::Show("Address has been changed");
}
};
}
