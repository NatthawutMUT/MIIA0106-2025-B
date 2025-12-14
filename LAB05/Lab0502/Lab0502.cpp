#include<iostream>
#include<string>

using namespace std;

int maxofThree(int a, int b, int c)
{
	if (a >= b && a >= c)
		return a;
	else if (b >= a && b >= c)
		return b;
	else
		return c;
	
}
int minofThree(int a, int b, int c)
{
	if (a <= b && a <= c)
		return a;
	else if (b <= a && b <= c)
		return b;
	else
		return c;
}

int main()
{
	int a, b, c;
	int maxvalue = 1000000;
	int minvalue = -1000000;

	cout << "Enter a integers: ";
	cin >> a;
	cout << "Enter b integers: ";
	cin >> b;
	cout << "Enter c integers: ";
	cin >> c;

	maxvalue = maxofThree(a, b, c);
	cout << "The maximum value is: " << maxvalue << endl;

	minvalue = minofThree(a, b, c);
	cout << "The minimum value is: " << minvalue << endl;


	return 1;
}