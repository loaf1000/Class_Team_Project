#ifndef WALLET_H
#define WALLET_H

using namespace::System;

value class MoneyType
{
public:
	int pennies;
	int nickels;
	int dimes;
	int quarters;
	int dollarBills;
	int twoDollarBills;
	int fiveDollarBills;
	int tenDollarBills;
	int twentyDollarBills;
	int fiftyDollarBills;
	int hundredDollarBills;

	//Declare an operator overload within the class
	//Format for the + operator:
	// ReturnType operator+(parameter) 
	MoneyType operator+ (MoneyType money);
};

// Definition of an operator overload is written outside of the class
// Format for the + operator:
// ReturnType Scope::operator+(parameter)
// The scope is the MoneyType class.
MoneyType MoneyType::operator+(MoneyType money)
{
	////////////////////////////////////////////////////////////////////
	//
	//				DECLARE LOCAL VARIABLES/OBJECTS
	//
	////////////////////////////////////////////////////////////////////

	MoneyType temp;

	////////////////////////////////////////////////////////////////////

	temp.pennies = pennies + money.pennies;
	temp.nickels = nickels + money.nickels;
	temp.dimes = dimes + money.dimes;
	temp.quarters = quarters + money.quarters;
	temp.dollarBills = dollarBills + money.dollarBills;
	temp.twoDollarBills = twoDollarBills + money.twoDollarBills;
	temp.fiveDollarBills = fiveDollarBills + money.fiveDollarBills;
	temp.tenDollarBills = tenDollarBills = money.tenDollarBills;
	temp.twentyDollarBills = twentyDollarBills + money.twentyDollarBills;
	temp.fiftyDollarBills = fiftyDollarBills + money.fiftyDollarBills;
	temp.hundredDollarBills = hundredDollarBills + money.hundredDollarBills;

	return temp;
}


ref class Wallet
{
public:
	////////////////////////////////////////////////////////////////////
	//
	//				DECLARE LOCAL VARIABLES/OBJECTS
	//
	////////////////////////////////////////////////////////////////////

	MoneyType money;
	String^ owner;
	

	////////////////////////////////////////////////////////////////////

	//Constructors
	
	Wallet()
	{
		money.pennies = 0;
		money.nickels = 0;
		money.dimes = 0;
		money.quarters = 0;
		money.dollarBills = 0;
		money.twoDollarBills = 0;
		money.fiveDollarBills = 0;
		money.tenDollarBills = 0;
		money.twentyDollarBills = 0;
		money.fiftyDollarBills = 0;
		money.hundredDollarBills = 0;
	}

	Wallet(MoneyType cash)
	{
		money = cash;
	}

	//Methods
	
	double getValueOfWallet()
	{
		return _valueOfWallet;
	}

	//Declare an operator overload within the class
	//Format for the + operator:
	// ReturnType operator+(parameter) 
	Wallet^ operator+(Wallet^ secondWallet);

private:
	double _valueOfWallet = (.01 * money.pennies) + (.05 * money.nickels) + (.1 * money.dimes) + (.25 * money.quarters) + (1 * money.dollarBills)
		+ (2 * money.twoDollarBills) + (5 * money.fiveDollarBills) + (10 * money.tenDollarBills) + (20 * money.twentyDollarBills)
		+ (50 * money.fiftyDollarBills) + (100 * money.hundredDollarBills);
};


// Definition of an operator overload is written outside of the class
// Format for the + operator:
// ReturnType Scope::operator+(parameter)
// The scope is the WalletType class.
Wallet^ Wallet::operator+(Wallet^ secondWallet)
{
	////////////////////////////////////////////////////////////////////
	//
	//				DECLARE LOCAL VARIABLES/OBJECTS
	//
	////////////////////////////////////////////////////////////////////

	Wallet^ tempWallet;

	////////////////////////////////////////////////////////////////////

	tempWallet->money = money + secondWallet->money;

	return tempWallet;
}

// More resources for operator overloading:
// http://en.wikibooks.org/wiki/C%2B%2B_Programming/Operators/Operator_Overloading
// http://www.cplusplus.com/doc/tutorial/classes2
// http://msdn.microsoft.com/en-us/library/5tk49fh2.aspx

#endif // WALLET_H