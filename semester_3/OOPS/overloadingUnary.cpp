#include <iostream>

class opposites {
    public:
    int num;
    opposites(int b) {
        num = b;
    }
    // void operator++() , is for pre fix ++obj
    // The int is not related to your class or the object 
    // — it's just a placeholder used only to differentiate between both
    //for this only int is allowed no other type


    //this is for post fix
    void operator++(int) {
        num--;
    }
    //this has a return type
    opposites& operator--(int) {
    num++;
    return *this;
    }
};

int main() {
    opposites op(2);
    op++;
    std::cout<<op.num<<'\n';
    op--;
    std::cout<<op.num;
    return 0;
}