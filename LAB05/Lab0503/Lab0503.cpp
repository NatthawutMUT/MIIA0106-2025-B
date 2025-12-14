#include<iostream>
#include<string>

using namespace std;

//การส่งค่าด้วย call by value
// ค่าที่ส่งเข้าไปในฟังก์ชันจะถูกคัดลอกไปยังตัวแปรภายในฟังก์ชัน
// การเปลี่ยนแปลงค่าของตัวแปรภายในฟังก์ชันจะไม่ส่งผลกระทบต่อตัวแปรต้นฉบับ
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "After swap (in swap function):" << endl;
	cout << "a =" << a << ",b =" << b << endl;
}
//การส่งค่าด้วย call by reference
// ตัวแปรที่ส่งเข้าไปในฟังก์ชันจะถูกส่งเป็นการอ้างอิง
// การเปลี่ยนแปลงค่าของตัวแปรภายในฟังก์ชันจะส่งผลกระทบต่อตัวแปรต้นฉบับ
void swab(int& c, int& d) {
	int temp = c;
	c = d;
	d = temp;
	cout << "After swap (in swab function):" << endl;
	cout << "c =" << c << ",d =" << d << endl;
}

int main() {
	int a,b,c,d;

	cout << "Enter a integers :" ;
	cin >> a;
	cout << "Enter b integers :" ;
	cin >> b;
	cout << "Enter c integers :" ;
	cin >> c;
	cout << "Enter d integers :";
	cin >> d;


	cout << "Before swap :" << endl;
	cout << "a = " << a << ",b = " << b << endl;
	cout << "c = " << c << ",d = " << d << endl;

	swap(a, b);
	swab(c, d); 

	cout << "After swap (in main):" << endl;
	cout << "a =" << a << ",b =" << b << endl;
	cout << "c =" << c << ",d =" << d << endl;


	return 1;
}