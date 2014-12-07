#include "Address.h"
#include "Wallet.h"
using namespace System;	//access System classes such as String^

//There are two flavors of classes, ref, and value. If we were to just declare this class
//"class Person", is considered a value class. Value classes are useful for CLR prorams.
//If we declare the class as "ref class Person", Person will then be considered a reference class.
//Reference classes are useful for GUI environment since we can use classes.
ref class Person{

public:
	//Anything we want to make public, in otherwords everything in here will be accessible
	//outside this class

	/*
	  Typically we list:
	  -Fields
	  -Constructors
	  -Methods
	  
	  Fields generally are always private so they can not be modified anywhere else in the program.
	  Constructors are always public.
	  Methods are almost always public. In rare cases methods could be private, only if you want a certain
	  calculation done via a function internally, rather than externally.
	  
	*/

	//////////////FIELDS//////////////////////////
	String^ _nickname;

	//////////////////////////////////////////////

	////////////CONSTRUCTORS//////////////////////

	//we "construct" persons with these "function"-looking things
	Person(){
		_firstName = "Carlos";
		_middleName = "Alfredo";
		_lastName = "Chulo";
		_age = 24;
		_thisPersonsAddress = gcnew Address(); //NOTE: no parameters, what will happen?
		_nickname = "Slick";
	}

	Person(String^ firstName, String^ middleName, String^ lastName, int age){
		_firstName = firstName;
		_middleName = middleName;
		_lastName = lastName;
		_age = age;
		_nickname = "Slick";
		_thisPersonsAddress = gcnew Address("246 Middle-of-No-Where", "AZ", "Phoenix", 12345); //NOTE: no parameters, what will happen?

	}

	Person(Person^ person){
		_firstName = person->getFirstName();
		_middleName = person->getMiddleName();
		_lastName = person->getLastName();
		_age = person->getAge();
		_nickname = person->_nickname; //huh? no method required? how?
		_thisPersonsAddress = person->getAddress(); //NOTE: no parameters, what will happen?

	}

	//////////////////////////////////////////////

	//////////////METHODS//////////////////////

	Address^ getAddress(){
		return _thisPersonsAddress;
	}

	Void changeThisAddress(Address^ newAddress){
		_thisPersonsAddress = newAddress;
	}

	Void changeName(String^ firstName, String^ middleName, String^ lastName){
		_firstName = firstName;
		_middleName = middleName;
		_lastName = lastName;
	}

	Void changeAge(int age){
		_age = age;
	}

	Void changeNickName(String^ nickname){
		_nickname = nickname;
	}

	String^ getFirstName(){
		return _firstName;
	}

	String^ getMiddleName(){
		return _middleName;
	}

	String^ getLastName(){
		return _lastName;
	}

	String^ getNickname(){
		return _nickname;
	}

	int getAge(){
		return _age;
	}

	/////////////////////////////////////////////
private:
	//Anything we want to make private, in otherwords only accessible to "this" class
	//will be place here

	/////////PRIVATE FIELDS/////////////
	String^ _firstName;
	String^ _middleName;
	String^ _lastName;
	int _age;
	
	Address^ _thisPersonsAddress; //What creature is this?
	///////////////////////////////////
};