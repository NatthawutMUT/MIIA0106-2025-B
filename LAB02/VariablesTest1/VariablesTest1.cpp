// VariablesTest1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age = 34;  // Variable declaration and initialization
	string studentID = "6812100003";
	float gpa = 3.55;  // Variable declaration and initialization
	string name = "Natthawut Boonnoon";
    
	cout << "==== Student Profile =====" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Student ID: " << studentID << endl;
	cout << "GPA: " << gpa << endl;
	cout << "==========================" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
