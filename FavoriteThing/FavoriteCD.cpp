#include "pch.h"
#include "FavoriteCD.h"
#include <string>
#include <iostream>

using namespace std;

// intialize the static variable to be used when generating the ID
int FavoriteCD::IDGenerator = 1;

// Constructor
FavoriteCD::FavoriteCD()
{
	ID = IDGenerator++;
	artistName = "";
	albumTitle = "";
	numSongs = 0;
	rating = 0;
	price = 0;
};

// overloaded insertion operation << for printing object to the console
ostream& operator<<(ostream &o, FavoriteCD& cd)
{
	o << "-----------------------------------------" << endl;
	o << "Favorite CD: (" << cd.ID << ")" << endl;
	o << "Artist: " << cd.artistName << endl;
	o << "Album: " << cd.albumTitle << endl;
	o << "Number of Songs: " << cd.numSongs << endl;
	o << "CD Rating(1-5): " << cd.rating << endl;
	o << "Price: " << cd.price << endl;
	o << "-----------------------------------------" << endl;

	return o;
};

// gets input from the user for the Favorite CD object
void FavoriteCD::getFavoriteCD(string art, string alb)
{
	artistName = art;
	albumTitle = alb;
	cout << "\nHow many songs on cd?: \t";
	cin >> numSongs;
	cout << "\nWhat do you rate this album(1-5)?:\t ";
	cin >> rating;
	cout << "\nEnter price of cd: \t";
	cin >> price;
	cin.ignore();
	cin.clear();
};

string FavoriteCD::getArtist()//function to get artist name from user
{
	string art;
	cout << "\nEnter the artist's name: \t";
	getline(cin, art);
	return art;
};
string FavoriteCD::getArtist2()//function to get artist from FavoriteCDList array
{
	string *art2 = &artistName;
	string temp1 = *art2;
	return temp1;
};

string FavoriteCD::getAlbum()//function to get album from user
{
	string alb;
	cout << "\nenter album Title: \t ";
	getline(cin, alb);
	return alb;
};
string FavoriteCD::getAlbum2()//function to get album from FavoriteCD List array
{
	string *alb2 = &albumTitle;
	string temp = *alb2;
	return temp;
};