#include <iostream>
#include <iomanip>  // Include for manipulators

int main() {
    int num = 255;
    double pi = 3.141592653589793;

    // Setting width and fill character
    std::cout << "Width and fill character:\n";
    std::cout << std::setw(10) << std::setfill('*') << num << std::endl;

    // Floating-point precision
    std::cout << "Floating-point precision:\n";
    std::cout << std::fixed << std::setprecision(4) << pi << std::endl;

    // Hexadecimal output
    std::cout << "Hexadecimal output:\n";
    std::cout << std::hex << num << std::endl;

    // Showing base
    std::cout << "Showing base:\n";
    std::cout << std::showbase << std::hex << num << std::endl;

    // Boolean alpha
    std::cout << "Boolean alpha:\n";
    bool flag = true;
    std::cout << std::boolalpha << flag << std::endl;

    // Justification
    std::cout << "Justification:\n";
    std::cout << std::left << std::setw(10) << num << "Left" << std::endl;
    std::cout << std::right << std::setw(10) << num << "Right" << std::endl;
    std::cout << std::internal << std::setw(10) << num << "Internal" << std::endl;

    // Positive sign
    std::cout << "Positive sign:\n";
    std::cout << std::showpos << num << std::endl;

    return 0;
}


/*
From <iomanip> Library

std::setw(int n) -> Sets the width of the next input/output field to n.
std::setfill(char c) -> Sets the fill character for padding fields.
std::setprecision(int n) -> Sets the decimal precision for floating-point output.
std::fixed -> Uses fixed-point notation for floating-point numbers.
std::scientific -> Uses scientific notation for floating-point numbers.
std::hex -> Outputs integers in hexadecimal base.
std::dec -> Outputs integers in decimal base.
std::oct -> Outputs integers in octal base.
std::showpoint -> Forces the output to show the decimal point for floating-point numbers even if they are whole numbers.
std::noshowpoint -> Opposite of std::showpoint; suppresses showing the decimal point.
std::showbase -> Shows the base prefix (0x for hex, 0 for octal) for integers.
std::noshowbase -> Opposite of std::showbase; suppresses the base prefix.
std::uppercase -> Uses uppercase letters for hexadecimal output.
std::nouppercase -> Opposite of std::uppercase; uses lowercase letters for hexadecimal output.
std::left -> Left-justifies the output in the field.
std::right -> Right-justifies the output in the field.
std::internal -> Adjusts the field such that the fill characters are placed between the sign and the number.
std::boolalpha -> Outputs true or false for bool values.
std::noboolalpha -> Outputs 1 or 0 for bool values.
std::showpos -> Forces showing the positive sign (+) for positive numbers.
std::noshowpos -> Opposite of std::showpos; suppresses showing the positive sign.

From <iostream> Library
std::endl -> Inserts a newline character and flushes the stream.
std::flush -> Flushes the stream.
std::ws -> Skips leading whitespace characters.

 */