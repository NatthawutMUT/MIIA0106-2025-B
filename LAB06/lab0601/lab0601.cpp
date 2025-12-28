#include<iostream>
#include<string>


using namespace std;

int main() {

	int score1, score2, score3, score4, score5;
	int score6, score7, score8, score9, score10;
	cout << "Enter score 1 scores: ";
	cin >> score1;
	cout << "Enter score 2 scores: ";
	cin >> score2;
	cout << "Enter score 3 scores: ";
	cin >> score3;
	cout << "Enter score 4 scores: ";
	cin >> score4;
	cout << "Enter score 5 scores: ";
	cin >> score5;
	cout << "Enter score 6 scores: ";
	cin >> score6;
	cout << "Enter score 7 scores: ";
	cin >> score7;
	cout << "Enter score 8 scores: ";
	cin >> score8;
	cout << "Enter score 9 scores: ";
	cin >> score9;
	cout << "Enter score 10 scores: ";
	cin >> score10;

	int total = score1 + score2 + score3 + score4 + score5;
	double average = total / 5.0;
	cout << "Scores Of Students: " << endl;
	cout << "Student 1:" << score1 << endl;
	cout << "Student 2:" << score2 << endl;
	cout << "Student 3:" << score3 << endl;
	cout << "Student 4:" << score4 << endl;
	cout << "Student 5:" << score5 << endl;
	cout << "Student 6:" << score6 << endl;
	cout << "Student 7:" << score7 << endl;
	cout << "Student 8:" << score8 << endl;
	cout << "Student 9:" << score9 << endl;
	cout << "Student 10:" << score10 << endl;
	cout << "Total score is: " << total << endl;
	cout << "Average score is: " << average << endl;



	return 0;
}