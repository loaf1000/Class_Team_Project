using namespace System;

ref class Address{
public:

	//////////CONSTRUCTORS/////////////////
	Address(){
		_address = "123 Sesame St.";
		_state = "CA";
		_city = "City-of-no-Where";
		_zipcode = 12345;
	}

	Address(String^ address, String^ state, String^ city,int zipcode){
		_address = address;
		_state = state;
		_city = city;
		_zipcode = zipcode;
	}
	////////////////////////////////////////

	/////////////METHODS////////////////////
	String^ getAddress(){
		return _address;
	}

	String^ getState(){
		return _state;
	}

	String^ getCity(){
		return _city;
	}

	int getZipCode(){
		return _zipcode;
	}
	////////////////////////////////////////
private:
	///////PRIVATE FIELDS/////////
	String^ _address;
	String^ _city;
	String^ _state;
	int _zipcode;
	//////////////////////////////
};