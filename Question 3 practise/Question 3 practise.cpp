// Question 3 practise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctime>
#include <conio.h>
#include < Windows.h>
#include <iomanip>
#include <iostream>
#include <string>

	using namespace std;

	int main()
	{
		int randnum, num = 0, attemptsCount = 1;

		randnum = (rand() % 100 + 1);

		for (int i = 0; i <= 5; i++)
		{
			cout << "\n\n\tPlease enter a number between 0 and 100: ";
			cin >> num;

			if (num == randnum)
			{
				cout << "\n\n\tYou have guessed the random number!!!";
			}

			else
			{
				if (num != randnum)
				{
					cout << "\n\n\tThe number is between 0 and: " << num;
				}
			}

		}

		return 0;
}

