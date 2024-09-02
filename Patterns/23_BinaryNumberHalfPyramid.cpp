#include <bits/stdc++.h>
using namespace std;

void BinaryNumberHalfPyramid(int n){
    for(int i=0; i<n; i++){
        int start;
        if(i%2 ==0){
            start = 1;
        } else {
            start = 0;
        }
        for(int j=0; j<=i; j++){
            cout << start << " ";
            start = 1-start;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    BinaryNumberHalfPyramid(n);
    return 0;
}

/*

Enter a Number: 5
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 

 */