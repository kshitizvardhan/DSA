// CPP program to illustrate
// class objects as static
#include <iostream>
using namespace std;

class Kshitiz {
	int i = 0;

public:
	Kshitiz()
	{
		i = 0;
		cout << "Inside Constructor\n";
	}

	~Kshitiz() { cout << "Inside Destructor\n"; }
};

int main()
{
	int x = 0;
	if (x == 0) {
		static Kshitiz obj;     // If the object is declared inside the if block as non-static. then the scope of a variable is inside the if block only. and as soon as the if block is exited, the destructor will be called to destroy the object. See the change in output after removing static keyword.
	}
	cout << "End of main\n";
}

// In output the destructor is invoked after the end of the main. 
// This happened because the scope of static objects is throughout the lifetime of the program.

/*

Why the Program Appears to Run even After main function ended?

The appearance that the program runs "after main" is due to the destructors for static objects being invoked after the main function completes. 
This is standard behavior to ensure static objects are cleaned up correctly, and it happens just before the program terminates.

After main finishes, the static object obj is destroyed as the program exits, triggering its destructor and outputting "Inside Destructor".

This is why the destructor for a static object declared inside a if block is called after the main function completes, not when the block is exited. 

 */
