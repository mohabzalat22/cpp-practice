#include <iostream>

using namespace std;

class Person
{
public:
    string name;
};

int main()
{
    // deleting the refrenced object y -> x
    // after deleting x , y will point to nothing

    Person *x = new Person();
    x->name = "mohab";

    Person *y = x;
    delete x;

    cout << y->name;

    return 0;
}
