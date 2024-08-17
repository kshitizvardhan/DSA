#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0; i<=10; i++){
        if(i%2==0){
            continue; // if i is even, then skip that particular iteration.
        }
        else {
            cout << i << " ";
        }
    }
    return 0;
}