#include <stdio.h>
#include <stdlib.h>

typedef struct car
{

} Car;

int main()
{
    Car **cars;
    cars = (Car **)malloc(sizeof(Car*) * 10);
}