#include <stdio.h>
#define MAKS 30

int main(void)
{
    int i;
    char asal[] = "Saya menyukai bahasa C";
    char hasil[MAKS];

    i = 0;

    while (asal[i] != '\0')
    {
        hasil[i] = asal[i];
        i++;
    }

    hasil[i] = '\0';
    printf("Isi hasil: %s\n", hasil);

    return 0;
}