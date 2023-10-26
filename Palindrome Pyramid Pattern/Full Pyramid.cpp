#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int s = n - i; s >= 0; s--){
            cout << " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            if(j <= i) cout << j;
            else cout << i - (j%i);
        }
        cout << endl;
    }
}
