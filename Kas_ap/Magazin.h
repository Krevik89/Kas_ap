#pragma once
#include <iostream>
#include "FileM.h"
using namespace std;

class Magazin
{
	double all_money;
public:
	
	double getMoney() {
		return all_money;
	}
	void Menu() {
		Product* p;
		double m = 0;

		FileM prod("Product.txt");//загрузка продуктов
		FileM money("Money.txt");//загрузка выручки магаза

		p = prod.LoadProd(); //P Это масив структур
		m = money.LoadMoney(); //M это даубл переменая
		//вывод меню
		for (int i = 0; i < 5; i++)
		{
			printf("%s\t%d\t%0.2f\n", p[i].title, p[i].count, p[i].price);
		}
		//вывод выручки
		printf("%s %0.2f", "Выручка", m);
	}

};

