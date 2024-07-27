#include <iostream>
using namespace std;

void registerStorageClass()
{

	cout << "Demonstrating register class\n";

	// declaring a register variable
	register char b = 'G';

	// printing the register variable 'b'
	cout << "Value of the variable 'b'"
		<< " declared as register: " << b;
}
int main()
{

	// To demonstrate register Storage Class
	registerStorageClass();
	return 0;
}

/*

 register storage class specifier is deprecated in C++17 and removed in C++20. The register keyword was originally intended to hint to the compiler that the variable should be stored in a CPU register for faster access. However, modern compilers are sophisticated enough to optimize variable storage without needing explicit hints from the programmer.


 */