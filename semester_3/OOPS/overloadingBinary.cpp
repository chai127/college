#include <iostream>

class opposite {
    int a,b;

    public:
    //this solves name shadowing 
    opposite(int a, int b) {
        this->a = a;
        this->b = b;
    }
    // an intitalizer list :> more efficient
    // opposite(int a, int b) : a(a), b(b) { }
    opposite operator+(opposite const& obj) {
        int k = a - obj.a;
        int m = b - obj.b;
        return opposite(k,m);
    }

    void display() {
        std::cout<<a<<' '<<b;

    }

};

int main() {
    opposite chai(41, 41);
    opposite tana(23,21);
    opposite random = chai+tana;
    random.display();
    return 0;
}