#pragma once
#include <iostream>
using namespace std;

class Buyer
{
	double _money;
public:
	Buyer(double m):_money{m}{}
	double getMoney() {
		return _money;
	}
};

