//
//  main.cpp
//  CCCSenior2018#3
//
//  Created by Mohan Dixit on 2024-02-12.
//

#include <bits/stdc++.h>
using namespace std;

vector<string> grid;

int N,M;

bool seen(int x, int y){
//    int x = vals.first;
//    int y = vals.second;
    
    if(grid[x][y] == 'C'){
        return false;
    }
    
    for(int i = x-1; i > -1 && grid[i][y] != 'W';i--){
        if(grid[i][y] == 'C'){
            return true;
        }
    }
    
    for(int i = x+1; i < N && grid[i][y] != 'W';i++){
        if(grid[i][y] == 'C'){
            return true;
        }
    }
    
    for(int i = y-1; i > -1 && grid[x][i] != 'W';i--){
        if(grid[x][i] == 'C'){
            return true;
        }
    }
    
    for(int i = y+1; i < M && grid[x][i] != 'W';i++){
        if(grid[x][i] == 'C'){
            return true;
        }
    }
    
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cin >> N >> M;
    
    
    pair<int,int> start;
    
    grid.resize(N);
    
    vector<vector<int>> distances(N,vector<int>(M,-1));
    vector<vector<bool>> visited(N,vector<bool>(M,false));
    queue<pair<int, int>> que;
    
    
    for (int i = 0; i < N; i++){
        cin >> grid[i];
    }

    for (int i = 0; i < N; i++){

        for (int j = 0; j < M; j++){

            if (grid[i][j] == 'S'){
                start = std::make_pair(i, j);
            }

        }

    }
    
    que.push(start);
    int distance = 0;
    visited[start.first][start.second] = true;
    
    vector<vector<int>> poss = {{1, 0}, {-1, 0}, {0 , 1}, {0, -1}};
    
    if(!seen(start.first,start.second)){
        while(!que.empty()){
            int size = que.size();
            
            for(int i = 0; i < size;i++){
                pair<int,int> pos = que.front();
                que.pop();
                
                pair<int,int> possible;
                
                
            
                distances[pos.first][pos.second] = distance;
                //visited[pos.first][pos.second] = true;
                
                for(int j = 0; j < 4;j++){
                    possible = make_pair(pos.first+poss[j][0], pos.second+poss[j][1]);
                    
                    char C = grid[possible.first][possible.second];
                    if(visited[possible.first][possible.second]){
                        continue;
                    }
                    
                    while(!visited[possible.first][possible.second] && C != 'W' && C != '.' && C != 'C'){
                        visited[possible.first][possible.second] = true;
                        if(C == 'D'){
                            possible.first++;
                        }else if(C == 'U'){
                            possible.first--;
                        }else if(C == 'R'){
                            possible.second++;
                        }else if(C == 'L'){
                            possible.second--;
                        }
                        C = grid[possible.first][possible.second];

                    }
                    if(visited[possible.first][possible.second]){
                        continue;
                    }
                    visited[possible.first][possible.second] = true;

                    
                    if(C == '.' && !seen(possible.first,possible.second)){
                        que.push(possible);
                    }
                }
            }
            distance++;
        }
    }
    
    for(int i = 0; i < N;i++){
        for(int j = 0; j < M;j++){
            
            if(grid[i][j] == '.'){
                cout << distances[i][j] << endl;
            }
        }
    }
    
    return 0;
}
