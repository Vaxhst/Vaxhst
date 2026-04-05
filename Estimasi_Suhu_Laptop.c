#include <stdio.h>
int main() {
    int gpu_load;
    printf("Beban GPU RTX 3060 (%%): "); scanf("%d", &gpu_load);
    if(gpu_load > 85) printf("Suhu rawan! Nyalakan kipas turbo ASUS TUF.\n");
    else printf("Suhu aman untuk main game.\n");
    return 0;
}