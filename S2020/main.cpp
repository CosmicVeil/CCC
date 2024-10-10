//
//  main.cpp
//  CCCSenior2020#3
//
//  Created by Mohan Dixit on 2023-12-31.
//

#include <bits/stdc++.h>
using namespace std;

#define ll long long

map<char,ll> substr;
map<char,ll> currentstr;
unordered_map<string,bool> visited;

char nth_letter(ll n)
{
    return "abcdefghijklmnopqrstuvwxyz"[n];
}


int main(int argc, const char * argv[]) {
    // insert code here...
    string N,H;
    
    cin >> N;
    cin >> H;
    
    ll ans = 0;
    
    for(ll i = 0; i < 26;i++){
        substr[nth_letter(i)] = 0;
        currentstr[nth_letter(i)] = 0;
    }
    
    if(N.size() > H.size()){
        cout << 0 << endl;
    }else{
        for(ll i = 0; i < N.size();i++){
            substr[N[i]]++;
        }
        
        for(ll i = 0; i < N.size();i++){
            currentstr[H[i]]++;
        }
        
        
        for(ll j = 0; j < H.size() - N.size()+1;j++){
            if(substr == currentstr){
                if(visited.find(N.substr(j,N.size())) == visited.end()){
                    ans++;
                    visited[H.substr(j, N.size())] = true;
                }
            }
                
                currentstr[H[j]]--;
                currentstr[H[j+N.size()]]++;
        }
    
        
        cout << ans << endl;
        
    }
        
    return 0;
}
