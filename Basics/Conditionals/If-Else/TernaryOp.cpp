#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a Number: ";
    cin >> a;
    cout << ((a%2==0) ? "Even" : "Odd") << endl;        // parenthesis are important around the whole expression
    return 0;
}