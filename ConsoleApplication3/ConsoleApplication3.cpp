// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

float f2c(float f) {
	float c;
	c = (f - 32)*(0.55555555556);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(7);
	cout << c << endl;
	return c;
}

float printTable(float lower, float higher, int counter) {

	while (lower < higher) {
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(7);
		cout << lower << "\t";
		f2c(lower);
		lower += counter;
	}
	return 0;
}

int main()
{
	float higher;
	float lower;
	int counter = 0;

	cout << "Please Enter a lower limit: " << endl;
	cin >> lower;
	cout << "Please Enter a higher limit: \n";
	cin >> higher;

	cout << "Please enter a step counter (between 1-10):\n";
	cin >> counter;


	while (counter < 1 || counter > 10) {
		cout << "Invalid entry! Please enter a valid value BETWEEN 1-10:\n";
		cin >> counter;
	}


	cout << "\nFarenheit \t Celcius \n ------- \t ------ \n";

	printTable(lower, higher, counter);

	main(); 
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
