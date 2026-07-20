#include<iostream>

using namespace std;

int main(){
    int k,n,w;

    cin >> k >> n >> w;

    int cost = 0;
    for(int i=1; i<=w; i++){
        if(i==1){
            cost += k;
        } else {
            cost += i*k;
        }
    }
    if(cost > n){
        cout << cost - n;
    } else {
        cout << 0;
    }
    return 0;
}