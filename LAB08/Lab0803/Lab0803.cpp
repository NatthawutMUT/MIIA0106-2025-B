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

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s) {
    // TODO
	cout << "studentIDs:\tNickname\tLineID\tPhoneNumber \n"; // หัวข้อตาราง
	cout << s.studentIDs << "\t" << s.Nickname << "\t" << s.LineID << "\t" << s.PhoneNumber << "\n"; // ข้อมูลที่แสดงผล

}
// TODOO : เขียนฟังก์ชันนี้ เพื่อรับข้อมูลนักศึกษา
void inputStudent(Student &s) {
    // TODO
    cout << "Enter student ID: ";
    cin >> s.studentIDs;
    cout << "Enter nickname: ";
    cin >> s.Nickname;
    cout << "Enter Line ID: ";
    cin >> s.LineID;
    cout << "Enter phone number: ";
    cin >> s.PhoneNumber;
}
int main() {
	Student s; // ตัวแปรเดี่ยวของ struct ที่รวมตัวแปรย่อยไว้ด้วยกัน ใน s

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
	inputStudent(s);


    cout << "\n=== Output (from function) ===\n";
    // TODO: เรียก printStudent
	printStudent(s); // เรียกใช้ฟังก์ชันเพื่อแสดงผลข้อมูลแสดงผล


    return 0;
}

