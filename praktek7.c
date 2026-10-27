#include <stdio.h>
#include <string.h>

#define PJG 15

int main(void)
{
    char str1[PJG] = "sura";
    char str2[] = "baya";

    strcat(str1, str2);

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    return 0;
}