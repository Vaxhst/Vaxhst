#include <stdio.h>
int main() {
    float harta;
    printf("Total harta yang mengendap 1 tahun: Rp"); scanf("%f", &harta);
    printf("Zakat yang harus dikeluarkan (2.5%%): Rp%.2f\n", harta * 0.025);
    return 0;
}