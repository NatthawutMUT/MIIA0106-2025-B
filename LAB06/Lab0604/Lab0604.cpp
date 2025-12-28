// รับคะแนน 3 วิชา math,c,eng จำนวน 5 คน
//math[5]
//c[5]
//eng[5]
// student[5][3]

#include <iostream>
#include<string>

using namespace std;

int main() {
	int math[5], c[5], eng[5];

	for (int i = 0; i < 5; i++) {
		cout << "Enter scores for student " << i + 1 << ":\n";
		cout << "Math: ";
		cin >> math[i];
		cout << "C: ";
		cin >> c[i];
		cout << "English: ";
		cin >> eng[i];
	}

	for (int i = 0; i < 5; i++) {
		int total = math[i] + c[i] + eng[i];
		double average = total / 3.0;
		cout << "Student " << i + 1 << " - Total: " << total << ", Average: " << average << endl;
	}





	return 0;
}