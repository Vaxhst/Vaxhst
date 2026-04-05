#include <stdio.h>
int main() {
    float saldo;
    printf("Saldo awal: Rp"); scanf("%f", &saldo);
    printf("Saldo setelah bunga 5%%: Rp%.2f\n", saldo + (saldo * 0.05));
    return 0;
}