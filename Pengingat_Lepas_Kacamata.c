#include <stdio.h>
int main() {
    int jam_layar;
    printf("Sudah berapa jam main laptop? "); scanf("%d", &jam_layar);
    if(jam_layar >= 2) printf("Istirahat dulu! Lepas kacamata sebentar biar nggak pusing.\n");
    else printf("Aman, tapi tetap perhatikan postur duduk.\n");
    return 0;
}