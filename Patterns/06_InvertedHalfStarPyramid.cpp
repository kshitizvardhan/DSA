#include <iostream>
using namespace std;

void InvertedHalfStarPyramidPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    InvertedHalfStarPyramidPattern(n);
    return 0;
}

/*

Enter Number: 10
* * * * * * * * * *
* * * * * * * * *
* * * * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

 */