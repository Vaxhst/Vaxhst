#include <stdio.h>
int main() {
    float a, b;
    printf("Masukkan dua angka (pisahkan dengan spasi): "); 
    scanf("%f %f", &a, &b);
    printf("Hasil penjumlahan: %.2f\n", a + b);
    return 0;
}