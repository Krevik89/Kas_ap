#pragma once
#include <iostream>
using namespace std;

class Cashier
{
	char _name[25];
	double _money;
public:
	Cashier(const char* n, double m):_money { m }{
		strcpy_s(_name, n);
	}
	void Print() {
		cout << _name << " " << _money;
	}
	double Chek(double price,int count) {
		double allm = price * count;
		cout << "К оплате: " << allm << "$";
		return  allm;
	}
};

