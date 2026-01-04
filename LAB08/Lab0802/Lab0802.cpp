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
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
	for (int i = 0; i < SIZE; i++) { // วนลูปรับค่าข้อมูล
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
     		cout << "Enter student ID: ";
		cin >> students[i].studentIDs;
		cout << "Enter nickname: ";
		cin >> students[i].Nickname;
		cout << "Enter Line ID: ";
		cin >> students[i].LineID;
		cout << "Enter phone number: ";
		cin >> students[i].PhoneNumber;
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
	cout << "studentIDs\t Nickname\t LineID\t PhoneNumber \n"; // หัวข้อตาราง
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...
		cout << students[i].studentIDs << "\t" << students[i].Nickname << "\t" << students[i].LineID << "\t" << students[i].PhoneNumber << "\n"; // ข้อมูลที่แสดงผล
        cout << "----------------------\n";
    }

    return 0;
}
