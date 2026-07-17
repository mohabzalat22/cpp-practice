#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int valueCheck(string v1, string v2){
    int r = 0;
    for(int i=0; i< v1.length();i++){
      int ascii1 = (int) v1[i]; 
      int ascii2 = (int) v2[i];       
        if(ascii1 > ascii2) {
            r= 1;
            break;
        } else if (ascii1 < ascii2){
            r= -1;
            break;
        }
    }
    
    return r;
};

int main(){
    string line1, line2;
    cin >> line1 >>line2;

    transform(line1.begin(),line1.end(),line1.begin(), ::tolower);
    transform(line2.begin(),line2.end(),line2.begin(), ::tolower);

    cout << valueCheck(line1, line2);

    return 0;
}