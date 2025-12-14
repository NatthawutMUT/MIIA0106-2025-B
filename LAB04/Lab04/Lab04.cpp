#include<iostream>
#include<string>


using namespace std;

int main() {
	string name = "Natthawut";

	// cout แสดงผลข้อความ "Test Lab 04" และ "Test Lab04-01"
	cout << "Test Lab 04 \n";
	cout << "Test Lab04-01"<< endl;
	cout << "Please enter You Name";
	
	
	// cin >> name; //เจอช่อง่วางจะหยุดรับค่า
	cin >> name;
	cin.ignore();  //ล้าง buffer

	//getline รับค่าชื่อจากผู้ใช้และเก็บในตัวแปร name
	getline(cin, name);

	

	cout << "MyName is" << name << "\n--------"<< endl;




	
	return 0;
}

