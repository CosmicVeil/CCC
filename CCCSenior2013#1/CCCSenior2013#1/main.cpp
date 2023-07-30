//
//  main.cpp
//  CCCSenior2013#1
//
//  Created by Mohan Dixit on 2023-07-25.
//

#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    cin >> i;
    bool run = true;
    
    while(true){
        i++;
        string chars = to_string(i);
        
        for(char &c : chars){
            if(count(chars.begin(),chars.end(),c) >= 2){
                run = false;
                break;
            }
        }
        
        if(run){
            cout << i << endl;
            break;
        }
        run = true;
    }
    
    return 0;
}
