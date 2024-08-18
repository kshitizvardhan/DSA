#include <bits/stdc++.h>
using namespace std;

void HollowSquarePattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout << "* ";
            }else{
                cout << "  ";   // Two spaces here to align the pattern
            }
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    HollowSquarePattern(n);
    return 0;
}

/*

Enter Number: 5
* * * * *
*       *
*       *
*       *
* * * * *

 */