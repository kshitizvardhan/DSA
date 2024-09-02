#include <bits/stdc++.h>
using namespace std;

void NumberCrownPattern(int n){
    for(int i=0; i<n; i++){
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        for (int j = 1; j < 2 * (n - i); j++) {
            cout << "  "; // Two spaces
        }

        // Print the second decreasing sequence
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    NumberCrownPattern(n);
    return 0;
}

/*

Enter a Number: 5

1               1
1 2           2 1
1 2 3       3 2 1
1 2 3 4   4 3 2 1

 */