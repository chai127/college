#include <iostream>
#include <algorithm>
#include <utility>

std::pair<int, int> passByReference(int a, int b) {
   std::swap(a,b);
   return {a,b};
}

int& returnByReference(int& a){
    return a;
}
int main() {
    std::pair<int, int> result = passByReference(20, 30);
    std::cout<<"first: "<<result.first<<" second : "<<result.second<<'\n';
    int num = 4;
    returnByReference(num) = 5;
    std::cout<<"after swap: "<<num;
    return 0;
}
