#include <iostream>
#include <cmath>
using namespace std;

class Shape // Abstract class
{
public:
    virtual double area() = 0; // Pure virtual function
    virtual double circumference() = 0; // Pure virtual function
};

class Rectangle : public Shape
{
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) { }

    double area()
    {
        return width * height;
    }

    double circumference()
    {
        return 2 * width + 2 * height;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) { }

    double area()
    {
        return M_PI * pow(radius, 2);
    }

    double circumference()
    {
        return 2 * M_PI * radius;
    }
};

int main()
{
    // Shape *s_error = new Shape;
    Shape *s1 = new Rectangle(21, 10);
    Shape *s2 = new Circle(5);

    cout << s1->area() << " " << s1->circumference() << endl;
    cout << s2->area() << " " << s2->circumference() << endl;
}