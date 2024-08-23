#include <iostream>
using namespace std;

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
    InvertedFullStarPyramidPattern(n);
    return 0;
}

/*

Enter Number: 10
  * * * * * * * * * * * * * * * * * * *
    * * * * * * * * * * * * * * * * *
      * * * * * * * * * * * * * * *
        * * * * * * * * * * * * *
          * * * * * * * * * * *
            * * * * * * * * *
              * * * * * * *
                * * * * *
                  * * *
                    *

 */