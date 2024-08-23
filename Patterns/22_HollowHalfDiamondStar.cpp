#include <bits/stdc++.h>
using namespace std;

void HalfDiamondStarPattern(int n){
    for(int i=1; i<2*n; i++){
        int stars = i;
        if (i > n){ // Handle the decreasing part
            stars = 2*n - i;
        }
        for (int j=1; j<=stars; j++){
            if(j==1 || j==stars){
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
    cout << "Enter Number: ";
    cin >> n;
    HalfDiamondStarPattern(n);
    return 0;
}


/*

Enter Number: 5
*
* *
*   *
*     *
*       *
*     *
*   *
* *
*

 */