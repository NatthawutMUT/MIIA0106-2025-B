#include <iostream> // สำหรับ cin, cout
#include <cstdlib>  // สำหรับ rand(), srand()
#include <ctime>    // สำหรับ time()

using namespace std;


int main() {
	// 1. ตั้งค่า Seed สำหรับการสุ่มตัวเลข
	srand(time(0)); // ใช้เวลาปัจจุบันเป็นค่าเริ่มต้นเพื่อให้ได้เลขสุ่มที่ต่างกันทุกครั้ง

	// 2. สุ่มตัวเลขระหว่าง 1 ถึง 100
	int secretNumber = rand() % 100 + 1; // rand() % 100 ได้ 0-99, + 1 ได้ 1-100

	int guess; // ตัวแปรเก็บค่าที่ผู้ใช้ทาย
	int attempts = 0; // ตัวแปรนับจำนวนครั้งที่ทาย (ไม่บังคับ)

	cout << "===== เกมทายตัวเลข (1-100) =====" << endl;
	cout << "คอมพิวเตอร์สุ่มตัวเลขไว้แล้ว! ลองทายดูสิ..." << endl;

	// 3. Loop ให้ผู้ใช้ทายจนกว่าจะถูก
	do {
		cout << "กรอกตัวเลขที่คุณทาย (1-100): ";
		cin >> guess; // รับค่าจากผู้ใช้
		attempts++; // เพิ่มจำนวนครั้งที่ทาย

		// 4. ตรวจสอบค่าที่ทาย
		if (guess < secretNumber) {
			cout << "น้อยเกินไป! ลองทายเลขที่มากกว่านี้ดูสิ" << endl;
		}
		else if (guess > secretNumber) {
			cout << "มากเกินไป! ลองทายเลขที่น้อยกว่านี้ดูสิ" << endl;
		}
		else {
			// 5. ทายถูก
			cout << "\nยินดีด้วย! คุณทายถูกแล้ว!" << endl;
			cout << "ตัวเลขที่ถูกต้องคือ " << secretNumber << endl;
			cout << "คุณใช้ไปทั้งหมด " << attempts << " ครั้ง" << endl;
		}
	} while (guess != secretNumber); // Loop ต่อไปเรื่อยๆ จนกว่า guess จะเท่ากับ secretNumber

	return 0; // จบโปรแกรม
}
