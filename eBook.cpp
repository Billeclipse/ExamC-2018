#pragma once
#include "eBook.h"

eBook::eBook(string ty, string an, int p, int py, string t)
{
	type = ty;
	authorName = an;
	pages = p;
	publishYear = py;
	title = t;	
}

double eBook::PriceCalculation()
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
	if (type.compare(PDFTYPE) == 0)
	{
		price += 10;
	}
	else if (type.compare(MSWORDTYPE) == 0)
	{
		price += 20;
	}
	return price;
}

void eBook::display()
{
	cout << "Author Name: " << authorName << endl;
	cout << "Pages: " << pages << endl;
	cout << "Publish Year: " << publishYear << endl;
	cout << "Title: " << title << endl;
	cout << "Ebook Type: " << type << endl;
}
