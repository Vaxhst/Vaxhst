#include <stdio.h>
#include <string.h>
int main() {
    char teks[100];
    printf("Ketik sesuatu pakai keyboard eksternal: "); scanf("%s", teks);
    printf("Jumlah karakter: %lu\n", strlen(teks));
    return 0;
}