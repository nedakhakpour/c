// NEDA_ASSIGNMENT3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{//START
 //Declare Variables
	int BALANCE;
	string sBREAD;
	string sMEAT;
	string sCHEESE;
	string sVEGGIE;
	string sSAUCE;
	string sDRINK;
	string sSIDE;

	//OUTPUT the table

	cout << setw(15) << left << " BREAD ";
	cout << setw(15) << left << " MEAT ";
	cout << setw(15) << left << " CHEESE ";
	cout << setw(15) << left << " VEGGIE ";
	cout << setw(15) << left << " SAUCE ";
	cout << setw(19) << left << " DRINK ";
	cout << setw(15) << left << " SIDE " << "\n";

	cout << setw(15) << left << "1 Wheat ";
	cout << setw(15) << left << "1 Ham ";
	cout << setw(15) << left << "1 American ";
	cout << setw(15) << left << "1 Lettuce ";
	cout << setw(15) << left << "1 Mustard ";
	cout << setw(19) << left << "1 Coke ";
	cout << setw(15) << left << "1 Chips " << "\n";

	cout << setw(15) << left << "2 Sourdough ";
	cout << setw(15) << left << "2 Turkey ";
	cout << setw(15) << left << "2 Cheddar ";
	cout << setw(15) << left << "2 Tomatoes ";
	cout << setw(15) << left << "2 Vinegar ";
	cout << setw(19) << left << "2 Sprite ";
	cout << setw(15) << left << "2 Apples " << "\n";

	cout << setw(15) << left << "3 Italian ";
	cout << setw(15) << left << "3 Chicken ";
	cout << setw(15) << left << "3 Mozzarella ";
	cout << setw(15) << left << "3 Olives ";
	cout << setw(15) << left << "3 Mayo ";
	cout << setw(19) << left << "3 Dr.Pepper ";
	cout << setw(15) << left << "3 Cookie " << "\n";

	cout << setw(15) << left << "4 Honey Oat ";
	cout << setw(15) << left << "4 Tuna ";
	cout << setw(15) << left << "4 Provolone ";
	cout << setw(15) << left << "4 Onion ";
	cout << setw(15) << left << "4 Ranch ";
	cout << setw(19) << left << "4 Diet Coke ";
	cout << setw(15) << left << "4 Chili " << "\n";

	cout << setw(15) << left << "5 Flatbread ";
	cout << setw(15) << left << "5 Bacon ";
	cout << setw(15) << left << "5 Swiss ";
	cout << setw(15) << left << "5 Spinach ";
	cout << setw(15) << left << "5 Italian ";
	cout << setw(19) << left << "5 Bottled Water ";
	cout << setw(15) << left << "5 Soup " << "\n";

	cout << setw(15) << left << "6 NONE ";
	cout << setw(15) << left << "6 NONE ";
	cout << setw(15) << left << "6 NONE ";
	cout << setw(15) << left << "6 NONE ";
	cout << setw(15) << left << "6 NONE ";
	cout << setw(19) << left << "6 NONE ";
	cout << setw(15) << left << "6 NONE " << "\n" << "\n";

	//INPUT statements
	char BREAD;
	cout << " Enter your choice for BREAD: ";
	cin >> BREAD;

	char MEAT;
	cout << " Enter your choice for MEAT: ";
	cin >> MEAT;


	char CHEESE;
	cout << " Enter your choice for CHEESE: ";
	cin >> CHEESE;


	char VEGGIE;
	cout << " Enter your choice for VEGGIE: ";
	cin >> VEGGIE;


	char SAUCE;
	cout << " Enter your choice for SAUCE: ";
	cin >> SAUCE;


	char DRINK;
	cout << " Enter your choice for DRINK: ";
	cin >> DRINK;

	char SIDE;
	cout << " Enter your choice for SIDE: ";
	cin >> SIDE;

	//BREAD selection cases
	switch (BREAD)
	{
	case '1':
		sBREAD = "Wheat ";
		break;
	case '2':
		sBREAD = "Sourdough ";
		break;
	case '3':
		sBREAD = "Italian ";
		break;
	case '4':
		sBREAD = "Honey Oat ";
		break;
	case '5':
		sBREAD = "Flatbread ";
		break;
	case '6':
		sBREAD = "";
		break;
	default:
		cout << "Invalid Entry" << endl;
	}

	//MEAT selection cases
	switch (MEAT)
	{
	case '1':
		sMEAT = "Ham";
		break;
	case '2':
		sMEAT = "Turkey";
		break;
	case '3':
		sMEAT = "Chicken";
		break;
	case '4':
		sMEAT = "Tuna";
		break;
	case '5':
		sMEAT = "Bacon";
		break;
	case '6':
		sMEAT = "";
		break;
	default:
		cout << "Invalid Entry" << endl;
	}

	//CHEESE selection cases
	switch (CHEESE)
	{
	case '1':
		sCHEESE = ", American";
		break;
	case '2':
		sCHEESE = ", Cheddar";
		break;
	case '3':
		sCHEESE = ", Mozzarella";
		break;
	case '4':
		sCHEESE = ", Provolone";
		break;
	case '5':
		sCHEESE = ", Swiss";
		break;
	case '6':
		sCHEESE = "";
		break;
	default:
		cout << "Invalid Entry" << endl;
	}

	//VEGGIE selection cases
	switch (VEGGIE)
	{
	case '1':
		sVEGGIE = ", Lettuce";
		break;
	case '2':
		sVEGGIE = ", Tomatoes";
		break;
	case '3':
		sVEGGIE = ", Olives";
		break;
	case '4':
		sVEGGIE = ", Onion";
		break;
	case '5':
		sVEGGIE = ", Spinach";
		break;
	case '6':
		sVEGGIE = "";
		break;
	default:
		cout << "Invalid Entry" << endl;
	}

	//SAUCE selection cases
	switch (SAUCE)
	{
	case '1':
		sSAUCE = ", Mustard";
		break;
	case '2':
		sSAUCE = ", Vinegar";
		break;
	case '3':
		sSAUCE = ", Mayo";
		break;
	case '4':
		sSAUCE = ", Ranch";
		break;
	case '5':
		sSAUCE = ", Italian";
		break;
	case '6':
		sSAUCE = "";
		break;
	default:
		cout << "Invalid Entry" << endl;
	}

	//DRINK selection cases
	switch (DRINK)
	{
	case '1':
		sDRINK = ", Coke";
		break;
	case '2':
		sDRINK = ", Sprite";
		break;
	case '3':
		sDRINK = ", Dr.Pepper";
		break;
	case '4':
		sDRINK = ", Diet Coke";
		break;
	case '5':
		sDRINK = ", Bottled Water";
		break;
	case '6':
		sDRINK = "";
		break;
	default:
		cout << "Invalid Entry" << endl;
	}

	//SIDE selection cases
	switch (SIDE)
	{
	case '1':
		sSIDE = ", Chips.";
		break;
	case '2':
		sSIDE = ", Apples.";
		break;
	case '3':
		sSIDE = ", Cookie.";
		break;
	case '4':
		sSIDE = ", Chili.";
		break;
	case '5':
		sSIDE = ", Soup.";
		break;
	case '6':
		sSIDE = ".";
		break;
	default:
		cout << "Invalid Entry" << endl;
	}
	
	if (BREAD == '6')
	{
		BALANCE = 7;
	} else {
		BALANCE = 6;
	}

	if (DRINK != '6'&& SIDE != '6')
	{
		BALANCE = BALANCE + 3;
	} else if (DRINK == '6'&& SIDE != '6')
	{
		BALANCE = BALANCE + 2;
	} else if (SIDE == '6'&& DRINK != '6')
	{
		BALANCE = BALANCE + 2;
	}

	if (BREAD == '6' && MEAT == '6' && CHEESE == '6' && VEGGIE == '6' && SAUCE == '6' && DRINK == '6' && SIDE == '6') 
	{
		cout << "\nYou ordered nothing. Have a great day!";
		BALANCE = 0;
	} else if (BREAD != '6')
	{
		cout << "\nYou ordered a sandwich on " << sBREAD << "with " << sMEAT << sCHEESE
			<< sVEGGIE << sSAUCE << sDRINK << sSIDE;

		if (SIDE == '6')
		{
			cout << ".";
		}

		if (SIDE != '6')
		{
			cout << "";

		}
	} else {
		cout << "\nYou ordered a salad with " << sMEAT << sCHEESE << sVEGGIE << sSAUCE
			<< sDRINK << sSIDE;

		if (SIDE == '6')
		{
			cout << ".";
		}
	
		if (SIDE != '6')
		{
			cout << "";

		}
	}

	//OUTPUT
	
	cout << "\nYour balance is: $" << BALANCE;

	//prevent console from closing
	_getch();


	return 0;

	//STOP
	}
	



