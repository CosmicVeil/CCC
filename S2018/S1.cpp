//
//  main.cpp
//  CCCSenior2018#1
//
//  Created by Mohan Dixit on 2023-08-15.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int N;
    cin >> N;
    vector<int> vals;
    
    while(N--){
        int temp;
        cin >> temp;
        vals.push_back(temp);
    }
    
    sort(vals.begin(),vals.end());
    
    vector<double> diff;
    double d = 0;
    
    for(int i = 1; i < vals.size();i++){
        
        d = abs(vals[i]-vals[i-1]);
        diff.push_back(d);
    }
       
    long double ans = 2000000000.0;
    
    for(int j = 0; j < diff.size()-1;j++){
        long double av = (diff[j] + diff[j+1])/2;
        if(av < ans){
            ans = av;
        }
    }
    cout << fixed << showpoint;
    cout << setprecision(1);
    cout << ans << endl;
    
    return 0;
}
