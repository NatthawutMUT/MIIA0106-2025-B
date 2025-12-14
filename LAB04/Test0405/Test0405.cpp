#include <iostream>
#include <string>

using namespace std;

int main()
{

	int num=3;

	cout << "Multiplication table for " << num << ":\n";
	for (int i = 1; i <= 12; ++i) {
		cout << num << " x " << i << " = " << num * i << endl;
	}

	return 0;
}