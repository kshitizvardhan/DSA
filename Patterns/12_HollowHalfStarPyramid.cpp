#include <bits/stdc++.h>
using namespace std;

void HollowHalfStarPyramidPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(i==n-1 || j==0 || j==i){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    HollowHalfStarPyramidPattern(n);
    return 0;
}

/*

Enter a Number: 10
*
* *
*   *
*     *
*       *
*         *
*           *
*             *
*               *
* * * * * * * * * *

 */