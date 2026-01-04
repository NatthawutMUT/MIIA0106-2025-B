#include <iostream>
#include <string>
using namespace std;

// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) เขียน swapStudent(Student&, Student&) (ห้ามใช้ swap library)
// TODO 3) เขียน sortByID(Student[], size) ให้เรียง id น้อย -> มาก
// TODO 4) รับข้อมูล 5 คน แล้วเรียง แล้วแสดงผล

struct Student {
    // TODO
    string studentIDs;// รหัสนักศึกษา
    string Nickname;// ชื่อเล่น
    string LineID;// ไลน์ไอดี
    string PhoneNumber;// เบอร์โทรศัพท์
};

// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) { 
    // TODO
	Student temp = a;
    a = b;
	b = temp;
}

// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size) { 
    // TODO
    for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) { // วนลูปเปรียบเทียบ
			if (students[j].studentIDs > students[j + 1].studentIDs) { // ถ้า id ตัวหน้ามากกว่าตัวหลัง ให้สลับตำแหน่ง
				swapStudent(students[j], students[j + 1]); // เรียกใช้ฟังก์ชัน swap เพื่อสลับตำแหน่ง
            }
        }
	}
}

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        // TODO: cout << students[i]...
		cout << "studentIDs:\tNickname\tLineID\tPhoneNumber \n"; // หัวข้อตาราง
		cout << students[i].studentIDs << "\t" << students[i].Nickname << "\t" << students[i].LineID << "\t" << students[i].PhoneNumber << "\n"; // ข้อมูลที่แสดงผล
        cout << "----------------------\n";
    }
}
int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
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
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
