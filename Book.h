#ifndef Book_H
#define Book_H
#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
	string authorName;
	int pages;
	int publishYear;
	string title;
public:
	virtual void display() = 0;
	virtual double PriceCalculation() = 0;
	virtual string getAuthorName();
};
#endif
