#include <stdio.h>
int main() {
    float cs_sens;
    printf("Masukkan sensitivitas CS:GO: "); scanf("%f", &cs_sens);
    printf("Sensitivitas Valorant: %.3f\n", cs_sens / 3.181818);
    return 0;
}