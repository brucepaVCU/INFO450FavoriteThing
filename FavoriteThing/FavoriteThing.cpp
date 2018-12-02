// FavoriteThing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "FavoriteCD.h"
#include "FavoriteCDList.h"
#include <iostream>
#include <string>
int main()
{
	string n = "------------------------------------------------------------------";
	size_t fieldWidth = n.size();

	cout << n << endl;
	cout << "------------------------------------------------------------------" << endl;
	cout << "* Welcome to MyFavorites.cpp! This program will ask you to input *" << endl;
	cout << "* certain fields regarding yourFavorite CD's. You may input up to*" << endl;
	cout << "* 100 CD's. When you're done inputting your CD's the program will*" << endl;
	cout << "* output a list with all the info you submit. Now enter your CD's*" << endl;
	cout << "* and behold the power of the program!!                          *\n" << endl;
	int count = 0;
	string art, art2, alb, alb2;
	FavoriteCDList List; // create list object 
	char answer = 'N';
	do
	{
		alb = "";
		art = "";
		FavoriteCD myCD;//create cd object
		if (count == 0)//gets data from user and adds first object to list
		{
			//cout << "here1" << endl;
			art = myCD.getArtist();
			alb = myCD.getAlbum();
			List.addCD(art, alb);
			//count++;
		}
		else if (count > 0) //Following code gets artist and album for next cd from user and checks that cd is not yet in List
		{
			//cout << "here2" << endl;
			art2 = myCD.getArtist();
			alb2 = myCD.getAlbum();
			if (List.isInList(art2, alb2) == false)
				List.addCD(art2, alb2);
			else 
				cout << "You have already entered this CD" << endl;
		}
		cout << "Do you want to enter another FavoriteCD? \nenter Y to continue:\t";
		cin >> answer;
		cin.ignore();
		cin.clear();
		count++;
		cout << "\n";


		/*cout << "Do you want to enter another FavoriteCD? \nenter Y to continue:\t";
		cin >> answer;
		count++;

		// need to clear theinput buffer before asking for another Favorite CD
		cin.ignore();
		cin.clear();*/
	} while ((answer == 'Y' || answer == 'y') && (count > 0)); //breaks when user selects Y || y to exit
	List.showList(); //function to display list to console
	system("pause");
	return 0;
}