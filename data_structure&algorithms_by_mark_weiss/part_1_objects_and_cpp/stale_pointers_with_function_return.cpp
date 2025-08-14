#include <iostream>

using namespace std;

string *stalePointer()
{
    string s = "this is a dump example of using pointers";
    return &s;
};

int main()
{

    // the idea here after the execution of function stalePointer the refrence object will be destroyed
    cout << "pointer address: " << stalePointer();
    return 0;
}