#pragma once
#include "FavoriteCD.h"
#include <string>


using namespace std;

// FavoriteCD List Class
class FavoriteCDList
{
protected:
	int numCDs;
	FavoriteCD myList[100];//creates array of FavoriteCD objects
public:
	FavoriteCDList();
	void addCD(string art, string alb);
	void showList();
	bool isInList(string& art, string& alb);
};