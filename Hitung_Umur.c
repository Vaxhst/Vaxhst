#include <stdio.h>
int main() {
    int tahun_lahir, tahun_sekarang = 2026;
    printf("Tahun lahir: "); scanf("%d", &tahun_lahir);
    printf("Umur kamu: %d tahun\n", tahun_sekarang - tahun_lahir);
    return 0;
}