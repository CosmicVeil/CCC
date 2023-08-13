//
//  main.cpp
//  CCCSenior2015#2
//
//  Created by Mohan Dixit on 2023-08-05.
//

#include <bits/stdc++.h>
using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    int J,A;
    vector<string> jerseys;
    
    cin >> J >> A;
    
    for(int i = 0;i < J;i++){
        string val;
        cin >> val;
        
        string t = val + " ";
        t += to_string(i+1);
        
        jerseys.push_back(t);
    }
    
    int satis = 0;
    
    
    while(A--){
        int num;
        string size;
        
        cin >> size >> num;
        
        if(size == "S"){
            string temp = size + " " + to_string(num);
            string temp1 = "M " + to_string(num);
            string temp2 = "L " + to_string(num);
            
            if(find(jerseys.begin(),jerseys.end(),temp) != jerseys.end()){
                satis++;
                jerseys.erase(remove(jerseys.begin(),jerseys.end(),temp),jerseys.end());
            }else if(find(jerseys.begin(),jerseys.end(),temp1) != jerseys.end()){
                satis++;
                jerseys.erase(remove(jerseys.begin(),jerseys.end(),temp1),jerseys.end());
            }else if(find(jerseys.begin(),jerseys.end(),temp2) != jerseys.end()){
                satis++;
                jerseys.erase(remove(jerseys.begin(),jerseys.end(),temp2),jerseys.end());
            }
        } else if(size == "M"){
            string temp1 = "M " + to_string(num);
            string temp2 = "L " + to_string(num);
            
            if(find(jerseys.begin(),jerseys.end(),temp1) != jerseys.end()){
                satis++;
                jerseys.erase(remove(jerseys.begin(),jerseys.end(),temp1),jerseys.end());
            }else if(find(jerseys.begin(),jerseys.end(),temp2) != jerseys.end()){
                satis++;
                jerseys.erase(remove(jerseys.begin(),jerseys.end(),temp2),jerseys.end());
            }
        }else{
            string temp2 = "L " + to_string(num);
            if(find(jerseys.begin(),jerseys.end(),temp2) != jerseys.end()){
                satis++;
                jerseys.erase(remove(jerseys.begin(),jerseys.end(),temp2),jerseys.end());
            }
        }
    }
    
    cout << satis << endl;
    
    
    return 0;
}
