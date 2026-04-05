#include <stdio.h>
int main() {
    char huruf;
    printf("Masukkan satu huruf: "); scanf(" %c", &huruf);
    if(huruf=='a' || huruf=='i' || huruf=='u' || huruf=='e' || huruf=='o')
        printf("Vokal\n");
    else
        printf("Konsonan\n");
    return 0;
}