#include <stdio.h>
int main() {
    int angka;
    printf("Tampilkan perkalian untuk angka: "); scanf("%d", &angka);
    for(int i = 1; i <= 10; i++) printf("%d x %d = %d\n", angka, i, angka * i);
    return 0;
}