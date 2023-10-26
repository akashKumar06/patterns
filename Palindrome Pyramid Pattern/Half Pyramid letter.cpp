#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= 2 * i - 1; j++){
            if(j < i){
                cout << ch;
                ++ch;
            } else {
                cout << ch;
                --ch;
            }
        }
        cout << endl;
    }
}
