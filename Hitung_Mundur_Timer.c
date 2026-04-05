int main() {
    int detik;
    printf("Mulai hitung mundur dari (detik): "); scanf("%d", &detik);
    for(int i = detik; i > 0; i--) printf("%d...\n", i);
    printf("Waktu habis!\n");
    return 0;
}