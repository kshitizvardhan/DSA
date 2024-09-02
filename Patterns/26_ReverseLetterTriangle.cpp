#include <bits/stdc++.h>
using namespace std;

void ReverseLetterTrianglePattern(int n){
    for(int i=0; i<n; i++){
        for(int j=65; j<(65+n)-i; j++){
            cout << (char)j << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    ReverseLetterTrianglePattern(n);
    return 0;
}

/*

Enter a Number: 5
A B C D E
A B C D
A B C
A B
A

 */