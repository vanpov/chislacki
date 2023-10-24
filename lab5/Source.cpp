//Лаба 5, вариант 1

#include <iostream>
#include <cmath>

using namespace std;



double func(double x)
{
	return sqrt(1 + pow(x, 3));
}


int main()
{
	//first method
	double a = 0.8;

	double b = 1.762;

	int n = 0;
	cout << "n?\n";
	cin >> n;

	double h = 0;
	h = (b - a) / n;

	double result = 0;

	double x0 = func(a);
	double xn = func(b);

	double xi = 0;

	for (double i = a + h; i < b; i = i + h)
	{
		xi = xi + func(i);
	}
	result = (0.5 * h) * (x0 + 2 * xi + xn);

	cout << result << endl;




	//second method
	double res2 = 0;

	int m = 1;

	while (m % 2 != 0)
	{
		cout << "m?\n";
		cin >> m;
	}

	h = (b - a) / m;

	x0 = func(a);
	xn = func(b);

	//нечетные


	double xnech = 0;


	for (double i = a + h; i < b; i = i + 2 * h)
	{
		xnech = xnech + func(i);
	}

	//четные

	double xch = 0;


	for (double i = a + 2 * h; i < b; i = i + 2 * h)
	{
		xch = xch + func(i);

	}

	res2 = (h / 3) * (x0 + xn + 4 * xnech + 2 * xch);
	cout << res2 << endl;
}