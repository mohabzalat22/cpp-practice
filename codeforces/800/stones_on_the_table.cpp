#include<iostream>

using namespace std;

int main (){

    string input;
    int n;
    cin >> n >>input;

    int counts = 0;

    for(int i=0; i<n;i++){
        if(input[i]==input[i+1]){
            counts +=1;
        }
    }

    cout << counts;

    return 0;
}