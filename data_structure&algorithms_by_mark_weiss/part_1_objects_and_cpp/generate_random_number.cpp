#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
    const int DIFFERENT_NUMBERS = 100;
    int totalNumbers;

    cout << "How many numbers to generate?: ";
    cin >> totalNumbers;

    vector<int> numbers(DIFFERENT_NUMBERS + 1);

    // initialize zeros for numbers vector
    for (int i = 0; i < numbers.size(); i++)
    {
        numbers[i] = 0;
    }

    // generate the numbers

    for (int i = 0; i < totalNumbers; i++)
    {
        numbers[rand() % DIFFERENT_NUMBERS + 1]++;
    }

    // print the result

    for (int i = 0; i <= DIFFERENT_NUMBERS; i++)
    {
        cout << i << " occured: " << numbers[i] << "times.\n";
    }

    return 0;
}