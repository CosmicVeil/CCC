    //
    //  main.cpp
    //  CCCSenior2022#3
    //
    //  Created by Mohan Dixit on 2023-12-26.
    //

    #include <bits/stdc++.h>
    using namespace std;

    int main(int argc, const char * argv[]) {
        
        
        double N,M,K;
        cin >> N >> M >> K;
        
        K-=N;
        
        vector<int> ans (N,0);
        
        int stoppage = N;
        
        for(int i = 1; i <= N; i++){
            if(K-i+1 >= 0 && i <= M){
                ans[i-1] = i;
                K-= i-1;
            }else{
                stoppage = i-1;
                break;
            }
        }
        
        if(stoppage != N){
            for(int i = stoppage; i < N;i++){
                
                if(K > 0){
                    for (int j = M; j > 0; j--){

                        if (K - j + 1 >= 0){
                            ans[i] = ans[i - j];
                            K -= (j - 1);
                            break;
                        }

                    }
                }
                else{
                    ans[i] = ans[i-1];
                }
            }
        }
        
        if(K==0){
            for(int i = 0; i < N;i++){
                cout << ans[i] << " ";
            }
        }else{
            cout << -1 << endl;
        }
        
        return 0;
    }
