#include <stdio.h>

int main(void)
{
    char name[100];

    printf("Masukkan nama Anda: ");
    fgets(name, sizeof name, stdin);

    printf("Halo, %sSelamat belajar string.\n", name);

    return 0;
}