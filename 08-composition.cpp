#include <iostream>
using namespace std;

class Car
{
    // Template
};

class Showroom
{
private:
    Car *c1; // Composition: Showroom HAS-A Car

public:
    Showroom(Car *c) : c1(c) { }

    ~Showroom()
    {
        delete c1;
    }
};

int main()
{
    Showroom *room = new Showroom(new Car());

    // Code
    // Code
    // Code

    delete room;
}