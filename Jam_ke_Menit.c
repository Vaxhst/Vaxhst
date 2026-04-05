#include <stdio.h>
int main() {
    int jam;
    printf("Masukkan jam: "); scanf("%d", &jam);
    printf("%d jam = %d menit\n", jam, jam * 60);
    return 0;
}