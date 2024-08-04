#include <iostream>
using namespace std;

template <typename T>

class Array {
private:
    T* ptr;
    int size;

public:
    Array(T arr[], int s) {
        ptr = new T[s];
        size = s;
        for (int i = 0; i < size; i++)
            ptr[i] = arr[i];
    }

    void print() {
        for (int i = 0; i < size; i++)
            cout << " " << *(ptr + i);
        cout << endl;
    }
};

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    Array <int> a(arr, 5);
    a.print();
    return 0;
}



/*

When you define the member functions outside the class, you need to remind the compiler that these functions are part of a class template. 
This is why you have template <typename T> before each out-of-class definition.

 */