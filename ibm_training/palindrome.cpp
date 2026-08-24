#include<iostream>

using namespace std;

string reverse(string s){
    string rev = "";
    for(int i=s.length()-1;i>=0;i--){
        rev+=s[i];
    }
    return rev;
}

bool isPalindrome(string s){
    if(s == reverse(s)){
        return true;
    }
    return false;
}

int main(){
    string s = "racecar";
    cout << isPalindrome(s);

    return 0;
}