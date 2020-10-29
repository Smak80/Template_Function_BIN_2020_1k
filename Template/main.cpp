#include <iostream>
using namespace std;

#include "bin3.h"

void show(int* res, int sz)
{
	for (int i = 0; i<sz; i++)
	{
		cout << res[i];
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "Rus");
	double x = 13.13;
	int sz;
	int* res;

	sz = bin<char>(x, res);
	show(res, sz);
	delete[] res;
	sz = bin<unsigned short>(x, res);
	show(res, sz);
	delete[] res;
	sz = bin<int>(x, res);
	show(res, sz);
	delete[] res;
	sz = bin<long long>(x, res);
	show(res, sz);
	delete[] res;
	sz = bin<float>(x, res);
	show(res, sz);
	delete[] res;
	sz = bin<double>(x, res);
	show(res, sz);
	delete[] res;
	system("pause");
}
