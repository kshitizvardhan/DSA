#include <iostream>
#include <string>
using namespace std;

class Document {

    string title;
    mutable int accessCount; // Can be modified in const functions

public:
    // Parameterized constructor
    Document(const string& title) : title(title), accessCount(0) {}

    // Const function that increments accessCount
    string getTitle() const {
        accessCount++; // Allowed because accessCount is mutable
        // if the variable is not mutable, then what happens is that, the this pointer passed to the functions also becomes a const and is not able to modify the variable
        return title;
    }

    // Function to retrieve the access count
    int getAccessCount() const {
        return accessCount;
    }
};

int main() {
    const Document doc("C++ Guide");

    std::cout << "Title: " << doc.getTitle() << std::endl;
    std::cout << "Title accessed " << doc.getAccessCount() << " times." << std::endl;

    // Accessing the title again
    std::cout << "Title: " << doc.getTitle() << std::endl;
    std::cout << "Title accessed " << doc.getAccessCount() << " times." << std::endl;

    return 0;
}


/*

Explanation
When a member function is marked as const, it promises not to modify any member variables of the object it is called on. However, there are cases where you might want to maintain some state internally without breaking this promise. The mutable keyword allows you to declare specific member variables as mutable, meaning they can be modified even in const member functions.

Use Cases
Caching: Storing the result of an expensive calculation the first time it is requested so subsequent requests are faster.
Reference Counting: Keeping track of how many times an object is accessed, even when accessed through const methods.
Debugging or Logging: Updating internal logs or counters to track object usage.

 */