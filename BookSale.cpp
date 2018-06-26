#include "BookSale.h"

BookSale::BookSale(string bsn)
{
	bookStoreName = bsn;
}

void BookSale::addSale(Book *sold_book)
{
	soldBooks.push_back(sold_book);
}

void BookSale::display()
{
	cout << "Sold Books of " << bookStoreName << endl;
	cout << "------------" << endl;
	for (unsigned i = 0; i < soldBooks.size(); i++)
	{
		soldBooks.at(i)->display();
		cout << "-----------------------" << endl;
	}
	cout << endl;
}

double BookSale::GetTotalCost()
{
	double total_cost = 0;
	for (unsigned i = 0; i < soldBooks.size(); i++)
	{
		total_cost += soldBooks.at(i)->PriceCalculation();
	}
	return total_cost;
}

int BookSale::SalesCount(string author_name)
{
	int sales_count = 0;
	for (unsigned i = 0; i < soldBooks.size(); i++)
	{
		if (soldBooks.at(i)->getAuthorName().compare(author_name) == 0)
		{
			sales_count++;
		}
	}
	return sales_count;
}

bool BookSale::operator>(BookSale other)
{
	if (this->GetTotalCost() > other.GetTotalCost())
	{
		return true;
	}
	else
	{
		return false;
	}
}

string BookSale::getBookStoreName()
{
	return bookStoreName;
}
