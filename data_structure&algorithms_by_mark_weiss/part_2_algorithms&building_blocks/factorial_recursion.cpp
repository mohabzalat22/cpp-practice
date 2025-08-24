#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n = 2;

    cout << "factorial of " << n << " is : " << factorial(n);

    return 0;
}