//
//  main.cpp
//  CCC2013Senior#3
//
//  Created by Mohan Dixit on 2023-07-27.
//


#include <bits/stdc++.h>
using namespace std;

tuple<int,int> calcResult(int A,int B,int x,int y){
    if(x > y){
        A += 3;
    } else if(x < y){
        B += 3;
    } else{
        A += 1;
        B += 1;
    }
    
    return make_tuple(A,B);
}

int sim(int team,vector<int> scores,vector<vector<int>> left){
    
    int sum = 0;
    if(left.size() == 0){
        int team_score = scores[team];
        sort(scores.begin(),scores.end(),greater<int>());
        
        if(team_score == scores[0] && count(scores.begin(),scores.end(),team_score) == 1){
            return 1;
        }
        return 0;
    }
    
    vector<int> doing = left[0];
    left.erase(remove(left.begin(),left.end(),doing),left.end());
    
    int saved0 = scores[doing[0]-1];
    int saved1 = scores[doing[1]-1];
    
    tie(scores[doing[0]-1],scores[doing[1]-1]) = calcResult(scores[doing[0]-1],scores[doing[1]-1], 1, 0);
    sum += sim(team,scores,left);
    
    scores[doing[0]-1] = saved0;
    scores[doing[1]-1] = saved1;
    
    tie(scores[doing[0]-1],scores[doing[1]-1]) = calcResult(scores[doing[0]-1],scores[doing[1]-1], 0, 0);
    sum += sim(team,scores,left);
    
    scores[doing[0]-1] = saved0;
    scores[doing[1]-1] = saved1;
    
    tie(scores[doing[0]-1],scores[doing[1]-1]) = calcResult(scores[doing[0]-1],scores[doing[1]-1], 1, 2);
    sum += sim(team,scores,left);
    
    return sum;
    
}


int main(int argc, const char * argv[]) {
    vector<int> scores;
    scores.push_back(0);
    scores.push_back(0);
    scores.push_back(0);
    scores.push_back(0);
    
    vector<vector<int>> left = {{1,2},{1,3},{1,4},{2,3},{2,4},{3,4}};
    
    int team,results,A,B,Sa,Sb;
    cin >> team >> results;
    
    for(int i = 0; i < results;i++){
        cin >> A >> B >> Sa >> Sb;
        vector<int> temp = {A,B};
        left.erase(remove(left.begin(),left.end(),temp),left.end());
        
        tie(scores[A-1],scores[B-1]) = calcResult(scores[A-1],scores[B-1],Sa,Sb);
    }
    
    cout << sim(team-1,scores,left) << endl;
    return 0;
}
