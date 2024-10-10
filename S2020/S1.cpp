//
//  main.cpp
//  CCC2020#1
//
//  Created by Mohan Dixit on 2023-10-25.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n; cin >> n;
    
    vector<double> order;
    
    map<double,double> distance;
    
    while(n--){
        double k,j;
        cin >> k >> j;
        
        order.push_back(k);
        distance[k] = j;
    }
    
    sort(order.begin(), order.end());
    
    double maxspeed = 0;
    
    for(int i = 1; i < order.size();i++){
        
        double prev = distance[order[i-1]];
        double now = distance[order[i]];
        
        double timed = order[i]-order[i-1];
        
        maxspeed = max(maxspeed,abs(now-prev)/timed);
        
    }
    
    cout << maxspeed << endl;
    
    
    return 0;
}
