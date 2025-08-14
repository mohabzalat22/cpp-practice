#include <iostream>

using namespace std;

unsigned int checksum(string data)
{
    unsigned int sum = 0;

    for (unsigned char c : data)
    {
        sum += c;
    }

    return sum % 265;
}

int main()
{
    string data = "Hello, Wolrd! ";
    cout << checksum(data);
    return 0;
}