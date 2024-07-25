/*

In C++, the scope resolution operator is ::. It is used for the following purposes.

1) To access a global variable when there is a local variable with same name: 

 */

#include<iostream> 
using namespace std;

int x; // Global x

int main()
{
int x = 10; // Local x
cout << "Value of global x is " << ::x;
cout << "\nValue of local x is " << x; 
return 0;
}
