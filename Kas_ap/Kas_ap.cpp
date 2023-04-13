#include <iostream>
#include "Magazin.h"
#include "Cashier.h"
#include "Buyer.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "");
	Magazin M1;
	M1.Menu();
	/*Product* p;
	double m = 0;

	FileM prod("Product.txt");
	FileM mony("Money.txt");

	p = prod.LoadProd();
	m = mony.LoadMoney();

	for (int i = 0; i < 5; i++)
	{
		printf("%s\t%d\t%0.2f\n", p[i].title, p[i].count, p[i].price);
	}
	printf("%s %0.2f", "Выручка", m);*/
	//prod.SaveProd_money(p,m, 5);

}

