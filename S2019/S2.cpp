//
//  main.cpp
//  CCCSenior2019#2
//
//  Created by Mohan Dixit on 2023-08-18.
//

#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    int sq = sqrt(n)+1;
    
    for(int i = 2; i < sq; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void find(int n,int* val1, int* val2){
    n = n*2;
    
    for(int j = 2;j < n;j++){
        int k = n-j;
        if(prime(k) && prime(j)){
            *val1 = k;
            *val2 = j;
            break;
        }
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int N;
    cin >> N;
    
    for(int i = 0; i < N;i++){
        int vals;
        cin >> vals;
        
        int first,second;
        
        find(vals,&first,&second);
        cout << first << " " << second << endl;
    }
    
    return 0;
}
