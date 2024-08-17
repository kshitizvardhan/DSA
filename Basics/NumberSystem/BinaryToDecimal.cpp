#include <bits/stdc++.h>
using namespace std;

int binaryToDecimalMethod1(int binary){
    int decimal = 0;
    for(int i=0; binary>0; i++){
        int digit = binary%10;
        decimal = decimal + digit*pow(2,i);
        binary = binary/10;
    }
    return decimal;
}

int binaryToDecimalMethod2(int binary){
    int decimal = 0;
    int bit_position = 0;  // Keeps track of the current bit position

    while (binary > 0) {
        int last_digit = binary & 1;  // Get the last bit (LSB)
        decimal |= (last_digit << bit_position);  // Set the bit in the decimal number
        bit_position++;  // Move to the next bit position
        binary = binary/10;
    }

    return decimal;
}

int main(){
    int binary;
    cout <<  "Enter Binary Number: ";
    cin >> binary;
    cout << "The Decimal Representation is: " << binaryToDecimalMethod1(binary) << endl;
    cout << "The Decimal Representation is: " << binaryToDecimalMethod2(binary) << endl;
    return 0;
}
