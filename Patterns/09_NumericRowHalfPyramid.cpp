#include <bits/stdc++.h>
using namespace std;

void NumericRowHalfPyramidPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    NumericRowHalfPyramidPattern(n);
    return 0;
}

/*

Enter Number: 5
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

 */