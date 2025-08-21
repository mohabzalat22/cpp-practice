#include <iostream>
#include <vector>

using namespace std;

bool binary_search(int needle, vector<int> stack)
{
    int low = 0;
    int mid;
    int high = stack.size() - 1;

    while (low < high)
    {
        mid = (low + high) / 2;
        if (stack[mid] < needle)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return (low == high && needle == stack[low]);
}

int main()
{
    int n = 16;
    vector<int> s = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "found = 1 / 0 : " << binary_search(n, s);

    return 0;
}