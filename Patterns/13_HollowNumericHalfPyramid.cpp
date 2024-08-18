#include <bits/stdc++.h>
using namespace std;

void HollowNumericHalfPyramidPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(i==(n-1) || j==0 || i==j){
                cout << j+1 << " ";
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
    HollowNumericHalfPyramidPattern(n);
    return 0;
}

/*

Enter a Number: 5
1
1 2
1   3
1     4
1 2 3 4 5

 */