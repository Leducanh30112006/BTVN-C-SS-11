#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &num1, &num2);

    int tong = tinhTong(num1,num2);
    printf("Tong hai so %d va %d la: %d\n", num1, num2, tong);

    return 0;
}

