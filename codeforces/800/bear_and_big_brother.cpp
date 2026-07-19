#include<iostream>

using namespace std;
int main(){
    int l,b;
    cin >> l >> b;

    int yc=1;

    while(1){
        if(l*3 > b *2){
            cout << yc;
            break;
        } else {
            l=l*3;
            b=b*2;
            yc ++;
        }
    }


}