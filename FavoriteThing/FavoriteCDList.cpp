#include "pch.h"
#include "FavoriteCDList.h"
#include <string>
#include <iostream>

using namespace std;

// Favorite CD List constructor
FavoriteCDList::FavoriteCDList()
{
	numCDs = 0;
};

// checks if favorite cd is already in list
bool FavoriteCDList::isInList(string& art, string& alb)
{
	bool x = false;
	for (int i = 0; i < numCDs; i++)
	{
		if ((art == myList[i].getArtist2()) && (alb == myList[i].getAlbum2()))
			x = true;
	}
	return x;
}

// adds a Favorite CD object to the list
void FavoriteCDList::addCD(string art, string alb)
{
	myList[numCDs].getFavoriteCD(art, alb);//adds CD object to next position in List array
	numCDs++; // keeps track of the number of CDs 

};

//displays list to the console by incrementing through and printing each object
void FavoriteCDList::showList()
{
	int i;
	for (i = 0; i < numCDs; i++)
		cout << myList[i] << endl;
};