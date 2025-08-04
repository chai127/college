#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    // enqueue
    q.push(3);
    q.push(4);
    q.push(5);
    
    // dequeue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    
    return 0;
}