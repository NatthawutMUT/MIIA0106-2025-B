// TODO: แสดงค่า score, address และ pointer
#include <iostream>
using namespace std;

int main() {
    int score = 50;
    int* ptr = &score;

    // TODO
	cout << "Value of score: " << score << endl; // เก็บค่าของ score
	cout << "Address of score: " << &score << endl; // เก็บที่อยู่ของ score
	cout << "Value of ptr: " << ptr << endl; // เก็บที่อยู่ของ score ผ่านทาง pointer ptr
	cout << "Value pointed to by ptr: " << &ptr << endl; // เก็บค่าของ score ผ่านทาง pointer ptr


    return 0;
}
