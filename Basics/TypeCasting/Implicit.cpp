#include <iostream>
using namespace std;

int main(){
    // Implicit Type casting always promotes to a large type to maintain precision
    // 1) int to float (here if float is converted to int, data loss occurs [So compiler always promotes to larger type])
    int a = 10;
    float b = 5.5;
    float result = a+b;         // 10.0 + 5.5
    cout << result << endl;     // 15.5

    // 2) char to int (as int is larger than char.. so char is converted to int implicitly)
    char ch = 'A';
    int c = ch+1;
    cout <<  c << endl;

    // 3) int to char
    int d = 97;
    char ch1 = d;       // ch1 = 97.... datatype is char, so 97 corresponding ascii character is stored in ch1.
    cout << ch1 << endl;
    return 0;
}