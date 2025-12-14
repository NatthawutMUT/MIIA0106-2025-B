#include<iostream>
#include<string>

using namespace std;

int main() {

	int i = 0;

	cout << "----Start --- \n";

	for (i = 20; i > 0; i--) {
		if (i % 2 != 0)
			continue;

		cout << "i= " << i << "\n";
	}



	return 0;


}