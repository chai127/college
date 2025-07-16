#include <iostream>


int main() {
    int a;
    int b;
    std::cin>>a>>b;
    try{
        if (b == 0) {
        throw std::runtime_error("Division by zero error");
        //  in C++, integer division by zero causes undefined behavior
        //   — it might crash your program, 
        //   cause a hardware fault, 
        //   or do something unexpected, 
        //   but it won’t throw a C++ exception you can catch.
    } else {
        std::cout << a / b << "\n";
    }

        
    }catch(const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << "\n";
    }


    return 0;
}