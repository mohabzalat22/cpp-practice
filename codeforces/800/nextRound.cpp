#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> getTopX(vector<int> l, int n){
    vector<int> list;
    for(int i=0;i<n;i++){
        if(l[i]>0){
            list.push_back(l[i]);
        }
    }
    return list;
};

int main(){

    int n, k;
    cin>> n >>k;

    vector<int> list;
    int nextRound=0;
    
    while(n--){
        int score;
        cin >> score;
        list.push_back(score);
    }

    for(int i=0; i<list.size();i++){
        vector top = getTopX(list,k);
        auto found = find(top.begin(), top.end(), list[i]);

        if(found != top.end()){
            int index = found - top.begin();
            if(index != -1){
                nextRound ++;
            }
        }
    }
    cout << nextRound;

    return 0;
}
