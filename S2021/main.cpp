//
//  main.cpp
//  CCCSenior2021#1
//
//  Created by Mohan Dixit on 2023-08-22.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;cin >> N;
    
    vector<double> h;
    vector<double> w;
    
    for(int i = 0; i < N+1;i++){
        double temp;
        cin >> temp;
        h.push_back(temp);
    }
    for(int i = 0; i < N;i++){
        double temp;
        cin >> temp;
        w.push_back(temp);
    }
    
    long double sum = 0;
    
    for(int i = 0; i < N;i++){
        sum += w[i]*(h[i]+h[i+1])/2;
    }
    
    cout << sum << endl;
    
    return 0;
}
