#include <stdio.h>
int main() {
    int cup;
    printf("Jumlah pesanan Mitra Kopi Jago: "); scanf("%d", &cup);
    printf("Total harga: Rp%d\n", cup * 15000); // Asumsi Rp15.000/cup
    return 0;
}