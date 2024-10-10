//
//  main.cpp
//  CCC2024S2
//
//  Created by Mohan Dixit on 2024-02-21.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...

    
    int N, T;
    cin >> T >> N;
    
    while(T--){
        string s;
        cin >> s;
        vector<int> occ;
        occ.resize(26);
        
        for(char c:s){
            occ[c-0-97]++;
        }
        
        int prev = occ[s[0]-0-97];
        
        bool works = true;
        
        for(int i = 1; i < N;i++){
            if(prev>1 && occ[s[i]-0-97] > 1){
                works = false;
                break;
            }else if(prev == 1 && occ[s[i]-0-97] == 1){
                works = false;
                break;
            }
            
            prev = occ[s[i]-0-97];
        }
        
        if(works){
            cout << 'T' << endl;
        }else{
            cout << 'F' << endl;
        }
    }
    return 0;
}
