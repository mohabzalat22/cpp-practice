#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr = {5,4,2,1,3};
    // selection sort;

    for(int i =0;i<arr.size()-1;i++){
        int idx = i; // smallest unsorted index
        for(int j=i+1;j<arr.size();j++){ // get the smallest number index
            if(arr[j] < arr[idx]){
                idx=j;
            }
        }
        swap(arr[i],arr[idx]); //swap the index with the smallest value
    }

    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}