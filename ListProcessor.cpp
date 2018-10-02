// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "stdafx.h"

#include "LinkedList.h"

using namespace std;


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl;
	cout << "cows size: " << cows.listSize() << endl;
	cout << "cows sum: " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "size: " << cows.listSize() << endl; 
	cout << "sum: " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "horses size: " << horses.listSize() << endl;
	cout << "horses sum: " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "cows size: " << cows.listSize() << endl;
	cout << "cows sum: " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "horses size: " << horses.listSize() << endl;
	cout << "horses sum: " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs size: " << pigs.listSize() << endl;
	cout << "pigs sum: " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs size: " << pigs.listSize() << endl;
	cout << "pigs sum: " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs size: " << pigs.listSize() << endl;
	cout << "pigs sum: " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

	pigs.insertAtEnd(2.5);
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "pigs size: " << pigs.listSize() << endl;
	cout << "pigs sum: " << pigs.sum() << endl << endl;


	return 0;
}


