//
//  main.cpp
//  CCCSenior2022#1
//
//  Created by Mohan Dixit on 2023-08-23.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    int val = N%20;
    
    vector<int> work = {4,5,8,9,10,12,14,15,16,18};
    
    
    if(find(work.begin(),work.end(),val) != work.end()){
        if(N == val){
            cout << 1 << endl;
        }else{
            int temp = N/20;
            
            if(temp%2==1){
                cout << (temp-1)*2 << endl;
            }else{
                cout << temp*2-1 << endl;
            }
            
        }
    }else if (val == 0){
        cout << 2+(N/20)-1 << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}
