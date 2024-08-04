#include <bits/stdc++.h>
using namespace std;

template <typename T>

T myMax(T a, T b){
    return (a>b) ? a : b;
}

int main(){
    cout << myMax<int>(3,5) << endl;
    cout << myMax<string>("Kshitiz","43") << endl;
    return 0;
}

// internally what compiler did was

// int myMax(int a, int b){
//     return (a>b) ? a : b;
// }

// string myMax(string a, string b){
//     return (a>b) ? a : b;
// }

