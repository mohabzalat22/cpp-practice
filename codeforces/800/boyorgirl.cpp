#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool is_odd(int n){
    return n %2 ==0;
}

int main(){
    string name;
    cin >> name;
    vector<char> unique;
    for(int i=0;i<name.length();i++){
        if(find(unique.begin(),unique.end(),name[i]) == unique.end()){
            unique.push_back(name[i]);
        }
    }
    is_odd(unique.size()) ? cout << "CHAT WITH HER!": cout << "IGNORE HIM!";
    return 0;
}