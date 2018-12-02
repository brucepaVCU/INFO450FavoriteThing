#pragma once
#include <string>

using namespace std;
// FavoriteCD Class
class FavoriteCD
{
private: //private members of class FavoriteCD
	int ID;
	static int IDGenerator;
	string artistName;
	string albumTitle;
	int numSongs;
	int rating;
	double price;
public:
	FavoriteCD();
	void getFavoriteCD(string art, string alb);
	string getArtist();
	string getAlbum();
	string getAlbum2();
	string getArtist2();
	friend ostream& operator<<(ostream &o, FavoriteCD& cd); //overloaded << operator friend function for outputting list to console

};
