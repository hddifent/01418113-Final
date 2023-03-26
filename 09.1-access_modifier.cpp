#include <iostream>
using namespace std;

class Example
{
private:
    int private_int; // Can only be used in this class.
protected:
    int protected_int; // Can be inherited. Cannot use in global scope.
public:
    int public_int; // Can be used in global scope.
};

class ExampleDerived : public Example
{
public:
    int f1() { return public_int; }
    int f2() { return protected_int; }
};

int main()
{
    Example e1;
    cout << e1.public_int << endl;
}