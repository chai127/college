#include <iostream>
#include <algorithm>

class complex {
    float img, real;

    public:
    complex(int a, int b) {
        real = a;
        img = b;
    }
    //this function can now access private matters of complex class
    friend void display(complex& obj);
};

void display(complex& obj) {
    std::cout<<"real is: "<<obj.real<<"\nimaginary is: "<<obj.img;
}

int main() {
    complex c1(12,40);
    display(c1);
    
    return 0;
}