#include <bits/stdc++.h>
using namespace std;

void HalfStarPyramidPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    HalfStarPyramidPattern(n);
    return 0;
}

/*

Enter Number: 10
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
* * * * * * * * *
* * * * * * * * * *

 */