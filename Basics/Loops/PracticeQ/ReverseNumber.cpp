#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int save = n;
    int reversed = 0;
    while(n>0){
        int digit = n%10;
        reversed = reversed*10 + digit;
        n = n/10;
    }
    cout << "Reversed Number: " << reversed << endl;
    if(save==reversed) cout << "Given Number is also a Palindrome";
    return 0;
}