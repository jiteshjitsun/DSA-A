#include<iostream>
#include<queue>

using namespace std;

int main() {
    queue<int> q; // FIFO - First In First Out
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}
    q.back() += 5; // {1, 2, 9}
    cout<<q.back(); // prints 9
    q.pop(); // {2, 9}
    cout<<q.front(); // prints 2
    // size, swap, empty same as stack
}