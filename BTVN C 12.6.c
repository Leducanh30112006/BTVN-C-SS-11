#include <stdio.h>

int kiemTraSoHoanHao(int n) {
    if (n <= 1) {
        return 0;
    }
    int tong = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return (tong == n) ? 1 : 0;
}
int main() {
    int so1, so2;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &so1, &so2);

    if (kiemTraSoHoanHao(so1)) {
        printf("%d la so hoan hao.\n", so1);
    } else {
        printf("%d khong phai la so hoan hao.\n", so1);
    }
    if (kiemTraSoHoanHao(so2)) {
        printf("%d la so hoan hao.\n", so2);
    } else {
        printf("%d khong phai la so hoan hao.\n", so2);
    }
    return 0;
}

