
#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
	string studentIDs;// รหัสนักศึกษา
	string Nickname;// ชื่อเล่น
	string LineID;// ไลน์ไอดี
	string PhoneNumber;// เบอร์โทรศัพท์
};

int main() {
	Student s1; // ตัวแปรเดี่ยวของ struct ที่รวมตัวแปรย่อยไว้ด้วยกัน

    cout << "=== Input Student 1 ===\n";
   // TODO: cin >> ...
	cout << "Enter student ID: ";
	cin >> s1.studentIDs;
	cout << "Enter nickname: ";
	cin >> s1.Nickname;
	cout << "Enter Line ID: ";
	cin >> s1.LineID;
	cout << "Enter phone number: ";
	cin >> s1.PhoneNumber;


    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
	cout << "studentIDs:\tNickname\tLineID\tPhoneNumber \n"; // หัวข้อตาราง
	cout << s1.studentIDs << "\t" << s1.Nickname << "\t" << s1.LineID << "\t" << s1.PhoneNumber << "\n"; // ข้อมูลที่แสดงผล


    return 0;
}

