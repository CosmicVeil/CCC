//
//  main.cpp
//  CCCSenior2014#3
//
//  Created by Mohan Dixit on 2023-08-01.
//

#include <bits/stdc++.h>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    
    cin >> n;
    
    while(n--){
        int i;
        cin >> i;
        
        int track = i-1;
        
        vector<int> order;
        
        for(int j = 0;j < i;j++){
            int temp;
            cin >> temp;
            order.push_back(temp);
        }
        
        vector<int> branch;
        int j =1;
        
        string ans = "Y";
        while(j < i+1){
            if(track >= 0 && j == order[track]){
                order.erase(order.begin()+track);
                track--;
                j++;
            } else if(branch.size() > 0 && branch[branch.size()-1] == j){
                branch.erase(branch.end()-1);
                j++;
            } else if(track >= 0){
                branch.push_back(order[track]);
                order.erase(order.begin()+track);
                track--;
            }else{
                ans = "N";
                break;
            }
        }
        
        cout << ans << endl;
        
    }
    return 0;
}
