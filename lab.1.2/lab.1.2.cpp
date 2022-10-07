#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a;
	double z1;
	double z2;
	cout << "a = "; cin >> a;
	z1 = (pow((1 + a + a * a) / (2 * a + a * a) + (2 - (1 - a + a * a) / (2 * a - a * a)), -1) * (5 - 2 * a * a));
	z2 = (4 - a * a) / 2;
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
