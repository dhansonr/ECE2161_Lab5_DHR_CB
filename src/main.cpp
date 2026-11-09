//============================================================================
// Name        : ECE2161_Lab5_DHR_CB.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "sorting.h"
using namespace std;

/*void displayMenu()
{
	cout << "Sorting Menu" << endl;
	cout << "1. Read Data" << endl;
	cout << "2. Bubble Sort" << endl;
	cout << "3. Insertion Sort" << endl;
	cout << "4. Merge Sort" << endl;
	cout << "5. Quick Sort" << endl;
	cout << "0. Exit" << endl;
	cout << "Enter Choice: " << endl;
}*/

int main() {

	//Test:
	//Real code commented out above and below
	long int numbers[11] = {5, 2, 9, 1, 3, 6, 9, 10, 3, 33, -3};

	bubbleSort(numbers, 11);

	for(int i = 0; i < 11; i++)
	{
		cout << numbers[i] << " ";
	}

	return 0;
	/*int choice;

	do
	{
		displayMenu();
		cin >> choice;

		switch(choice)
		{
		case 1:
			cout << "Read Data" << endl;
			break;
		case 2:
			cout << "Bubble Sort" << endl;
			break;
		case 3:
			cout << "Insertion Sort" << endl;
			break;
		case 4:
			cout << "Merge Sort" << endl;
			break;
		case 5:
			cout << "Quick Sort" << endl;
			break;
		case 0:
			cout << "Exiting Program..." << endl;
			break;
		default:
			cout << "Invalid choice" << endl;
		}
	} while(choice != 0);

	return 0;*/
}
