#include <iostream>
using namespace std;

void AlphabetFullPyramidPattern(int n){
    for(int i=0; i<n; i++){
        char ch ='A';
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        for(int j=0; j<2*i+1; j++){
            // set breakpoint to change the order of printing
            if(j<i){
                cout << ch++ << " ";
            } else cout << ch-- << " ";
        }
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    AlphabetFullPyramidPattern(n);
    return 0;
}

/*

Enter a Number: 5
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

 */