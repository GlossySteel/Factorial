// cPlusPlusTesting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <array>

using namespace std;

int findTheFactorial(short);

int main()
{
	short user_number;

	cout << "Enter a number to find its factorial:\n";
	cin >> user_number;

	cout << "The factorial of " << user_number << " is " << findTheFactorial(user_number);

}

int findTheFactorial(short number) {

	int factorial = 1;

	for (short i = 1; i < number + 1; i++)
	{
		factorial *= i;
	}

	return factorial;
}