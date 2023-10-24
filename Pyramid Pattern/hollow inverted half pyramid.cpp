#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << endl;
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
                if(i == 1) cout << "*";
                else if(j == n || j == i) cout << "*";
                else cout << " ";
        }
        cout << endl;
    }
}
