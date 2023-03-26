#include <iostream>
using namespace std;

class Rect
{
public:
    double width, height;

    double area()
    {
        return width * height;
    }

    double circumference()
    {
        return 2 * width + 2 * height;
    }
};

int main()
{
    Rect r1;
    Rect *r2 = &r1;
    r1.width = 21;
    r1.height = 10;
    cout << r1.area() << " " << r1.circumference() << endl;

    r2->height = 20;
    cout << r1.area() << " " << r1.circumference() << endl;

    string s;
    bool b;
}
