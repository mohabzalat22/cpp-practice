#include<iostream>
#include<vector>
using namespace std;



int main(){
    string in;
    cin>> in;
    vector<int> nums;

    for(int i=0;i<in.length();i++){
        if(in[i] != '+'){
            int v = (int)( in[i] - '0');
            nums.push_back(v);
        }
    }

    // selection sort
    for(int i=0;i<nums.size();i++){
        int temp=0;
        for(int j=i+1;j<nums.size();j++){
            if(nums[i] < nums[j]){
                continue;
            } else {
                // swap
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }

    }

    for(int i=0;i<nums.size();i++){
        cout << nums[i];
        if(i != nums.size()-1){
            cout << '+';
        }
    }
    
    return 0;
}