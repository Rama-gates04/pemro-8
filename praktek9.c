#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "ABcde";
    char *hasil1, *hasil2;

    hasil1 = strchr(str, 'B');
    hasil2 = strchr(str, 'X');

    printf("Dari string %s\n", str);

    if (hasil1 != NULL)
        printf("Mencari karakter B = %s\n", hasil1);

    if (hasil2 != NULL)
        printf("Mencari karakter X = %s\n", hasil2);
    else
        printf("Mencari karakter X = tidak ditemukan\n");

    return 0;
}
