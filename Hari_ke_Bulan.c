#include <stdio.h>
int main() {
    int hari;
    printf("Jumlah hari: "); scanf("%d", &hari);
    printf("%d bulan, %d minggu, %d hari\n", hari/30, (hari%30)/7, (hari%30)%7);
    return 0;
}