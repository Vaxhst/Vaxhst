#include <stdio.h>
int main() {
    float nilai;
    printf("Nilai praktikum Algoritma: "); scanf("%f", &nilai);
    if(nilai >= 75) printf("Lulus!\n");
    else printf("Harus mengulang.\n");
    return 0;
}