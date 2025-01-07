#include <iostream>

using namespace std;

int main() {
    // everything is same as set except that it can store multiple elements
    // same functions as set
    // only stores in sorted order
    // stores in ascending order


    multiset<int> ms; // stores in sorted order and multiple elements can be present
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    ms.erase(1); // all 1's are erased
    int cnt = ms.count(1); // returns 0
    // rest all functions are same as set

    // erase(val) - all the occurences will be erased
    // erase(iterator) - only that iterator will be erased
    // lower_bound() and upper_bound() function works in the same way as in vector
    ms.erase(ms.find(1)); // only a single one is erased

    ms.erase(ms.find(1), ms.find(1)+2); // erases 1, 1
}