#include <stdio.h>
#include <stdlib.h>

typedef struct rectangle
{
    double width, height;
} Rect;

double area(Rect r)
{
    return r.width * r.height;
}

double circumference(Rect r)
{
    return 2 * r.width + 2 * r.height;
}

int main()
{
    Rect r1;
    r1.width = 21;
    r1.height = 10;

    printf("%lf %lf", area(r1), circumference(r1));
}