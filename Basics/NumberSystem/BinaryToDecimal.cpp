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
        binary >>= 1;  // Shift the binary number right by 1 bit
    }

    return decimal;
}

int main(){
    int binary;
    cout <<  "Enter Binary Number: ";
    cin >> binary;
    cout << "The Decimal Representation is: " << binaryToDecimalMethod1(binary);
    cout << "The Decimal Representation is: " << binaryToDecimalMethod2(binary);
    return 0;
}


// # Dry Run of Binary to Decimal Conversion Method 2

// **Binary Number:** `1010`

// **Objective:** Convert the binary number `1010` to its decimal representation using bitwise operations.

// ### Step-by-Step Dry Run

// 1. **Initial Values:**
//    - `decimal = 0`
//    - `bit_position = 0`
//    - `binary = 1010`

// 2. **First Iteration:**
//    - **Extract the Last Bit:**
//      - `last_digit = binary & 1`
//      - `1010 & 1` yields `0` (LSB is `0`).
//    - **Update Decimal:**
//      - `decimal |= (last_digit << bit_position)`
//      - `decimal |= (0 << 0)` results in no change: `decimal = 0`.
//    - **Shift Binary Right:**
//      - `binary >>= 1`
//      - `1010 >> 1` results in `101`.
//    - **Update Values:**
//      - `decimal = 0`
//      - `bit_position = 1`
//      - `binary = 101`

// 3. **Second Iteration:**
//    - **Extract the Last Bit:**
//      - `last_digit = binary & 1`
//      - `101 & 1` yields `1` (LSB is `1`).
//    - **Update Decimal:**
//      - `decimal |= (last_digit << bit_position)`
//      - `decimal |= (1 << 1)` results in `decimal |= 2`, so `decimal = 2`.
//    - **Shift Binary Right:**
//      - `binary >>= 1`
//      - `101 >> 1` results in `10`.
//    - **Update Values:**
//      - `decimal = 2`
//      - `bit_position = 2`
//      - `binary = 10`

// 4. **Third Iteration:**
//    - **Extract the Last Bit:**
//      - `last_digit = binary & 1`
//      - `10 & 1` yields `0` (LSB is `0`).
//    - **Update Decimal:**
//      - `decimal |= (last_digit << bit_position)`
//      - `decimal |= (0 << 2)` results in no change: `decimal = 2`.
//    - **Shift Binary Right:**
//      - `binary >>= 1`
//      - `10 >> 1` results in `1`.
//    - **Update Values:**
//      - `decimal = 2`
//      - `bit_position = 3`
//      - `binary = 1`

// 5. **Fourth Iteration:**
//    - **Extract the Last Bit:**
//      - `last_digit = binary & 1`
//      - `1 & 1` yields `1` (LSB is `1`).
//    - **Update Decimal:**
//      - `decimal |= (last_digit << bit_position)`
//      - `decimal |= (1 << 3)` results in `decimal |= 8`, so `decimal = 10`.
//    - **Shift Binary Right:**
//      - `binary >>= 1`
//      - `1 >> 1` results in `0`.
//    - **Update Values:**
//      - `decimal = 10`
//      - `bit_position = 4`
//      - `binary = 0`

// 6. **Termination:**
//    - **Binary Value:** `0` (no more bits to process).
//    - **Final Decimal Value:** `10`

// **Conclusion:** The binary number `1010` converts to `10` in decimal.

