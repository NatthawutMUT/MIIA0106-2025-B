#include <iostream> // สำหรับการรับ-แสดงผล

using namespace std;

int main() {
    int a, b;
    b = 0; // ประกาศตัวแปร sum เก็บผลรวม เริ่มต้นที่ 0
    for (a=1; a <= 100; a++) { // วนลูปตั้งแต่ i=1 ถึง 100
        b += a; // นำค่า i (1, 2, 3, ...) ไปบวกเพิ่มใน sum
    }
    cout << "ผลรวมของเลข  " << b << endl; // แสดงผลลัพธ์
    return 0;
}
