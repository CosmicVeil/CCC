//
//  main.cpp
//  CCC2017#3
//
//  Created by Mohan Dixit on 2024-01-12.
//

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> vals){
    vector<int> sums;
    sums.resize(4001);
    fill(sums.begin(),sums.end(),0);
    
    for(int i = 0; i < vals.size();i++){
        for(int j = 0; j <=i; j++){
            if(j==i){
                sums[i*2] += vals[i]/2;
            }else{
                sums[i+j] += min(vals[i],vals[j]);
            }
        }
    }
    int max_val = *max_element(sums.begin(),sums.end());
    
    int cnt = count(sums.begin(), sums.end(), max_val);
    
    cout << max_val << " " << cnt << endl;
}

int main(int argc, const char * argv[]) {
    
    int N;
    cin >> N;
    
    vector<int> vals;
    vals.resize(2001);
    
    for(int i = 0; i < N;i++){
        int temp;
        cin >> temp;
        vals[temp]++;
    }
    
    solve(vals);
    
    return 0;
}
