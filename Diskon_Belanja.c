#include <stdio.h>
int main() {
    float total;
    printf("Total belanja: Rp"); scanf("%f", &total);
    if(total > 100000) {
        printf("Dapat diskon 10%%! Bayar: Rp%.2f\n", total * 0.9);
    } else {
        printf("Bayar: Rp%.2f\n", total);
    }
    return 0;
}