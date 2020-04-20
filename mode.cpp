// Author:       Neda Khakpour
// Compiler:     Visual Studio C++ 2017

// Description: The program will examine the numbers in the input file "RandomModeOneMode.txt" and determine the mode i.e., the element
// with the highest frequency, the frequency of the modal element, and the maximum value in the file. If the frequemcy is strictly greater than
// 1, then the program will report that mode and the frequency to the user on the console. If the frequency of the modal element equals 1, there
// there is no real mode, as all numbers in the file occur at least once, and the program reports that no mode exists for the data set.


#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>
#include <array>
#include <cstdlib>

using namespace std;

//define array size constant of 700 for 701 elements
const int ARRAY_SIZE = 700;

//structure definition for FileData
struct FileData
{
	int * dataArray;		 // A pointer to the dynamic data array int count; 
	int count;				 // The total number of elements in the file.
	int maxElem;			 // The largest element in the file.
};

//structure definition for ModeData
struct ModeData
{
	int mode;				// The modal element
	int frequency;			// The frequency of the modal element
};

//Fuction Prototypes for FileData and ModeData type functions
FileData readDataFromFile(ifstream & inFile, int size);
ModeData findMode(int arr[], int range, int numElem);

int main() {
	//declare structure object
	FileData fileData;
	ModeData modeData;

	//declcare variables
	int * arr = new int[ARRAY_SIZE];				//dynamically create int * array arr to size ARRAY_SIZE
	string fileName = "RandomModeOneMode.txt";		//set file name
	//string fileName = "RandomModeNoModes.txt";	//set no mode file name for testing
	int size = ARRAY_SIZE;							//set size to array ARRAY_SIZE
	int range = 0;									//initialize range value
	int numElem = 0;								//initialize numElem value
	int mode = 0;									//initialize mode value
	int frequency = 0;								//initialize frequency value

	//open the file
	ifstream inFile(fileName);

	//run the readDataFromFile function and set the return values to the structure object
	fileData = readDataFromFile(inFile, size);

	//set the structure values returned from the function into each respective varibale
	range = fileData.maxElem;
	arr = fileData.dataArray;
	numElem = fileData.count;

	//run the findMode function and set the return values to the structure object
	modeData = findMode(arr, range, numElem);

	//de-allocate the dynamic arrays (arr, and the array it points to dataArray in readDataFromFile function
	delete[] arr;
	

	//set the structure values returned from the function into each respective varibale
	mode = modeData.mode;
	frequency = modeData.frequency;

	if (frequency == 1)
	{
		cout << "There is no mode from the data set in the file.";
	} // if frequency equals 1, then there is no mode
	else
	{
		cout << "The modal element of this file is " << mode << " and it occurs " << frequency << " times in the file.";
	} // else display the mode and frequency
	

	//prevent console from closing
	cout << "\n\nPress any key to continue...";
	_getch();	

	return 0;
}

/****************************************************************************
* Function: FileData readDataFromFile(ifstream & inFile, int size)
* Descr: This function will dynamically allocate int array of size "size", read the data from the input file
* and load it into the array, and return a pointer to it back to the calling function. It will also return an Integer
* value equal to the number of elements in the input file, and an integer value equal to the maximum element in the file.
* Input: ifstream & inFile, int size
* Return: array pointer, integer values of the maximum element and number of elements packaged in a structure
****************************************************************************/
FileData readDataFromFile(ifstream & inFile, int size)
{
	//declare structure object
	FileData fileData;

	//declare variables
	int numbers;							//declare numbers value
	int count = 0;							//initialize count value
	int * dataArray = new int[size];		//dynamically allocate int * counter array to size "size"
	int maxElem = 0;						//initialize maxElem value

	do
	{
		inFile >> numbers;
		dataArray[count] = numbers;
		count++;
	} while (inFile); //do while loop. while get next line in the file, put the input into the varibale "numbers" 
					  //store value into dataarray and increment the count

	//close the file
	inFile.close();

	for (int i = 0; i < size; i++)
	{
		if (dataArray[i] > maxElem)
		{
			maxElem = dataArray[i];
			fileData.maxElem = dataArray[i];
		} //if dataArray value is greater than the previous Max Element, set new maximum element value
	} //forloop to scan through dataArray and find the maximum element, or max number	

	//set the new values into the structure values
	fileData.count = count;
	fileData.dataArray = dataArray;	
	
	return fileData;	
}

/****************************************************************************
* Function: ModeData findMode(int arr[], int range, int numElem)
* Descr: This function will determine the mode and the frequency of the modal element in the array arr. It will 
* dynamically allocate an int array of size range + 1 and initialize all of those elements to 0. It will then scan through
* the data array using those values as indices into the counter array, incrementing the counter array when an element is found.
* Finally, it will scan through the counter array to determine the modal element and its frequency.
* Input: int arr[], int range, int numElem
* Return:integer values of the modal element and frequency
****************************************************************************/
ModeData findMode(int arr[], int range, int numElem)
{
	//declare structure object
	ModeData modeData;	

	//declare variables
	int * counterArray = new int[range + 1];		//dynamically allocate int * counter array to size range + 1 
	int number = 0;									//initialize number value
	int mode = 0;									//initialize mode value	
	modeData.mode = 0;								//initialize struct mode value	
	int frequency = 1;								//initialize frequency value
	modeData.frequency = 1;							//initialize struct frequency value

	for(int i = 0; i < range + 1; i++)
	{
		counterArray[i] = 0;
	} //initialize the counter array

	for(int j = 0; j < numElem - 1; j++)
	{
		number = arr[j];
		counterArray[number]++;

	} //scan through array arr using the values as indices into the counter array, incrementing the counter array when an element is found

	for (int k = 0; k < range + 1; k++)
	{
		if (counterArray[k] > modeData.frequency && counterArray[k] != 1)
		{
			modeData.frequency = counterArray[k];
			modeData.mode = k;
		} // if counter array value is greater than the frequency and is not equal to 1, set the counter value as the frequency, and 
		  // the mode as the value of the index to the counter array
	} // for loop to interate through counter array and compare values to get frequency and mode

	//de-allocate the dynamic arrays before the function exits
	delete[] counterArray;	

	return modeData;	

}
