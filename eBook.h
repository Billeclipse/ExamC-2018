#pragma once
#include "Book.h"
#define PDFTYPE "PDF"
#define MSWORDTYPE "MSWORD"

class eBook : public Book {
private:
	string type;
public:
	eBook(string, string, int, int, string);
	double PriceCalculation();
	void display();
};
