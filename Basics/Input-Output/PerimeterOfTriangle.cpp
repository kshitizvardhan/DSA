#include <iostream>
using namespace std;

int PerimeterOfTriangle(int a,int b,int c){
    return a+b+c;
}

int main(){
    int a,b,c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;
    cout << "Perimeter of the Triangle is: " << PerimeterOfTriangle(a,b,c);
    return 0;
}