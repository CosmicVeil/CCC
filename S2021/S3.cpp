//
//  main.cpp
//  CCCSenior2021#3
//
//  Created by Mohan Dixit on 2023-12-29.
//

#include <bits/stdc++.h>
using namespace std;

double check(vector<vector<int>> vals, int point){
    
    double ans = 0;
    
    for(int i = 0; i < vals.size();i++){
        vector<int> val = vals[i];
        
        int diff = abs(point-val[0])-val[2];
        if(diff < 0){
            diff = 0;
        }
        diff *= val[1];
        ans += diff;
    }
    
    return ans;
}

int mid(int left, int right){
    return int((left+right)/2);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    vector<vector<int>> vals;
    
    int minN = 100000001;
    int maxN = 0;
    
    for(int i = 0; i < N;i++){
        int A,B,C;
        vector<int> temp;
        
        cin >> A >> B >> C;
        
        temp.push_back(A);
        temp.push_back(B);
        temp.push_back(C);
        
        if(A > maxN){
            maxN = A;
        }
        
        if(A < minN){
            minN = A;
        }
        
        vals.push_back(temp);
    }
    
    int right = maxN;
    int left = minN;
    
    int ans = 0;
    
    while(left <= right){
        int middle = mid(left,right);
        int middle_time = check(vals,middle);
        
        int right_time = check(vals,middle+1);
        int left_time = check(vals,middle-1);
        
        if(middle_time <= right_time && middle_time <= left_time){
            ans = middle_time;
            break;
        }else if(middle_time <= right_time){
            right = middle-1;
        }else{
            left = middle+1;
        }
    }
    
    cout << ans << endl;
    
    
    return 0;
}
