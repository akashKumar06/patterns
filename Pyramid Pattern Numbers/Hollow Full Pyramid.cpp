#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    for(int i = 1; i <= n; i++){
        for(int s = n - i; s >= 0; s--) cout << " ";
        int k = 2;
        for(int j = 1; j <= 2 *i - 1; j++){
            if(j == 1) cout << j;
            else if (j == 2*i - 1) cout << i;
            else if(i == n && j % 2 != 0){
                cout << k;
                k++;
            }
            else cout << " ";
        }
        cout << endl;
    }
}
