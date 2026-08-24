#include <iostream>
#include <vector>

using namespace std;

vector<int> two_sum(vector<int> arr, int target){
    for(int i = 0; i< arr.size()-1; i++){
        for(int j = i + 1; j< arr.size(); j++){
            if(arr[i]+arr[j]== target){
                return {i,j};
            }
        }
    }
    return {};
}

int main(){
    // [2, 7, 11, 15], target = 9
    // Output: [0, 1]

    vector<int> arr = {5, 0, 10, 5};
    int target = 10;
    vector<int> arr_sum = two_sum(arr, target);

    for(int l: arr_sum){
        cout << l << " ";
    }
    return 0;
}



