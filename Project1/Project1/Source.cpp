#include <iostream>
using namespace std;

int Summ(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
	return a - b;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << Summ(a, b) << endl;
	cout << Minus(a, b) << endl;
	return 0;
}