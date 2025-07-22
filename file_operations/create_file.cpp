#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // create test file
    ofstream file("test.txt");

    // write hello world to the file
    file << "Hello World!";

    // close the file 
    file.close();

    return 0;
}