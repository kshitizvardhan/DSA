#include <iostream>
using namespace std;

template <typename T1, typename T2 = int> class Pair {
    
    public:
        T1 first;
        T2 second;

        Pair(T1 a, T2 b) : first(a), second(b) {}

        void display() {
            cout << "First: " << first << ", Second: " << second << endl;
        }
};

int main() {
    Pair<double> p1(1.23, 456); // Uses Pair<double, int>
    p1.display();

    Pair<int, char> p2(123, 'A'); // Uses Pair<int, char>
    p2.display();

    return 0;
}
