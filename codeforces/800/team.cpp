#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int res(int p, int v, int t)
{
    int res = p + v + t;
    return res;
}

int main() {

    int n;
    cin >> n;
    vector<int> op;
    for (int i=0; i<n;i++){
        string in;
        int p,v,t;
        cin >> p >> v >> t;

        op.push_back(res(p,v,t));
    }
    int counts = 0;
    for (int i=0; i<op.size();i++){

        if (op[i] >= 2 ) {
            counts ++;
        }        
    }
    
    cout << counts;

    return 0;
}