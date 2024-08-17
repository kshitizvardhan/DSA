#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter three numbers: ";
    cin >>a>>b>>c;
    if(a==b && b==c){
        cout << "All three are equal";
    } else if (a>=b && a>=c){
        cout << a << " is greater than " << b << " and " << c;
    } else if (b>=c && b>=a){
        cout << b << " is greater than " << a << " and " << c;
    } else {
        cout << c << " is greater than " << a << " and " << b;
    }

    return 0;
}