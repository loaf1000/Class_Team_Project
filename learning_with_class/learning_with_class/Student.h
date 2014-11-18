

#pragma once

using namespace System;

ref class Student //ref class is used in Visual C++
{
	String^ _studentName;
	array < int >^ _gradePercent;

	/*for (int i = 0; i < 101; i++)
	{
		_gradePercent[i] = i;
	}*/
private:

protected:

public:
	String^ calcGrade()
	{

	}
	String^ _nickname = _studentName;
		Student(); //Default constructor
};

