#include <stdio.h>
int main() {
    float berat_anjing;
    printf("Berat anjing peliharaan (kg): "); scanf("%f", &berat_anjing);
    // Rata-rata anjing dewasa butuh 2-3% dari berat badannya per hari
    printf("Porsi makan harian: %.2f gram\n", berat_anjing * 0.025 * 1000);
    return 0;
}