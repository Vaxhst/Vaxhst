#include <stdio.h>
int main() {
    float km;
    printf("Jarak dalam KM: "); scanf("%f", &km);
    printf("%.2f KM = %.2f Mil\n", km, km * 0.621371);
    return 0;
}