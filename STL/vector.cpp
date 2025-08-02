#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> data {1, 2, 3, 4};
    int c;
    cout << "enter another int: ";
    cin>>c;

    data.push_back(c);

    for(int i=0; i< data.size(); i++){
        cout << data[i];
    }

    return 0;
}