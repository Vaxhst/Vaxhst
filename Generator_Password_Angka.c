#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    printf("PIN Acak Anda: %04d\n", rand() % 10000);
    return 0;
}