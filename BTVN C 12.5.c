#include <stdio.h>
#include <stdbool.h>

bool kiemTraSoNguyenTo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int so1, so2;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &so1, &so2);
    if (kiemTraSoNguyenTo(so1)) {
        printf("%d la so nguyen to.\n", so1);
    } else {
        printf("%d khong phai la so nguyen to.\n", so1);
    }
    if (kiemTraSoNguyenTo(so2)) {
        printf("%d la so nguyen to.\n", so2);
    } else {
        printf("%d khong phai la so nguyen to.\n", so2);
    }
    return 0;
}

