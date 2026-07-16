#include<iostream>
#include<vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> stack;

    for(int i=0;i<n;i++){
        string opp;
        cin >> opp;
        stack.push_back(opp);
    }

    int result = 0;
    for(int i=0;i<stack.size();i++){
        cout << stack[i] << '\n';
        if(stack[i] == "X++" || stack[i] == "++X"){
            result += 1;
        }
        else{
            result -= 1;
        }
    }

    cout << result;


    return 0;
}