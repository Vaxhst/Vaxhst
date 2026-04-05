#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50}, cari, ketemu = 0;
    printf("Cari angka (10/20/30/40/50): "); scanf("%d", &cari);
    for(int i=0; i<5; i++) {
        if(arr[i] == cari) { ketemu = 1; break; }
    }
    if(ketemu) printf("Angka ditemukan!\n");
    else printf("Angka tidak ada.\n");
    return 0;
}