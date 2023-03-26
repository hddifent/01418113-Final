#include <stdio.h>
#include <stdlib.h>

struct bitfield
{
    unsigned char b1 : 1;
    unsigned char b2 : 1;
    unsigned char b3 : 1;
    unsigned char b4 : 1;
    unsigned char b5 : 1;
    unsigned char b6 : 1;
    unsigned char b7 : 1;
    unsigned char b8 : 1;
};

int main()
{
    printf("%d", sizeof(struct bitfield));
}