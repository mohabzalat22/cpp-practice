#include <iostream>
#include<vector>
using namespace std;

int findMax(vector<int> arr){
    int max= arr[0]; // init max
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    //     Input:  [4, 8, 2, 10, 3]
    //     Output: 10
    vector<int> arr = { 4, 8, 2, 10, 3};
    cout << findMax(arr);
    return 0;
}