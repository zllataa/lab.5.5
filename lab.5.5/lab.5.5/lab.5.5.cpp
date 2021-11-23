#include <iostream>
#include <cmath>

using namespace std;

int f(int n)
{
	if (n == 1)
	{
		return 1;
	}

	else if (n % 2 == 0)
	{
		return 2 * f(n/2) - 1;
	}

	else if (n % 2 == 1)
	{
		return 2 * f(n / 2) + 1;
	}
}

int main()
{
	int n;
	cout << "n= "; cin >> n;
	cout << "k= " << f(n/2) << endl;
	cout << "x= " << f(n) << endl;
	return 0;

}