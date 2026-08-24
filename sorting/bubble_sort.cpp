#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    vector<int> arr = {1,3,4,5,2};
    // bubble sort 
    for(size_t i =0 ; i< arr.size()-1;i++){
        bool isSwaped = false;
        for(size_t j = 0; j<arr.size()-i-1;j++){
            if(arr[j] > arr[j+1]){ //swap
                swap(arr[j] , arr[j+1]);
                isSwaped = true;
            }
        }
        if(!isSwaped){
            return;
        }
    }
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}

