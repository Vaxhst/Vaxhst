#include <stdio.h>
void tukar(int *a, int *b) { int temp = *a; *a = *b; *b = temp; }
int main() {
    int x = 10, y = 20;
    tukar(&x, &y);
    printf("Setelah ditukar: x=%d, y=%d\n", x, y);
    return 0;
}