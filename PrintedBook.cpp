#pragma once
#include "PrintedBook.h"

PrintedBook::PrintedBook(string an, int p, int py, string t)
{
	authorName = an;
	pages = p;
	publishYear = py;
	title = t;
}

double PrintedBook::PriceCalculation()
{
	int price = 0;
	if (pages < 300)
	{
		price = 10;
	}
	else if (pages >= 300 && pages <= 600)
	{
		price = 20;
	}
	else if (pages > 600)
	{
		price = 30;
		if (publishYear < 1990)
		{
			price += 10;
		}
	}
	return price;
}

void PrintedBook::display()
{
	cout << "Author Name: " << authorName << endl;
	cout << "Pages: " << pages << endl;
	cout << "Publish Year: " << publishYear << endl;
	cout << "Title: " << title << endl;
}
