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
		int randnum, guess = 0, attemptsCount = 1, min = 0, max = 100;
		bool valid;

		randnum = (rand() % 100 + 1);


		cout << "\n\n\tYou have 6 attemps to get the random number...Good luck!";

		for (int i = 0; i <= 5; i++)
		{
			cout << "\n\n\tPlease enter a number between: " << min << " and " << max << ": ";
			cin >> guess;
			valid = false;

			if (cin.fail())
			{
				cout << "\n\n\tInvalid input, Please make sure to enter a number";
				cout << "\n\n\tPress any key to continue";
				_getch();
				cin.clear();
			}

			else if (guess < 1 || guess > 100)
			{
				cout << "\n\n\tInvalid input, Please enter a number between 1 and 100";
				cout << "\n\n\tPress any key to continue";
				_getch();
				system("cls");
				cin.clear();
			}

			else
			{
				valid = true;
			}

			cin.ignore(80, '\n');

		while (!valid);

			if (guess == randnum)
			{
				cout << "\n\n\tYou have guessed the random number!!!";
				cout << "\n\n\tPress any key to continue...";

			}

			else if (guess < randnum)
			{
				cout << "\n\n\tThe random number is bigger than: " << guess;
			}

			else
			{
				cout << "\n\n\tThe random number is smaller than: " << guess;
			}
		}

		if (guess > 6)
		{
			cout << "\n\n\tYou failed to get the random number! The random number was: " << randnum;
		}
		_getch();
		return 0;
} 
		
		
	
	
	
		
	
	
	

		
		
	
	
	
		

 


