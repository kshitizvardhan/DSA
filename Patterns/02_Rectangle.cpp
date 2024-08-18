#include <bits/stdc++.h>
using namespace std;

void RectanglePattern(int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int rows,cols;
    cout << "Enter Number of rows and columns: ";
    cin >> rows >> cols;
    RectanglePattern(rows, cols);
    return 0;
}

// Enter Number of rows and columns: 3 5
// * * * * *
// * * * * *
// * * * * *

// Enter Number of rows and columns: 3 8
// * * * * * * * *
// * * * * * * * *
// * * * * * * * *