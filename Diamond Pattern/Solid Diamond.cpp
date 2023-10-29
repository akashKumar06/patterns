#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= 2*n; i++){
        if(i <= n){
            for(int s = n; s > i; s--) cout <<" ";
            for(int j = 1; j <= 2*i - 1; j++){
                if(j % 2 != 0) cout << "*";
                else cout << " ";
            }
        }else{
            for(int s = 1; s < i - n; s++) cout << " ";
            for(int j = 1; j <= 2*(n + 1 - (i - n)) - 1; j++){
                if(j % 2 != 0) cout << "*";
                else cout << " ";
            }
        }
        cout << endl;
    }
}
