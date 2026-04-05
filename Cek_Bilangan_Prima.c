#include <stdio.h>
int main() {
    int n, prima = 1;
    printf("Masukkan angka: "); scanf("%d", &n);
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) { prima = 0; break; }
    }
    if(n > 1 && prima) printf("Prima\n");
    else printf("Bukan Prima\n");
    return 0;
}