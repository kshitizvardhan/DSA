#include <bits/stdc++.h>
using namespace std;

void HollowFullStarPyramidPattern(int n){
    for(int i=0; i<n; i++){
        // For first spaces
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        // For Stars
        for(int j=0; j<2*i+1; j++){
            if(i==0 || j==0 || j==2*i){
                cout << "* "; 
            } else{
                cout << "  ";
            }
        }
        // For second spaces
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        cout << endl;
    }
}

void HollowInvertedFullStarPyramidPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            if(j==0 || j==2*n-(2*i+2)){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    HollowFullStarPyramidPattern(n);
    HollowInvertedFullStarPyramidPattern(n);
    return 0;
}

/*

Enter Number: 5
        *
      *   *
    *       *
  *           *
*               *
*               *
  *           *
    *       *
      *   *
        *

 */