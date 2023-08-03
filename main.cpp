//
//  main.cpp
//  CCCSenior2013#2
//
//  Created by Mohan Dixit on 2023-07-25.
//

#include <bits/stdc++.h>
using namespace std;

int sum4(vector<int> vals,int ind){
    return vals[ind] + vals[ind+1] + vals[ind+2] + vals[ind+3];
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int W;
    cin >> W;
    
    int i;
    cin >> i;
    vector<int> trains;
    
    for(int j = 0;j < i;++j){
        int temp;
        cin >> temp;
        trains.push_back(temp);
    }
    
    int ans = i;
    
    // if i > 4, if i less make another loop
    if(i < 4){
        int sum = 0;
        for(int j = 0; j < i;j++){
            sum += trains[j];
            if(sum > W){
                cout << j << endl;
                break;
            }
        }
        
    } else{
        for(int j = 0; j+4 <= i;++j){
            int val = sum4(trains, j);
            if(val > W){
                val -= trains[j+3];
                if(val > W){
                    val -= trains[j+2];
                    if(val > W){
                        val -= trains[j+1];
                        if(val > W){
                            ans = j;
                            break;
                        }
                        ans = j+1;
                        break;
                    }
                    ans = j+2;
                    break;
                }
                ans = j+3;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
