//
//  main.cpp
//  CCCSenior2016#2
//
//  Created by Mohan Dixit on 2023-08-08.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    int i;
    cin >> i;
    
    vector<int> first;
    vector<int> second;
    
    for(int j = 0;j<i;j++){
        int temp;
        cin >> temp;
        first.push_back(temp);
    }
    for(int j = 0;j<i;j++){
        int temp;
        cin >> temp;
        second.push_back(temp);
    }
    
    int ans = 0;
    
    if(N == 1){
        sort(first.begin(),first.end());
        sort(second.begin(),second.end());
        
        for(int j = 0;j<i;j++){
            ans += max(first[j], second[j]);
        }
    }else{
        sort(first.begin(),first.end());
        sort(second.begin(),second.end(),greater());
        
        for(int j = 0;j<i;j++){
            ans += max(first[j], second[j]);
        }
    }
        cout << ans << endl;
    return 0;
}
