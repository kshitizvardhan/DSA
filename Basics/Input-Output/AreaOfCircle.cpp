#include <bits/stdc++.h>
using namespace std;

int main(){
    float radius;
    const double pie = 3.14;
    cout << "Enter Radius: ";
    cin >> radius;
    cout << "Area of Circle is: " << fixed << setprecision(2) << radius*radius*pie;
    return 0;
}