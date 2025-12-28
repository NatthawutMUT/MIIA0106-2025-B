#include <iostream> // สำหรับ cin, cout
#include <cmath>    // สำหรับ sqrt()

using namespace std;

// ฟังก์ชันสำหรับตรวจสอบว่าตัวเลขเป็นจำนวนเฉพาะหรือไม่
bool isPrime(int num) {
    // 1. จัดการกรณีพิเศษ: จำนวนน้อยกว่า 2 ไม่ใช่จำนวนเฉพาะ
    if (num < 2) {
        return false;
    }

    // 2. วนลูปตั้งแต่ 2 ถึงรากที่สองของ num เพื่อหาตัวหาร
    // การวนถึง sqrt(num) ช่วยเพิ่มประสิทธิภาพ [1, 3]
    for (int i = 2; i * i <= num; ++i) { // หรือใช้ i <= sqrt(num) [1, 8]
        if (num % i == 0) {
            // ถ้าหารลงตัว แสดงว่ามีตัวหารอื่นที่ไม่ใช่ 1 และตัวมันเอง
            return false; // ไม่ใช่จำนวนเฉพาะ
        }
    }

    // 3. ถ้าไม่เจอตัวหารในลูป แสดงว่าเป็นจำนวนเฉพาะ
    return true;
}

int main() {
    int number;
    cout << "ป้อนจำนวนเต็ม: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " เป็นจำนวนเฉพาะ" << endl;
    }
    else {
        cout << number << " ไม่ใช่จำนวนเฉพาะ" << endl;
    }

    return 0;
}
