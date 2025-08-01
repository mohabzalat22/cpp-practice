#include <iostream>
#include <array>

using namespace std;

int main(){
    array <int, 4> arr {1, 2, 3, 4};

    //display list or items

    for(int i = 0; i < arr.size(); i++){
        cout <<  arr[i];
    }

    return 0;
}