#include <bits/stdc++.h>
using namespace std;

void SquarePattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    SquarePattern(n);
    return 0;
}

/*

Enter Number: 5
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

 */