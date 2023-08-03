//
//  main.cpp
//  CCCSenior2013#5
//
//  Created by Mohan Dixit on 2023-07-29.
//


#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    cin >> i;
    
    int cost = 0;
    
    while(i > 1){
        int r = sqrt(i);
        int f = 2;
        
        while(f <= r && i%f != 0){
            f++;
        }
        
        if(i%f == 0){
            int temp = i/f;
            i = i-temp;
            cost += i/temp;
        } else{
            i--;
            cost += i;
        }
    }
    
    cout << cost << endl;
    return 0;
}
