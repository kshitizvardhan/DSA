#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int sum=0;
    while(n>0){
        int digit = n%10;
        sum += digit;
        n=n/10;
    }
    cout << "total sum of digits: " << sum;
    return 0;
}

// Enter Number: 2222
// total sum of digits: 8

// Enter Number: 5564
// total sum of digits: 20