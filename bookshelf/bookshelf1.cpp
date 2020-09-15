#include <iossream>
#indef pbook_h
#define pbook_h
#inlcude <string>
#include "Book.h"
Class book
{
public:
	string Name;
	int Pages;
	book()
	{
		Nmae = '-';
		Pages = 0;
	}
	string getName()
	{
		return Name;
	}
	int getPages()
	{
		return Pages;
	}
	void Print()
	{
		cout << "Book:" << Name << ",p." << pages << "\n"

	}
};


