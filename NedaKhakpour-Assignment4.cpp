// NedaKhakpour-Assignment4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string fname;
	string lname;
	int test1;
	int test2;
	int test3;
	string line;	
	double sum = 0;
	double total;
	double average;
	int count = 0;
	char letterGrade;
	double numGrade;
	double min = 100;
	double max = 0;

	//read file input
	ifstream in("DataFile.txt");

	ofstream out;


	//count number of students
	if (!in)
	{
		cout << "Cannot open file" << endl;
		return 1;
	}
	else
	{
		cout << fixed << setprecision(2);

		cout << "STUDENT STATISTICS" << '\n';

		cout << "\n" << left
			<< setw(20) << "Name"
			<< setw(15) << "Total Points"
			<< setw(15) << "Numeric Grade"
			<< setw(10) << "Letter Grade";

		do 
		{
			//read the first and last name
			in >> fname >> lname;

			if (in.eof())
			{
				break;
			}

			//read the test score
			in >> test1 >> test2 >> test3;

			total = test1 + test2 + test3;
			numGrade = total / 3;
			sum = sum + numGrade;
			count++;

			if (min > numGrade)
			{
				min = numGrade;
			} 
			if (max < numGrade)
			{
				max = numGrade;
			}

			if (numGrade >= 90)
			{
				letterGrade = 'A';
			}
			else if (numGrade >= 80 && numGrade <= 89)
			{
				letterGrade = 'B';
			}
			else if (numGrade >= 70 && numGrade <= 79)
			{
				letterGrade = 'C';
			}
			else if (numGrade >= 60 && numGrade <= 69)
			{
				letterGrade = 'D';
			}
			else if (numGrade <= 59)
			{
				letterGrade = 'F';
			}
			else 
			{
				cout << "Invalid Score";
			}
			string name = fname + " " + lname;

			cout << "\n" << left
				<< setw(20) << name
				<< left
				<< setw(15) << total
				<< left
				<< setw(15) << numGrade
				<< left
				<< setw(10) << letterGrade;
						
		} while (in);

		in.close();

		average = sum / count;

		cout << "\n\nCLASS STATISTICS: \n\n";
		cout << "Number: \t\t" << count << '\n';
		cout << "Minimum: \t\t" << min << '\n';
		cout << "Maximum: \t\t" << max << '\n';
		cout << "Average: \t\t" << average << '\n';
	} 


	//prevent console from closing
	cout << "\n\nPress any key to continue...";
	_getch();

	return 0;
}

