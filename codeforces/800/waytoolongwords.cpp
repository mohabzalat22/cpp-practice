#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<string> abbrs;

    for(int i=0; i< n; i++){
        string line;
        cin >> line ;

        string abbr = line.length() > 10 ? line[0] +to_string(line.length()-2)+line[line.length()-1] : line;
        abbrs.push_back(abbr);
    }

    for(int i = 0; i < abbrs.size(); i++){
        cout << abbrs[i] << '\n';
    }
    return 0;
}