// (-1)^k+1/k^3
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int k = 0;
	int sign = 1;
	double sum_mod = 0.0;
	double sum_ = 0.0;
	double eps = 1e-4;

	cout << " Sum where k-> infinity = (-1)^k+1/k^3" << endl;

	do
	{
	   k++;
	   sum_mod = (double)1/(k*k*k);
	   sum_ +=sign*sum_mod;
	   sign *= -1;
	}
	while (sum_mod>=eps);
	cout << "Sum= " << sum_<< endl;
	cout << "k= " << k << endl;
	_getch();
	return 0;
}
