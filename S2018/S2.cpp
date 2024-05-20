//
//  main.cpp
//  CCCSenior2018#2
//
//  Created by Mohan Dixit on 2023-08-16.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<vector<int>> grid;
    
    int N;
    cin >> N;
    
    for(int i = 0; i < N;i++){
        vector<int> temp;
        for(int j = 0; j < N;j++){
            int val;
            cin >> val;
            temp.push_back(val);
        }
        
        grid.push_back(temp);
    }
    
    int first = grid[0][0];
    int second = grid[0][1];
    int last = grid[1][0];
    
    if(first > last && first > second){
        for(int i = N-1;i >= 0;i--){
            for(int j = N-1; j >= 0;j--){
                if(j == 0){
                    cout << grid[i][j] << endl;
                }else{
                    cout << to_string(grid[i][j]) + " ";
                }
            }
        }
    }else if(first < last && first > second){
            for(int j = N-1;j >= 0;j--){
                for(int i = 0; i < N;i++){
                    if(i == N-1){
                        cout << grid[i][j] << endl;
                    }else{
                        cout << to_string(grid[i][j]) + " ";
                    }
                }
            }
        } else if(first > last && first < second){
            for(int j = 0;j < N;j++){
                for(int i = N-1; i >= 0;i--){
                    if(i == 0){
                        cout << grid[i][j] << endl;
                    }else{
                        cout << to_string(grid[i][j]) + " ";
                    }
                }
            }
        } else{
            for(int i = 0;i < N;i++){
                for(int j = 0; j < N;j++){
                    if(j == N-1){
                        cout << grid[i][j] << endl;
                    }else{
                        cout << to_string(grid[i][j]) + " ";
                    }
                }
            }
        }
    
    
    
    return 0;
}
