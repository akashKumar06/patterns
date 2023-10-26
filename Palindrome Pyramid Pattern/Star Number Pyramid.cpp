#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int s = n*2 - (i+1); s >= 1; s--){
            cout << "*";
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            if(j % 2 != 0) cout << i;
            else cout << "*";
        }
        for(int s = n*2 - (i+1); s >= 1; s--){
            cout << "*";
        }

        cout << endl;
    }
}
