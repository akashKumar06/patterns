#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        //for spaces
        for(int j = n; j >= i; j--){
            cout << " ";
        }

        //for stars
        for(int k = 1; k <= 2*i - 1; k++){
            if( i == n) cout << "*";
            else if(k == 1 || k == 2*i - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
