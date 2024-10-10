//
//  main.cpp
//  CCCSenior2023#3
//
//  Created by Mohan Dixit on 2024-01-02.
//

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sol(){
    ll n,m,r,c;
    
    cin >> n >> m >> r >> c;
    
    vector<vector<char>> vals(n,vector<char>(m,'a'));
    
    ll rows_left = n-r;
    ll columns_left = m-c;
    
    
    if(r==0 && c ==0){
        for(ll i = 0; i < n;i++){
            vals[i][0] = 'b';
        }
        for(ll i = 0; i < m;i++){
            vals[0][i] = 'b';
        }
        vals[0][0] = 'c';
    }
    
    else if(r == 0){
        for(ll i = 0; i < n;i++){
            vals[i][0] = 'b';
        }
        for(ll i = 0; i < m&&columns_left;i++){
            vals[0][i] = 'c';
            columns_left--;
        }
    }
    
    else if(c==0){
        for(ll i = 0; i < m;i++){
            vals[0][i] = 'b';
        }
        for(ll i = 0; i < n&&rows_left;i++){
            vals[i][0] = 'c';
            rows_left--;
        }
    }
    
    else if(r==n && m%2==0 && columns_left%2 == 1){
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    
    else if(c==m && n%2==0 && rows_left %2 == 1){
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    
    else if(r == n){
        if(columns_left%2==1){
            vals[0][m/2] = 'b';
            columns_left--;
        }
        
        for(ll j = 0; j < m && columns_left;j++){
            if(j%2==0){
                vals[0][j/2] = 'b';
            }else{
                vals[0][m-j/2-1] = 'b';
            }
            
            columns_left--;
        }
    }
    
    else if(c == m){
        if(rows_left%2==1){
            vals[n/2][0] = 'b';
            rows_left--;
        }
        
        for(ll j = 0; j < n && rows_left;j++){
            if(j%2==0){
                vals[j/2][0] = 'b';
            }else{
                vals[n-j/2-1][0] = 'b';
            }
            
            rows_left--;
        }
    }
    
    else{
        for(ll i = 0; i < n&&rows_left;i++){
            vals[i][0] = 'b';
            rows_left--;
        }
        for(ll i = 0; i < m&&columns_left;i++){
            vals[0][i] = 'c';
            columns_left--;
        }
        
    }
    
    
    for(ll i =0;i<n;i++){
        for(int ll j=0;j<m;j++){
            cout << vals[i][j];
        }
        cout << endl;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    sol();
    
    return 0;
}
