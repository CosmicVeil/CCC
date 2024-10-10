//
//  main.cpp
//  CCCSenior2023#1
//
//  Created by Mohan Dixit on 2023-08-24.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    
    vector<int> top;
    vector<int> bottom;
    
    for(int i = 0; i < N;i++){
        int temp;
        cin >> temp;
        
        top.push_back(temp);
    }
    
    for(int i = 0; i < N;i++){
        int temp;
        cin >> temp;
        
        bottom.push_back(temp);
    }
    
    int ans = 0;
    
    int addedt = 0;
    int addedb = 0;
    
    for(int i = 0; i < N;i++){
        
        int t = top[i];
        int b = bottom[i];
        
        if(t==1 && b==1){
            if(addedt > 0){
                ans-=2;
            }
            if(addedb > 0){
                ans-=2;
            }
            if(i%2==0){
                ans += 4;
            }else{
                ans += 6;
            }
            addedt +=1;
            addedb +=1;
            
        }else if(t == 1 || b == 1){
            
            if(t==1){
                if(addedt > 0){
                    ans += 1;
                }else{
                    ans+=3;
                }
                addedt += 1;
                addedb = 0;
            }else{
                if(addedb > 0){
                    ans += 1;
                }else{
                    ans+=3;
                }
                addedb +=1;
                addedt = 0;
            }
            
            
        }else{
            addedt = 0;
            addedb = 0;
        }
    }

    
    cout << ans << endl;
    return 0;
}
