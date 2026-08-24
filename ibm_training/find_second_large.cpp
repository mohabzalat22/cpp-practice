#include <iostream>
#include<vector>
using namespace std;

int findSecondMax(vector<int> arr){
    int max= arr[0]; // init max
    int secondMax = arr[0];
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        }
    }

    return secondMax;
}

int main(){
    //     Input:  [4, 8, 2, 10, 3]
    //     Output: 10
    vector<int> arr = { 4, 8, 2, 10, 3};
    cout << findSecondMax(arr);
    return 0;
}