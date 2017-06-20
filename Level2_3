// Author:       Neda Khakpour
// Course:       CS-1337-OU1
// Date:         6/13/2017
// Assignment:   Lecture Homework #2 Exercise #1
// Compiler:     Visual Studio C++ 2017

// Description:Read data from the file "Random Sort. txt" into an array. The data is then copied into another array, where it
// will be then sorted through a bubble sort and displayed on the console. The second array is then reset, and displayed on the console,
// only to be sorted again through the insertion sort algorithm and displayed.


#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>
#include <array>

using namespace std;

//define array size constant of 99 for 100 elements
const int ARRAY_SIZE = 99;

//declare function prototypes
void displayArray(int arr1[], int size);
void copyArray(int arr1[], int arr2[], int size);
void bubbleSort(int arr[], int size);
void insertionSort(int arr[], int size);
void swap(int & int1, int & int2);


int main()
{
	//declare variables
	int arr1[ARRAY_SIZE];
	int arr2[ARRAY_SIZE];
	int numbers;
	int i = 0;
	string fileName = "Random Sort.txt";


	//open the file
	ifstream inFile(fileName);

	if (!inFile)
	{
		cout << "Unable to open the file!";
		return 0;
	} //if not in the file, end the program with a message "Unable to open the file"


	do
	{
		inFile >> numbers;
		arr1[i] = numbers;
		i++;
	} while (getline(inFile, fileName)); //do while loop. while get next line in the file, put the input into the array and increment the pointer


	inFile.close(); //close the file

					//call the functions
	copyArray(arr1, arr2, ARRAY_SIZE);
	bubbleSort(arr2, ARRAY_SIZE);
	copyArray(arr1, arr2, ARRAY_SIZE);
	insertionSort(arr2, ARRAY_SIZE);

	//prevent console from closing
	cout << "\n\nPress any key to continue...";
	_getch();

	return 0;
}

/****************************************************************************
* Function: void displayArray(int arr[], int size)
* Descr: This function displays the content of 'arr', 10 numbers per line, each number right justified in a 5 byte field. This is achieved by
* interating through the array in a for loop, and checking if the array at index i is not 0 and less than or equal to the array size. If so, it will
* cout the contents of the array. Another if statement is used to check if the numbers per line, using index i against modulus 10. If i % 10 equals 9,
* then the 10 numbers per line condition is met, and a new line is printed. The array output is displayed on the console.
* Input: int arr[] and int size
* Return: output of the given array
****************************************************************************/
void displayArray(int arr[], int size)
{
	for (int i = 0; i <= ARRAY_SIZE; i++)
	{
		if (arr[i] != 0 && i <= ARRAY_SIZE)
		{
			cout << right << setw(5) << arr[i] << " ";

		} //if array value is not 0 and of i is less than or equal to array size, cout the array

		if ((i % 10) == 9)
		{
			cout << endl;
		} //if i modulus 10 equals 9, end line

	} //for loop to interate through the array
}

/****************************************************************************
* Function: void copyArray(int arr1[], int arr2[], int size)
* Descr: This function copies the contents of array 1 into array 2. This is achieved by interating through the array using a for loop,
* and placing the content of arr1 at index x into arr2 at index x. It will continue until the array has been traversed and all the contents
* are copied. The displayArray function is called to display the newly sorted array.
* Input: int arr1[], int arr2[], and int size
* Return: the copied array displayed on the console
****************************************************************************/
void copyArray(int arr1[], int arr2[], int size)
{
	for (int x = 0; x <= ARRAY_SIZE; x++)
	{
		arr2[x] = arr1[x];
	} //place the contents of array 1 into array 2

	  //call the displayArray method to display the sorted array
	displayArray(arr2, ARRAY_SIZE);
	cout << "\n\n";
}

/****************************************************************************
* Function: void bubbleSort(int arr[], int size)
* Descr: This function executes the bubble sort algorithm on 'arr' in ascending order. This is achieved by setting a do while loop to interate through
* the array using a for loop. In the for loop, it verifies if the count is greater than count + 1. If so, it swaps the elements using the swap method,
* and sets the flag to true. It continues to sort the array until completed. The displayArray function is called to display the newly sorted array.
* Input: int arr[], and int size
* Return: displays the sorted array
****************************************************************************/
void bubbleSort(int arr[], int size)
{
	bool swaps;		//flag to show it swapped
	int temp;		//temporary value to hold number

	do
	{
		swaps = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (arr[count] > arr[count + 1])
			{
				//call swap method to swap elements of the array
				swap(arr[count], arr[count + 1]);
				//set flag to true
				swaps = true;
			}

		}
	} while (swaps); //do while loop to swap elements while flag is false

					 //call the displayArray method to display the sorted array
	displayArray(arr, ARRAY_SIZE);
	cout << "\n\n";
}

/****************************************************************************
* Function: void insertionSort(int arr[], int size)
* Descr: This function executes the insertion sort algorithm on 'arr' in ascending order. This is achieved by setting a for loop to interate through
* the array. In the for loop, a while loop is declared to swap the elements while j is greater than 0, and arr at index j is less than arr at index j -1.
* If so, it swaps the elements using the swap method, and sets the flag to true. It continues to sort the array until completed. The displayArray function
* is called to display the newly sorted array.
* Input: int arr[], and int size
* Return: displays the sorted array
****************************************************************************/
void insertionSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int j;		//int j for the index
		int temp;	//temporary value
		j = i;		//set j to index i

		while (j > 0 && arr[j] < arr[j - 1])
		{
			swap(arr[j], arr[j - 1]);
			j--;
		} //while j is greater than 0 and arr at index j is less than arr at index j -1, swap the elements and decrement j
	} //for loop to increment i and iterate through

	  //call the displayArray method to display the sorted array
	displayArray(arr, ARRAY_SIZE);
	cout << "\n\n";
}


/****************************************************************************
* Function: void swap(int & int1, int & int2)
* Descr: This function will swap two given arguments. This is achieved by setting a temp value equal to int1. Changing the value
* of int1 into int2. Then changing int2 into the value of temp.
* Input: reference parameters of int 1 and int 2
* Return: the swapped arguments
****************************************************************************/
void swap(int & int1, int & int2)
{
	int temp;		//temporary value to store int value

	temp = int1;	//set temp to int1
	int1 = int2;	//set int2 into int1
	int2 = temp;	//set temp into int2

}
