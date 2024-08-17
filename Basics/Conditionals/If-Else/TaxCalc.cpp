#include <bits/stdc++.h>
using namespace std;

int main(){
    double income;
    cout << "Enter your income: ";
    cin >> income;


    // // Set precision for floating-point numbers
    // cout << fixed << setprecision(2);

    if(income < 500000){
        cout << "Your income is not taxable. Hence nothing to be paid.";
    } else if (income < 1000000){
        cout << "You need to pay 20% tax on your income, i.e. "<< fixed << setprecision(2) << (income*0.2);
    } else {
        cout << "You need to pay 30% tax on your income, i.e. "<< fixed << setprecision(2) << (income*0.3);
    }

    // // Reset formatting to default if needed
    // cout << defaultfloat;

    return 0;
}