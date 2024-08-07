#include <iostream>
#include <cmath>

using namespace std;

double derivation(int, int);

int main()
{
	int k, b, m;
	double derivative;
	cout << "input b - the degree of the expression " << endl;
	cout << " b="; cin >> b;
	cout << endl;
	cout << "input m - the limit of evaluation, for [m!=0 if b<0] " << endl;
	cout << " m="; cin >> m;
	cout <<endl;

	cout << "The derivative of f(x)= x^";
	cout << b;
	cout << "|^";
	cout << m;

	derivative=derivation(b, m);
	cout << endl;
	cout << derivative;

	return 0;
}

double derivation(int b, int m)
{
	double derivative;
	int z = b - 1;
	int k = pow(m, z);

	//derivative = b*f(x)^z;

	if (m < 0)
	{
		// derivative = b*(0)^z - b*(m)^z
		derivative = 0 - b * k;
	}

	else
	{
		// derivative = b*(m)^z - b*(0)^z;
		derivative = b * k;
	}

	return derivative;
}