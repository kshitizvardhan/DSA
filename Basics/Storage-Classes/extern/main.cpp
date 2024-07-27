#include <bits/stdc++.h>
using namespace std;

extern int x;

void externStorageClass() {
    cout << "Demonstrating extern class\n";
    cout << "Value of the variable 'x' declared as extern: " << x << "\n";
    x = 2;
    cout << "Modified value of the variable 'x' declared as extern: " << x << "\n";
}

int main() {

    externStorageClass();
    return 0;
}

// g++ .\main.cpp .\externVar.cpp -o program