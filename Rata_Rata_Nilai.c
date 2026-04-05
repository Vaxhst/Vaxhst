#include <stdio.h>
int main() {
    float n1, n2, n3;
    printf("Masukkan 3 nilai: "); scanf("%f %f %f", &n1, &n2, &n3);
    printf("Rata-rata: %.2f\n", (n1 + n2 + n3) / 3);
    return 0;
}