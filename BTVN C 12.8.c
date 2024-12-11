#include <stdio.h>

int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int so1, so2;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &so1, &so2);
    int ucln = timUCLN(so1, so2);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", so1, so2, ucln);
    return 0;
}

