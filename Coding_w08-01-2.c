#include <stdio.h>

int main() {
    // ใช้ for loop แสดงตัวเลขคู่จาก 2 ถึง 10
    for (int i = 2; i <= 10; i += 2) {
        printf("%d ", i);
    }

    printf("\nEnd of loop\n");
    return 0;
}