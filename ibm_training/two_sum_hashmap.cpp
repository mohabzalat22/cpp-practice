#include <iostream>
#include <vector>
#include <unordered_map> 

using namespace std;

vector<int> two_sum(vector<int> arr, int target){
    unordered_map<int, int> numMap;
    int n = arr.size();

    for(int i = 0; i < n; i++){
        int complement = target - arr[i];

        if(numMap.find(complement) != numMap.end()){
            return {numMap[complement], i};
        }

        numMap[arr[i]] = i; // save in the map
    }
    return {};
}

int main(){
    vector<int> arr = {5, 0, 10, 5};
    int target = 10;
    vector<int> arr_sum = two_sum(arr, target);

    for(int l: arr_sum){
        cout << l << " "; 
    }
    return 0;
}