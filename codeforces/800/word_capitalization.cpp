#include<iostream>

using namespace std;

int main (){

    string in;
    cin>>in;
    if(in[0] >= 'a' && in[0] <= 'z'){
        in[0] = in[0] - 32;
    }
    cout << in;

    return 0;
}