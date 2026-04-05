#include <stdio.h>
int main() {
    float berat, tinggi;
    printf("Berat (kg) dan Tinggi (m): "); scanf("%f %f", &berat, &tinggi);
    printf("Skor BMI kamu: %.2f\n", berat / (tinggi * tinggi));
    return 0;
}