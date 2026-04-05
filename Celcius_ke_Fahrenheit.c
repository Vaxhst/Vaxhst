#include <stdio.h>
int main() {
    float c;
    printf("Suhu Celcius: "); scanf("%f", &c);
    printf("Suhu Fahrenheit: %.2f\n", (c * 9/5) + 32);
    return 0;
}