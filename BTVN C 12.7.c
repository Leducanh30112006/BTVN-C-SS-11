#include <stdio.h>

void taoVaNhapMaTran(int hang, int cot, int maTran[hang][cot]) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}
void inMaTran(int hang, int cot, int maTran[hang][cot]) {
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int hang, cot;
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);
    int maTran[hang][cot];
    taoVaNhapMaTran(hang, cot, maTran);
    inMaTran(hang, cot, maTran);
    return 0;
}

