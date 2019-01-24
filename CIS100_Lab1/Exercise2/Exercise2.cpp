// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

	string first_name, last_name;
	cout << "Hello, what's your first name?\n";
	getline (cin, first_name);
	cout << "Hello, " << first_name << ". And Your last name?\n";
	getline (cin, last_name);
	
	int age, confidence;
	
	
	cout << "Don't mean to be pushy, but your age?\n";
	cin >> age;
	cout << "Last one. In 0-100 what's your confidence in programmers?\n";
	cin >> confidence;
	cout << "Hello, " << first_name << " " << last_name << ".\n";
	cout << " Nice to meet you. You might be " << age << " years old; but in dog years, you're " << age * 7 << ".\n ";
	
	double confidence_percentage = confidence / 100.00;
	if (confidence_percentage < .50) {

		cout << "I agree, programmers can't be trusted!";
	}
	else if (confidence_percentage >= .50) {

		cout << "Writing good code takes hard work!";
	}
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
