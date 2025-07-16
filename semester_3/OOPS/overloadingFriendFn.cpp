// Overloading operators using friend functions is common when you want the operator 
// to work with two operands symmetrically, 
// or when you want to allow access to private members
//  without making the operator a member.
#include <iostream>
class meter {
    public:
    int value;
    meter(int a){
        this->value = a;
    }
    
};

class centimeter {
    public:
    int value;
       centimeter(int a){
        this->value = a;
    }
};

class result {
    public:
    int value1, value2;
    result(int v = 0, int k=0) : value1(v), value2(k) {}
    void display() const {
    std::cout << value1 << " meter(s) and " << value2 << " centimeter(s)\n";
}
    //cannot be declared inside the class
    friend result operator+(const meter& m, const centimeter& c); 
};
result operator+(const meter& m, const centimeter& c) {
        int value1 = m.value + c.value/100;
        int value2 = c.value%100;
        return result(value1, value2);
    }

int main() {
    result r;
    meter m(121);
    centimeter c(981);
    r = m + c;
    r.display();
    return 0;
}