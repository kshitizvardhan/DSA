#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    cout << "total number of digits: " << count;
    return 0;
}