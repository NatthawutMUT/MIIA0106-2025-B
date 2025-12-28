// TODO: เปลี่ยนค่า a ผ่าน pointer
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* p = &a;

    // TODO
	
	cout << "Value of a: " << a << endl; // แสดงค่าของ a ผ่านทาง pointer p
    *p = 100; // เปลี่ยนค่าของ a ผ่านทาง pointer p
	cout << "Address of a: " << p << endl; // แสดงที่อยู่ของ a ผ่านทาง pointer p
	cout << "Value pointed to by p: " << *p << endl; // แสดงค่าที่ pointer p ชี้ไป
	cout << "address of p: " << &p << endl; // แสดงที่อยู่ของ pointer p


    cout << "a = " << a << endl;
    return 0;
}
