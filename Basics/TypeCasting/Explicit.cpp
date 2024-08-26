#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 5;
    float b = 9.75f;
    double d = 15.87654321;
    char c = 'A';
    string str = "123";

    // Casting from int to float
    float result1 = (float)a;
    cout << "Integer " << a << " cast to float: " << result1 << endl;

    // Casting from float to int
    int result2 = (int)b;
    cout << "Float " << b << " cast to integer: " << result2 << endl;

    // Casting from int to char
    char result3 = (char)(a + 65); // 65 is the ASCII value for 'A'
    cout << "Integer " << a << " cast to char: " << result3 << endl;

    // Casting from char to int
    int result4 = (int)c;
    cout << "Character '" << c << "' cast to integer (ASCII value): " << result4 << endl;

    // Casting from double to float
    float result5 = (float)d;
    cout << "Double " << d << " cast to float: " << result5 << endl;

    // Casting from double to int
    int result6 = (int)d;
    cout << "Double " << d << " cast to integer: " << result6 << endl;

    // Casting from string to int (using stoi)
    int result7 = stoi(str);
    cout << "String \"" << str << "\" cast to integer: " << result7 << endl;

    // Casting from int to string
    string result8 = to_string(a);
    cout << "Integer " << a << " cast to string: " << result8 << endl;

    return 0;
}
