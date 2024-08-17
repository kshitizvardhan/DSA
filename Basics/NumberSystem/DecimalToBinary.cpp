#include <bits/stdc++.h>
using namespace std;

// Division Method
string decimalToBinaryMethod1(int decimal) {

    if(decimal==0) return "0";

    string binary = "";
    while (decimal > 0) {
        int bit = decimal % 2;
        binary = to_string(bit) + binary;  // Prepend bit to the string
        decimal = decimal / 2;
    }
    return binary;
}
// to_string(bit) converts the bit to a string.
// + binary prepends the new bit to the existing binary string.


// BitWise method (preferred in interviews)
int decimalToBinaryMethod2(int decimal){
    int binary = 0;
    // can use while loop as well, but i needed the incrementing i, so used for loop, 
    // instead could have initialised i here as 0 and incremented as
    // pow(10, i++) in the while loop
    // end condition toh remains the same as (decimal > 0) in any of the loop.
    for(int i=0; decimal>0; i++){
        int bit = decimal & 1;
        binary = pow(10,i)*bit + binary;
        decimal = decimal >> 1;     // right shift the decimal by 1, that is 23 then 2, then 0;
    }
    return binary;
}

int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;
    cout << "The binary equivalent is: " << decimalToBinaryMethod1(num) << endl;
    cout << "The binary equivalent is: " << decimalToBinaryMethod2(num) << endl;
    return 0;
}

