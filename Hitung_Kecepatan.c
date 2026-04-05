#include <stdio.h>
int main() {
    float jarak, waktu;
    printf("Jarak (km) dan Waktu (jam): "); scanf("%f %f", &jarak, &waktu);
    printf("Kecepatan: %.2f km/jam\n", jarak / waktu);
    return 0;
}