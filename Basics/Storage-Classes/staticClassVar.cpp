
#include <iostream>
using namespace std;

class Kshitiz {
public:
	static int i;

	Kshitiz(){
		// Do nothing
	};
};

int Kshitiz::i = 1;     // this is how the user has to explicitly initialize the static member of the class

int main()
{
	Kshitiz obj1;
	Kshitiz obj2;
	obj1.i = 2;
	obj2.i = 3;

	// prints value of i
	cout << obj1.i << " " << obj2.i;
}

/*
undefined reference to `Kshitiz::i'
collect2.exe: error: ld returned 1 exit status

You can see in the above program that we have tried to create multiple copies of the static variable i for multiple objects. 
But this didn’t happen. 
So, a static variable inside a class should be initialized explicitly by the user
Using the class name and scope resolution operator outside the class. 

 */
