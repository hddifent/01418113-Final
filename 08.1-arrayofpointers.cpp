#include <iostream>
using namespace std;

class Car
{
    // Template
};

class Showroom
{
private:
    Car **cars;
    int size;

public:
    Showroom()
    {
        cars = new Car*[10];
        size = 0;
    }

    ~Showroom()
    {
        for (int i = 0; i < size; i++)
        {
            delete cars[i];
        }
    }
};

int main()
{
    
}