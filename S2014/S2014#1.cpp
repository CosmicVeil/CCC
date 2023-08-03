//
//  main.cpp
//  CCCSenior2014#1
//
//  Created by Mohan Dixit on 2023-07-30.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int i;
    cin >> i;
    
    vector<int> vals;
    
    for(int j = 1;j < i+1;j++){
        vals.push_back(j);
    }
    
    int n;
    cin >> n;
    
    
    while(n--){
        int k;
        cin >> k;
        int removed = 0;
        
        for(int j = 1; j-removed < vals.size()+1;j++){
            if(j%k == 0){
                vals.erase(vals.begin()+j-1-removed);
                removed ++;
            }
        }
    }
    
    for(int j : vals){
        cout << j << endl;
    }
    
    return 0;
}
