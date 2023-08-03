//
//  main.cpp
//  CCCSenior2014#2
//
//  Created by Mohan Dixit on 2023-08-01.
//

#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int i;
    cin >> i;
    string arr[i];
    
    map<string,string> names;
    string ans = "good";
    
    for(int j = 0;j < i;j++){
        cin >> arr[j];
    }
    
    for(int j = 0;j < i;j++){
        string temp;
        cin >> temp;
        
        if(arr[j] == temp){
            ans = "bad";
            break;
        } else if (names.find(temp) != names.end() && names[temp] != arr[j]){
            ans = "bad";
            break;
        }
        
        names[arr[j]] = temp;
    }
    
    cout << ans << endl;
    
    return 0;
}
