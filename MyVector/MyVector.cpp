#include "MyVector.h"
#include <iostream>
#include <algorithm>
using namespace std;

MyVector::MyVector(int size)
{
	// alusta taulukko new sanalla kokoon size
	// alusta index 0:aan. 
	cout << "Konstruktori 1 kutsuttu" << endl;
	index = 0;
	myArray = new int[size];
	maxSize = size;
	currentSize = 0;
}

MyVector::~MyVector()
{
	// delete [] taulukko
	// delete taulukko
	cout << "destruktori kutsuttu" << std::endl;
	delete[] myArray;
	delete myArray;
}

void MyVector::add(int uusiAlkio)
{
		int findIndex = findNextFreeIndex();

		if (findIndex == -1)
		{
			resize(maxSize + 10);
			add(uusiAlkio);
		}
		else if (findIndex >= maxSize)
		{
			resize(maxSize + 10);
		}
		// add num to myArray
		if (findIndex == index)
		{
			//vasta jälkeenpäin
			index++;
			currentSize++;
		}
	
	
	// luuppaa alusta indexiin, jos -1, laita num siihen
	// jos index + 1 > size --> kutsu resize
	// else taulukko[index] = num

}

void MyVector::print()
{
	for (int i = 0; i < currentSize; ++i)
	{
		if (myArray[i] != -1 )
		{
			cout << myArray[i] << " ";
		}
		
	}
	cout << endl;
	// tiedoston alkuun #include <iostream>
	// for loopilla i = 0, size asti 
	// jos ei -1 niin cout...
}

void MyVector::deleteIndex(int i)
{
	myArray[i] = -1;
	// taulukko [i] = -1
}

bool MyVector::hasNum(int num)
{
	for (int i = 0; i < currentSize; ++i)
	{
		if (myArray[i] == num)
		{
			return true;
		}
	}
	return false;
	// for loopilla alusta loppuun, onko arvo num, jos on
	// return true; jos ei niin return false;
}

void MyVector::resize(int size)
{
	if (maxSize == 0)
	{
		myArray = new int[size];
		fill_n(myArray, size, -1);
		maxSize = size;
	}
	// int *taulukko2 = new int[size];
	// etsi netistä c++ copy array / tai for loo, ja siirrä arvo toiseen
	// alusta taulukko  = new [size*2]
	// size = size*2
	// delete[] taulukko2
	// delete taulukko2
}

int MyVector::findNextFreeIndex()
{
	for (int i = 0; i <= maxSize; i++)
	{
		if (myArray[i] == -1)
		{
			return i;
		}
	}

	return -1;
}