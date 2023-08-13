//
//  main.cpp
//  CCCSenior2015#3
//
//  Created by Mohan Dixit on 2023-08-06.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int G,P;
    cin >> G >> P;
    int gates[G];
    
    for(int j = 0;j < G;j++){
        gates[j] = 0;
    }
    vector<int> planes;
    
    while(P--){
        int temp;
        cin >> temp;
        planes.push_back(temp);
    }
    
    int ans = 0;
    
    bool end = false;
    
    for(int i : planes){
        for(int j = i-1; j >= 0;j--){
            if(gates[j] == 0){
                ans ++;
                gates[j] = 1;
                break;
            }else if(j == 0){
                end = true;
                break;
            }
        }
        if(end){
            break;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
