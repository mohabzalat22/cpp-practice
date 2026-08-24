#include<iostream>
using namespace std;

string reverse(string s){
    string rev = "";
    for(int i=s.length()-1;i>=0;i--){
        rev+=s[i];
    }
    return rev;
}

int main(){
    string c = "mohab";
    cout << reverse(c);
    return 0;
}