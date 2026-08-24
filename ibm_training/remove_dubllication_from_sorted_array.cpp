
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> uniqueArr(vector<int> arr){
    vector<int> c = {};

    for(int i =0;i<arr.size();i++){
        if(find(c.begin(),c.end(),arr[i]) == c.end()){
            c.push_back(arr[i]);
        }
    }

    return c;

}

int main(){
    // Input:  [1,1,2,2,3]
    // Output: [1,2,3]
    vector<int> arr = {1,1,2,2,3};
    vector<int> r = uniqueArr(arr);
    
    for(int i :r){
        cout << i << " ";
    }

    return 0;
}