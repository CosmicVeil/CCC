//
//  main.cpp
//  CCCSenior2023#2
//
//  Created by Mohan Dixit on 2023-08-25.
//

#include <bits/stdc++.h>
using namespace std;

//int find(vector<int> vals,int len){
//
//    int minv = 2147483647;
//
//    for(int i = 0; i < vals.size()-len+1;i++){
//
//        int ans = 0;
//        for(int j = i; j < (len/2)+i;j++){
//            ans += abs(vals[j]-vals[len+i-j+i+1]);
//        }
//
//        minv = min(minv,ans);
//    }
//
//    return minv;
//}
const int MAX = 5008;
int pre[MAX][MAX];


int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    int o = N;
    
    vector<int> vals;
    vector<int> ans;
    
    while(o--){
        int temp;
        cin >> temp;
        vals.push_back(temp);
    }
    
    
    for(int i = 1; i <= vals.size();i++){
        
        int l,r,minv;
        l=0;r=i-1;minv=2145483647;
        
        while(r < N){
            pre[l][r] = abs(vals[l]-vals[r])+pre[l+1][r-1];
            minv = min(pre[l][r],minv);
            l++;r++;
        }
        if(i==1){
            cout << minv;
        }else{
            cout << " " << minv;
        }
    }
    
    return 0;
}
