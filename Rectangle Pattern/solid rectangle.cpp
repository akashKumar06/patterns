#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cout << "Enter row and col: ";
    cin >> row >> col;
    cout << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "*";
        }
        cout << endl;
    }
}
