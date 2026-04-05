#include <stdio.h>
int main() {
    float rupiah;
    printf("Masukkan Rupiah: Rp"); scanf("%f", &rupiah);
    printf("Setara dengan: $%.2f\n", rupiah / 15500.0); // Kurs estimasi
    return 0;
}