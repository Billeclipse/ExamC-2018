#include "BookSale.h"

void main()
{
	BookSale book_sale("My Book Store");
	BookSale book_sale2("My Book Store 2");
	book_sale.addSale(new PrintedBook("Tom", 200, 2000, "The Best Book Ever"));
	book_sale.addSale(new PrintedBook("Jerry", 400, 2004, "No Mine is The Best Book Ever"));
	book_sale.addSale(new eBook(PDFTYPE,"Mickey", 600, 2005, "No Mine is The Best Book Ever 2"));
	book_sale.addSale(new eBook(MSWORDTYPE, "Pluto", 750, 2010, "No Mine is The Best Book Ever 3"));
	book_sale.addSale(new eBook(PDFTYPE, "Goofy", 1000, 2018, "No Mine is The Best Book Ever Final"));

	book_sale2.addSale(new PrintedBook("Something", 350, 2011, "BlaBlaBla"));
	book_sale2.addSale(new eBook(MSWORDTYPE, "Else", 150, 2012, "BlaBlaBla 2"));
	book_sale2.addSale(new eBook(PDFTYPE, "Than", 800, 2013, "BlaBlaBla 3"));
	book_sale2.addSale(new eBook(MSWORDTYPE, "CartoonCharacters", 999, 2014, "BlaBlaBla Final"));
	
	book_sale.display();
	cout << "Book Store's Total Cost: " << book_sale.GetTotalCost() << endl;
	cout << "Book Store's Count of Tom: " << book_sale.SalesCount("Tom") << endl;
	
	if (book_sale > book_sale2)
	{
		cout << "Book Store \"" << book_sale.getBookStoreName();
		cout << "\" has better book sales than \"" << book_sale2.getBookStoreName() << "\"" << endl;
	}
	else
	{
		cout << "Book Store \"" << book_sale2.getBookStoreName();
		cout << "\" has better book sales than \"" << book_sale.getBookStoreName() << "\"" << endl;
	}

	system("Pause");
}
