#include <iostream>

using namespace std;

template <class object>
void oswap(object &a, object &b)
{
    object tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int x = 1;
    int y = 2;
    oswap(x, y);

    cout << x << " ## " << y;

    return 0;
}