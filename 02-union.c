#include <stdio.h>
#include <stdlib.h>

union test
{
    int x; // first union member
    float y;
};

int main()
{
    union test t1;

    t1.x = 100;
    printf("%d %f\n", t1.x, t1.y);

    t1.y = 3.5;
    printf("%d %f\n", t1.x, t1.y);
}