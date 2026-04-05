#include <stdio.h>
int main() {
    float kwh;
    printf("Penggunaan listrik (kWh): "); scanf("%f", &kwh);
    printf("Estimasi tagihan: Rp%.2f\n", kwh * 1444.70); // Tarif standar
    return 0;
}