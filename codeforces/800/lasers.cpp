#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        long long x, y;
        cin >> n >> m >> x >> y;
        for (int i = 0; i < n + m; ++i)
        {
            long long tmp;
            cin >> tmp;
        }
        cout << n + m << "\n";
    }

    return 0;
}