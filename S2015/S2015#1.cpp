//
//  main.cpp
//  CCCSenior2015#1
//
//  Created by Mohan Dixit on 2023-08-03.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int k;
    cin >> k;
    
    vector<int> sums = {};
    
    while(k--){
        int n;
        cin >> n;
        
        if(n == 0){
            sums.pop_back();
        } else{
            sums.push_back(n);
        }
    }
    int ans = 0;
    for(int i : sums){
        ans += i;
    }
    
    cout << ans << endl;
    return 0;
}
