// Author:       Neda Khakpour
// Course:       CS-1337-OU1
// Date:         6/6/2017
// Assignment:   Lecture Homework #1 Excercise #1
// Compiler:     Visual Studio C++ 2017

// Desciption:   
// This program reads data from the input file "Random.txt" and determines the
// total number of numbers, average, number of even/odd numbers, numbers greater
// than 384 but less than or equal to 605, and the maximum/minimum numbers from the file.


#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	double sum = 0;
	int number;
	int totalNumbers = 0;
	int evenNumbers = 0;
	int oddNumbers = 0;
	int betweenRange = 0;
	int minimum = 1000;
	int maximum = 0;
	double average;
	string fileName = "Random.txt";

	//open the file
	ifstream inFile(fileName);

	if (!inFile)
	{
		cout << "Unable to open the file!";
		return 0;
	} //if not in the file, end the program with a message "Unable to open the file"
	
	while (getline(inFile, fileName))
	{
		totalNumbers++;
		inFile >> number;
		sum += number;

		if (number%2 == 0)
		{
			evenNumbers++;
		} //condition to check for even numbers
		else
		{
			oddNumbers++;
		} //else if not even, then odd
		
		if ((number > 384) && (number <= 605))
		{
			betweenRange++;
		} //condition to check to see if number is between this range

		if (minimum > number)
		{
			minimum = number;
		} //condition to check if number is the minimum number

		if (maximum < number)
		{
			maximum = number;
		} //condition to check if number is the minimum number
	} //while in the file and getting the next line, check the input for certain conditions of total number of numbers, sum, number of even/odd numbers, numbers greater
	 // than 384 but less than or equal to 605, and the maximum/minimum numbers from the file

	//close the file
	inFile.close();

	//compute the average from the sum calculated above
	average = sum / totalNumbers;

	//print the output
	cout << "\nTotal number of numbers: " << totalNumbers << endl;
	cout << fixed << setprecision(1) << "Average of the numbers: " << average << endl;
	cout << "Number of even numbers: " << evenNumbers << endl;
	cout << "Number of odd numbers: " << oddNumbers << endl;
	cout << "Number of numbers greater than 384 but less than or equal to 605: " << betweenRange << endl;
	cout << "Maximum number: " << maximum << endl;
	cout << "Minimum number: " << minimum << endl;



	//prevent console from closing
	cout << "\n\nPress any key to continue...";
	_getch();
    return 0;
}

