#include "Book.h"

class PrintedBook : public Book {
public:
	PrintedBook(string, int, int, string);
	double PriceCalculation();
	void display();
};
