#include<iostream>
#include<string>

using namespace std;

int main() {
	// ประกาศตัวแปร
	int score[5];
	int totalscore = 0;
	double averagescore = 0.0;

	// รับค่าคะแนนจากผู้ใช้
	for (int i = 0; i < 5; i++) {
		cout << "Enter score " << (i + 1) << " scores: ";
		cin >> score[i];
		totalscore += score[i]; //คำนวณผลรวมคะแนน
	}

	// คำนวณค่าเฉลี่ย
	averagescore = totalscore / 5.0;

	// แสดงผลลัพธ์
	cout << "Scores Of Students: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Student " << (i + 1) << ": " << score[i] << endl;
	}
	cout << "Total score is: " << totalscore << endl;
	cout << "Average score is: " << averagescore << endl;


	return 0;
}