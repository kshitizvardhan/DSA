#include <bits/stdc++.h>
using namespace std;

void FullStarPyramidPattern(int n){
    for(int i=0; i<n; i++){
        // For first spaces
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        // For Stars
        for(int j=0; j<2*i+1; j++){
            cout << "* ";
        }
        // For second spaces
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        cout << endl;
    }
}

void InvertedFullStarPyramidPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout << "* ";
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
    FullStarPyramidPattern(n);
    InvertedFullStarPyramidPattern(n);
    return 0;
}

/*

Enter Number: 5
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

 */