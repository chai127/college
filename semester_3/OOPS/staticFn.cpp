// What’s a static function?
// It belongs to the class itself, not any particular object.
// You can call it without creating an object.
// It cannot access non-static members directly 
// because it’s not tied to any instance.

#include <iostream>

class MyClass {
public:
    static int count;  // static variable is shared by all objects

    MyClass() {
        count++;
    }

    // static function can access only static members
    static void showCount() {
        std::cout << "Count: " << count << std::endl;
    }
};
// In C++, static data members belong to the class itself, 
// not to any particular object.
//  But the class declaration only declares them, 
//  it doesn't allocate storage or define them.
// Since C++17, you can initialize static constexpr
//  or inline static members inside the class itself.
//  inline static int count = 0;  // C++17 and later
int MyClass::count = 0;  // initialize static variable outside class

int main() {
    MyClass a;
    MyClass b;

    MyClass::showCount();  // access static function without object
    a.showCount();         // also accessible through object, but not recommended

    return 0;
}


// static constexpr
// Used for constant static members.
// Must be initialized inside the class.
// Acts like a compile-time constant.
// No out-of-class definition needed unless you odr-use it.

// ODR-use - The One Definition Rule means that every object or 
// function should have exactly one definition in your whole program 
// (across all source files). If you violate this, you get linker errors 
// or undefined behavior.
// But if you try to take its address, 
// or use it in a way that requires the actual 
// object in memory, you do ODR-use it, and then a definition must exist.

// struct Foo {
//     static constexpr int x = 5;  // initialized inside class
// };

// int main() {
//     int a = Foo::x;           // no ODR-use, no out-of-class def needed
//     const int* p = &Foo::x;   // ODR-use, requires out-of-class definition
// }