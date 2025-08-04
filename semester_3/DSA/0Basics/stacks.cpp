#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    stack<int> numbers;

    numbers.push(2);
    numbers.push(3);
    
    cout<<numbers.top();
    
    numbers.pop();
    
    cout<<numbers.top();
    return 0;
}