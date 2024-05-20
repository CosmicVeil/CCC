//
//  main.cpp
//  CCCSenior2017#2
//
//  Created by Mohan Dixit on 2023-08-13.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    vector<int> vals;
    
    cin >> N;
    
    for(int n = 0; n < N;n++){
        int temp;
        cin >> temp;
        vals.push_back(temp);
    }
    
    if(N == 1){
        cout << vals[0];
    }
    
    else{
        sort(vals.begin(),vals.end());
        vector<string> lows;
        vector<string> highs;
        
        int mid = 0;
        
        if(N%2==0){
            mid = N/2;
        }else{
            mid = N/2+1;
        }
        
        for(int i =0; i < vals.size(); i++){
            if(i < mid){
                lows.push_back(to_string(vals[i]));
            }else{
                highs.push_back(to_string(vals[i]));
            }
        }
        
        reverse(lows.begin(),lows.end());
        
        for(int j = 0; j < mid;j++){
            if(j!= mid-1){
                cout << lows[j] + " " + highs[j] + " ";
            }else{
                if(N%2 == 0){
                    cout << lows[j] + " " + highs[j];
                }else{
                    cout << lows[j];
                }
            }
        }
    }
    
    return 0;
}
