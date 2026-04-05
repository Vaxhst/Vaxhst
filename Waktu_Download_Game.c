#include <stdio.h>
int main() {
    float gb, mbps;
    printf("Ukuran game (GB): "); scanf("%f", &gb);
    printf("Kecepatan internet (Mbps): "); scanf("%f", &mbps);
    float detik = (gb * 1024 * 8) / mbps;
    printf("Estimasi download: %.2f menit\n", detik / 60);
    return 0;
}