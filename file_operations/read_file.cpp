#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string text;
    
    //read file content
    fstream file("test.txt");

    while(getline(file, text)){
        cout << text;
    }

    // close file
    file.close();
    return 0;
}