# Dry Run of `decimalToBinaryMethod2`

Let's walk through a dry run of the `decimalToBinaryMethod2` function step by step using an example input.

### Example Input: `decimal = 23`

### Initial Values:
- `binary = 0`
- `i = 0`

### Iteration 1:
- **Condition:** `decimal > 0` → `23 > 0` (True)
- **Bit Calculation:**
  - `bit = decimal & 1`
  - `bit = 23 & 1` → `bit = 1`
- **Binary Update:**
  - `binary = pow(10, i) * bit + binary`
  - `binary = pow(10, 0) * 1 + 0`
  - `binary = 1`
- **Right Shift `decimal`:**
  - `decimal = decimal >> 1`
  - `decimal = 23 >> 1` → `decimal = 11` (Binary: `10111` → `1011`)

### Iteration 2:
- **Condition:** `decimal > 0` → `11 > 0` (True)
- **Bit Calculation:**
  - `bit = 11 & 1` → `bit = 1`
- **Binary Update:**
  - `binary = pow(10, 1) * bit + binary`
  - `binary = 10 * 1 + 1`
  - `binary = 11`
- **Right Shift `decimal`:**
  - `decimal = 11 >> 1` → `decimal = 5` (Binary: `1011` → `101`)

### Iteration 3:
- **Condition:** `decimal > 0` → `5 > 0` (True)
- **Bit Calculation:**
  - `bit = 5 & 1` → `bit = 1`
- **Binary Update:**
  - `binary = pow(10, 2) * bit + binary`
  - `binary = 100 * 1 + 11`
  - `binary = 111`
- **Right Shift `decimal`:**
  - `decimal = 5 >> 1` → `decimal = 2` (Binary: `101` → `10`)

### Iteration 4:
- **Condition:** `decimal > 0` → `2 > 0` (True)
- **Bit Calculation:**
  - `bit = 2 & 1` → `bit = 0`
- **Binary Update:**
  - `binary = pow(10, 3) * bit + binary`
  - `binary = 1000 * 0 + 111`
  - `binary = 111` (No change since `bit` was `0`)
- **Right Shift `decimal`:**
  - `decimal = 2 >> 1` → `decimal = 1` (Binary: `10` → `1`)

### Iteration 5:
- **Condition:** `decimal > 0` → `1 > 0` (True)
- **Bit Calculation:**
  - `bit = 1 & 1` → `bit = 1`
- **Binary Update:**
  - `binary = pow(10, 4) * bit + binary`
  - `binary = 10000 * 1 + 111`
  - `binary = 10111`
- **Right Shift `decimal`:**
  - `decimal = 1 >> 1` → `decimal = 0` (Binary: `1` → `0`)

### End Condition:
- **Condition:** `decimal > 0` → `0 > 0` (False)
- The loop exits.

### Final Output:
- **`binary = 10111`**, which is the correct binary representation of the decimal number `23`.

### Summary:
- Each iteration processes the least significant bit of the decimal number and updates the `binary` variable accordingly.
- The binary number is constructed from right to left using the bitwise AND (`& 1`) and right shift (`>> 1`) operations.
- The loop runs until the `decimal` value becomes `0`.



# Dry Run of `23 & 1`

Let's perform a dry run of the bitwise AND operation between the decimal number `23` and `1`.

### Step 1: Represent 23 in Binary

The decimal number `23` in binary is: 10111

### Step 2: Write Binary Representation of 1

The binary representation of `1` is: 00001

### Step 3: Perform Bitwise AND (`&`) Operation

Align the binary representations and perform the bitwise AND operation:

  10111   (23 in binary)
& 00001   (1 in binary)
--------
  00001   (Result) 

### Step 4: Analyze Each Bit

Compare each bit from `23` and `1`:

1. **Rightmost Bit:**
   - `1 & 1 = 1`
   
2. **Next Bit:**
   - `1 & 0 = 0`
   
3. **Next Bit:**
   - `1 & 0 = 0`
   
4. **Next Bit:**
   - `0 & 0 = 0`
   
5. **Leftmost Bit:**
   - `1 & 0 = 0`

The result is `00001`, which is `1` in decimal.

### Conclusion

The operation `23 & 1` results in `1`. This indicates that the least significant bit (LSB) of `23` is `1`, confirming that `23` is an odd number.

// The LSB is the bit located at the far-right end of a binary number.
// The MSB is the bit located at the far-left end of a binary number.

Odd Number: The LSB of an odd number is always 1.
Even Number: The LSB of an even number is always 0.

Examples:
    Number: 5 (Binary: 0101)
    LSB: 1 (Odd)

    Number: 8 (Binary: 1000)
    LSB: 0 (Even)