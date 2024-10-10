//
//  main.cpp
//  CCC2020#2
//
//  Created by Mohan Dixit on 2023-10-25.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    string needle,hay;
    
    cin >> needle >> hay;
    
    int ans = 0;
    
    for(int i = 0; i < needle.size();i++){
        needle.push_back(needle.at(0));
        needle.erase(0,1);
        
        if(hay.find(needle) != string::npos){
            ans++;
        }
        
    }
    
    cout << ans << endl;
    return 0;
}
