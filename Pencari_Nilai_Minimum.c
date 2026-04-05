#include <stdio.h>
int main() {
    int a, b, min;
    printf("Masukkan 2 angka: "); scanf("%d %d", &a, &b);
    min = (a < b) ? a : b;
    printf("Nilai terkecil: %d\n", min);
    return 0;
}