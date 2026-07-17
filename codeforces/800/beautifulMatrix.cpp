#include<iostream>
#include<vector>


using namespace std;

int calcMoves(vector<vector<int>> matrix){
    int formula;
    for(int i =0; i< matrix.size();i++){
        for(int j =0; j< matrix.size();j++){
            if (matrix[i][j] == 1){
                formula = abs((j-2)) + abs((i-2));
                break;
            }
        }
        
    }
    return formula;
}

int main (){
    vector<vector<int>> matrix={};

    for(int i=0;i<5;i++){
        vector<int> acc={};
        for(int j=0;j<5;j++){
            int input;
            cin >> input;
            acc.push_back(input);
        }
        matrix.push_back(acc);
    }
    
    cout << calcMoves(matrix);

    return 0;
}