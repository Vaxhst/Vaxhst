#include <stdio.h>
int main() {
    float harga; int bulan;
    printf("Harga barang: Rp"); scanf("%f", &harga);
    printf("Tenor (bulan): "); scanf("%d", &bulan);
    printf("Cicilan per bulan: Rp%.2f\n", harga / bulan);
    return 0;
}