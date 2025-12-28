// รับคะแนน 3 วิชา math,c,eng จำนวน 5 คน
//math[5]
//c[5]
//eng[5]
// student[5][3]

#include <iostream>
#include<string>

using namespace std;

int main() {
	int student[5][3];

	for (int i = 0; i < 5; i++) {
		cout << "Enter scores for student " << i + 1 << ":\n";
		cin >> student[i][0]; // Math
		cout << "Enter score for student " << i + 1 << " :\n ";
		cin >> student[i][1]; // C
		cout << "Enter score for student " << i + 1 << " :\n ";
		cin >> student[i][2]; // English
	}

	for (int i = 0; i < 5; i++) {
	cout << "\n score for student" << i + 1 << ":\n ";
	cout << " Math: " << student[i][0] << "\n";
	cout << " C: " << student[i][1] << "\n";
	cout << " English: " << student[i][2] << "\n";

	}


	return 0;
}