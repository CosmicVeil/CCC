//
//  main.cpp
//  CCC2024S1
//
//  Created by Mohan Dixit on 2024-02-21.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    vector<int> vals;
    vals.resize(N);
    
    for(int i =0;i < N;i++){
        cin >> vals[i];
    }
    
    int ans = 0;
    
    for(int i = 0; i < N/2;i++){
        if(vals[i] == vals[i+N/2]){
            ans++;
        }
    }
    
    cout << 2*ans << endl;
    return 0;
}
