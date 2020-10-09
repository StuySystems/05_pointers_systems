#include <stdio.h>

int main()
{
    char character = 1;
    int integer = 1;
    long long_num = 1;

    printf("&character (hex): %p\n", &character);
    printf("  &integer (hex): %p\n", &integer);
    printf(" &long_num (hex): %p\n", &long_num);
    printf("\n");
    printf("&character (dec): %ld\n", &character);
    printf("  &integer (dec): %ld\n", &integer);
    printf(" &long_num (dec): %ld\n", &long_num);
    printf("\n");

    char *cp = &character;
    int *ip = &integer;
    long *lp = &long_num;

    printf("char pointer: %p\n", cp);
    printf(" int pointer: %p\n", ip);
    printf("long pointer: %p\n", lp);
    printf("\n");

    printf("   original char: %d\n", character);
    printf("original integer: %d\n", integer);
    printf("   original long: %ld\n", long_num);
    printf("\n");

    (*cp)++;
    (*ip)++;
    (*lp)++;

    printf("   updated char: %d\n", character);
    printf("updated integer: %d\n", integer);
    printf("   updated long: %ld\n", long_num);
    printf("\n");

    unsigned int uns_int = 500632555;
    int *u_ip = &uns_int;
    char *u_cp = &uns_int;

    printf(" unsigned int (int) pointer: %p\n", u_ip);
    printf("unsigned int (char) pointer: %p\n", u_cp);
    printf(" unsigned int (int) value: %d\n", *u_ip);
    printf("unsigned int (char) value: %d\n", *u_cp);
    printf("\n");

    printf("unsigned int (dec): %u\n", uns_int);
    printf("unsigned int (hex): %x\n", uns_int);
    printf("\n");

    int i;
    for (i = 0; i < 4; i++)
    {
        printf("byte %d: %hhu\n", i, *u_cp);
        u_cp += 1;
    }
    printf("\n");

    u_cp = &uns_int;

    for (i = 0; i < 4; i++)
    {
        (*u_cp)++;
        u_cp += 1;
    }

    printf("updated unsigned int (dec): %u\n", uns_int);
    printf("updated unsigned int (hex): %x\n", uns_int);
    printf("\n");
    u_cp = &uns_int;

    for (i = 0; i < 4; i++)
    {
        printf("updated byte %d (dec): %hhu\n", i, *u_cp);
        printf("updated byte %d (hex): %hhx\n", i, *u_cp);
        printf("\n");
        u_cp += 1;
    }
    printf("\n");

    u_cp = &uns_int;

    for (i = 0; i < 4; i++)
    {
        (*u_cp) += 16;
        u_cp += 1;
    }

    printf("updated unsigned int (dec): %u\n", uns_int);
    printf("updated unsigned int (hex): %x\n", uns_int);
    printf("\n");
    u_cp = &uns_int;

    for (i = 0; i < 4; i++)
    {
        printf("updated byte %d (dec): %hhu\n", i, *u_cp);
        printf("updated byte %d (hex): %hhx\n", i, *u_cp);
        printf("\n");
        u_cp += 1;
    }
    printf("\n");
}