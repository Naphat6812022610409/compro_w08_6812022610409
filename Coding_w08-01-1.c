#include <stdio.h>

int main() {
    int i = 2;

    // ใช้ while loop แสดงตัวเลขคู่จาก 2 ถึง 10
    while (i <= 10) {
        printf("%d ", i);
        i += 2;
    }

    printf("\nEnd of loop\n");
    return 0;
}