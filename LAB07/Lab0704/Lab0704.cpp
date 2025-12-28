// TODO: แสดงค่าทุกตัวใน array โดยใช้ pointer เท่านั้น
#include <iostream>
using namespace std;

int main() {
	int arr[] = { 10, 20, 30, 40 };// ประกาศอาเรย์ arr ที่เก็บค่า 10, 20, 30, 40
	int* p = arr; // กำหนด pointer prt ให้ชี้ไปยังอาเรย์ arr

    // TODO
    cout << "arr[0] = " << arr[0] << endl;       // แสดงค่าของ arr[0]
	cout << "*p   =" << *p << endl;          // แสดงค่าที่ pointer prt ชี้ไป

	cout << "arr[1]  =" << arr[1] << endl;       // แสดงค่าของ arr[1]
	cout << "*(p+1)=" << *(p + 1) << endl;  // แสดงค่าที่ pointer prt+1 ชี้ไป

	cout << "arr[2]  =" << arr[2] << endl;       // แสดงค่าของ arr[2]
	cout << "*(p+2)=" << *(p + 2) << endl;  // แสดงค่าที่ pointer prt+2 ชี้ไป

    return 0;
}
