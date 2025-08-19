#include <iostream>
#include <vector>
using namespace std;

int max_CS_bruteforce(const vector<int> &a, int &start, int &end)
{
    int n = a.size();
    int maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        int thisSum = 0;
        for (int j = i; j < n; j++)
        {
            thisSum += a[j];

            if (thisSum > maxSum)
            {
                maxSum = thisSum;
                start = i;
                end = j;
            }
        }
    }

    return maxSum;
};

int main()
{
    int start = 0;
    int end = 0;
    const vector<int> data = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << max_CS_bruteforce(data, start, end);

    return 0;
}