#include <stdio.h>

int main() {
    int start_number, stop_number;

    // รับค่าจากผู้ใช้
    printf("Enter start number: ");
    scanf("%d", &start_number);
    printf("Enter stop number: ");
    scanf("%d", &stop_number);

    printf("Start number is %d and stop number is %d.\n", start_number, stop_number);

    // แสดงผลลัพธ์จาก start ถึง stop
    printf("Sequence from start to stop: ");
    for (int i = start_number; i <= stop_number; i++) {
        printf("%d ", i);
    }

    printf("\nThank you.\n");
    return 0;
}