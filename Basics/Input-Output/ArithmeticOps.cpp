#include <bits/stdc++.h>
using namespace std;

int main(){
    int A = 10;
    int B = 5;

    // These are binary operators, as they require two operators.
    cout << "Addition = " << A+B << endl;             
    cout << "Subtraction = " << A-B << endl;       
    cout << "Multiplication = " << A*B << endl;
    cout << "Division = " << A/B << endl;
    cout << "Modulo = " << A%B << endl;
    
    // These are unary operators, as they don't require two operands.
    cout << "Increment = " << ++A << endl;          // first increments A to 11 then Outputs 11      
    cout << "Decrement = " << --B << endl;          // first decrements B to 4 then Outputs 4  

    int E = 10;
    cout << "Postfix Increment = " << E++ << endl;  // Outputs 10, then increments E to 11
    cout << "Current E = " << E << endl;            // Outputs 11
    cout << "Postfix Decrement = " << E-- << endl;  // Outputs 11, then decrements E to 10
    cout << "Current E = " << E << endl;            // Outputs 10

    int F = 10;
    F += 5;                                 // Equivalent to F = F + 5
    cout << "F after += : " << F << endl;   // Outputs 15

    double G = 25.0;
    cout << "Square Root = " << sqrt(G) << endl;  // Outputs 5
    cout << "Power = " << pow(G, 2) << endl;      // Outputs 625
    cout << "Absolute = " << abs(-10) << endl;    // Outputs 10

    return 0;
}