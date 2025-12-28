// TODO: Bubble Sort แบบมากไปน้อย ด้วย pointer
#include <iostream>
using namespace std;

void printArray(int* p, int size) {
    // TODO
    for (int i = 0; i < size; i++) {
		cout << *(p + i) << " "; // แสดงค่าของอาเรย์โดยใช้ pointer
	}
}

void swapValue(int* a, int* b) {
    // TODO
	int temp = *a;
	*a = *b;
	*b = temp;

}

void sortDescending(int* p, int size) {
    // TODO
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(p + i) < *(p + j)) {
                swapValue((p + i), (p + j));
            }
        }
	}
}

int main() {
    int arr[] = { 5, 2, 9, 1, 3 };
    int size = 5;

	cout << "Before sorting: ";//ประกาศผลก่อนเรียงลำดับ
	printArray(arr, size); // เรียกใช้ฟังก์ชัน printArray เพื่อแสดงผลอาเรย์
    cout << endl;
	sortDescending(arr, size); // เรียกใช้ฟังก์ชัน sortDescending เพื่อเรียงลำดับอาเรย์
	cout << "After sorting: "; //ประกาศผลหลังเรียงลำดับ
	printArray(arr, size); // เรียกใช้ฟังก์ชัน printArray เพื่อแสดงผลอาเรย์
    cout << endl;
    return 0;
}