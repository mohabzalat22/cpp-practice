#include <iostream>
using namespace std;

int main(){
    int array_of_ints[] = {1,2,3};
    int* pointer = array_of_ints;

    for(int i=0; i < (sizeof(array_of_ints) / sizeof(array_of_ints[0])); i++){
        // display array items
        // cout << array_of_ints[i] << "\n";
        
        *(pointer+i) *= 2;
        //display after multiplying using pointer
        // cout << array_of_ints[i] << "\n";
    }

    return 0;
}