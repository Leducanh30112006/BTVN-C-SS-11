#include <stdio.h>

long long giaiThua(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * giaiThua(n - 1);
    }
}

int main() {
    int so;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &so);

    long long ketQua = giaiThua(so);
    printf("Giai thua cua %d la: %lld\n", so, ketQua);

    return 0;
}

