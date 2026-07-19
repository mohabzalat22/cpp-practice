#include<iostream>

using namespace std;

int main (){
    int moves;
    cin >> moves;

    int l=0;
    int x=5;

    while(x != 0){
        if(moves-x >= 0){
            moves = moves - x;
            l++;
        } else {
            x--;
        }
    }
   
    cout << l;
    
    return 0;
}