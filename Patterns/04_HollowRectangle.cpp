#include <bits/stdc++.h>
using namespace std;

void HollowRectanglePattern(int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(i==0 || i==rows-1 || j==0 || j==cols-1){
                cout << "* ";
            }else{
                cout << "  ";   // Two spaces here to align the pattern
            }
        }
        cout << endl;
    }
}

int main(){
    int rows,cols;
    cout << "Enter Number of rows and columns: ";
    cin >> rows >> cols;
    HollowRectanglePattern(rows, cols);
    return 0;
}

/*

Enter Number of rows and columns: 4 10
* * * * * * * * * *
*                 *
*                 *
* * * * * * * * * *

 */