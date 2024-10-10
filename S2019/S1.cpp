//
//  main.cpp
//  CCCSenior2019#1
//
//  Created by Mohan Dixit on 2023-08-17.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<vector<int>> grid = {{1,2},{3,4}};
    
    string s;
    cin >> s;
    
    for(char c: s){
        if(c == 'H'){
            vector<int> temp = grid[1];
            grid[1] = grid[0];
            grid[0] = temp;
        }else{
            int temp = grid[1][0];
            int temp2 = grid[0][0];
            grid[0][0] = grid[0][1];
            grid[1][0] = grid[1][1];
            grid[1][1] = temp;
            grid[0][1] = temp2;
        }
    }
    for(vector<int> val : grid){
        for(int val2 : val){
            if(val2 == val[0]){
                cout << val2;
            }else{
                cout << " " << val2;
            }
        }
        cout << endl;
    }
    
    return 0;
}
