#include <stdio.h>

int timSoLonNhat(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr[] = {1, 2, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int soLonNhat = timSoLonNhat(arr, n);
    printf("So lon nhat trong mang la: %d\n", soLonNhat);

    return 0;
}

