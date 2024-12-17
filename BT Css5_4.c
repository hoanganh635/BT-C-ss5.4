#include <stdio.h>

int main() {
    int num;

    do {
        printf("Nhap vao mot so nguyen duong tu 1 den 10: ");
        scanf("%d", &num);

        if (num < 1 || num > 10) {
            printf("So khong hop le. Vui long nhap lai!\n");
        }
    } while (num < 1 || num > 10);

    printf("Bang cuu chuong cua %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}