#include <stdio.h>
#include <stdlib.h>

typedef enum direction
{
    left, right, up, down
} Direction;

int main()
{
    Direction dir = left;

    if (dir == left) { puts("left"); }
}