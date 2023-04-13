#pragma once
#include <iostream>
using namespace std;

struct Product{
	char title[20];
	int count;
	float price;
};

class FileM
{
	FILE* f;
	char path[30];
public:
	FileM(const char* p) {
		strcpy_s(path, p);
		
	}
	~FileM() {
		if (f) fclose(f);
	}

	Product* LoadProd() {
		char Prod[30] = { "Product.txt" };
		if (strcmp(path, Prod) == 0) {
			int i = 0;
			char mas[100];
			int h = 0;

			fopen_s(&f, path, "r");
			while (!feof(f))
			{
				fgets(mas, 100, f);
				i++;
			}
			fclose(f);

			Product* p = new Product[i];
			
			fopen_s(&f, path, "r");
			while (!feof(f))
			{
				fscanf_s(f, "%s", p[h].title, 25);
				fscanf_s(f, "%d", &p[h].count);
				fscanf_s(f, "%f", &p[h].price, sizeof(float));
				h++;
			}
			fclose(f);

			return p;
		}

	}
	double LoadMoney() {
		char many[30] = { "Money.txt" };
		float Bablo = 0;
		if (strcmp(path, many) == 0) {
			fopen_s(&f, path, "r");
			while (!feof(f)) {
				fscanf_s(f, "%f", &Bablo);
			}
			fclose(f);
			return Bablo;
		}
	}
	void SaveProd_money(Product*p,double m,int size) {
		fopen_s(&f, "Sklad.txt", "w");
		for (int i = 0; i < size; i++)
		{
			fprintf(f, "%s ", p[i].title, 25);
			fprintf(f, "%d ", p[i].count);
			fprintf(f, "%0.2f\n", p[i].price);
		}
		fclose(f);
		fopen_s(&f, "Nall.txt", "w");
		fprintf(f, "%d", m);
		fclose(f);
		cout << "Информация успешно сохранена!!!";
	}

};

