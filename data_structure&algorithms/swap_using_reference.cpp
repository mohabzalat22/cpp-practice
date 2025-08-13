#include <iostream>

using namespace std;

// wrong practice
void swapWrong(int a, int b)
{

    int tmp = a;
    a = b;
    b = tmp;
};

// c-style
void swapPtr(int *a, int *b)
{

    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// c++
void swapRef(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int x = 1;
    int y = 2;

    // wrong example
    swapWrong(x, y);
    cout << "x: " << x << "--" << "y: " << y << "\n";

    // c-style
    swapPtr(&x, &y);
    cout << "x: " << x << "--" << "y: " << y << "\n";

    // reset
    x = 1;
    y = 2;

    // c++ style
    swapRef(x, y);
    cout << "x: " << x << "--" << "y: " << y << "\n";

    return 0;
}