#include <bits/stdc++.h>
using namespace std;

void IncreasingLetterTrianglePattern(int n){
    for(int i=0; i<n; i++){
        for(int j=65; j<=65+i; j++){
            cout << (char)j << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    IncreasingLetterTrianglePattern(n);
    return 0;
}

/*

Enter a Number: 5
A
A B
A B C
A B C D
A B C D E

 */