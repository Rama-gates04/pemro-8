#include <stdio.h>
#include <string.h>

#define MAKS 256

int main(void)
{
    int i, jumkar = 0;
    char teks[MAKS];

    printf("Masukkan suatu kalimat: ");
    fgets(teks, sizeof teks, stdin);
    teks[strcspn(teks, "\n")] = '\0';

    for (i = 0; teks[i] != '\0'; i++)
        jumkar++;

    printf("Jumlah karakter = %d\n", jumkar);

    return 0;
}