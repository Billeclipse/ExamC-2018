#pragma once
#include "eBook.h"
#include "PrintedBook.h"
#include <vector>

class BookSale {
private:
	string bookStoreName;
	vector<Book*> soldBooks;
public:
	BookSale(string);
	void addSale(Book*);
	void display();
	double GetTotalCost();
	int SalesCount(string);
	bool operator > (BookSale other);
	string getBookStoreName();
};
