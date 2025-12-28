//รับชื่อ
//รับรหัสนักศึกษา
//รับคะแนนนักศึกษา
//แสดงผลลัพธ์ ชื่อ รหัสนักศึกษา คะแนน และเกรดให้สร้างเป็น Function

#include<iostream>
#include<string>

using namespace std;

int main() {
	string name;
	string id;
	double score;
	char grade;
	cout << "Enter student name: ";
	getline(cin, name);
	cout << "Enter student ID: ";
	cin >> id;
	cout << "Enter score: ";
	cin >> score;
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';	
	cout << "\nStudent Information:" << endl;
	cout << "Student Name: " << name << endl;
	cout << "Student ID: " << id << endl;
	cout << "Score: " << score << endl;
	cout << "Grade: " << grade << endl;

	






	return 0;
}