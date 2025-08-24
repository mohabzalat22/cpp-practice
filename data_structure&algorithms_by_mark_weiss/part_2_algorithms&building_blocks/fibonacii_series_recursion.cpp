#include <iostream>
#include <vector>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2); // sum of the prev 2 numbers
    };
};

int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << "\n";
    }

    return 0;
}