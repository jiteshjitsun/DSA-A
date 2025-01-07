#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> st; 
    // everything is same as set
    // only difference is that it does not store in any particular order
    // it has a better complexity than set in most cases, except some when collision happens
    // it is implemented using hashing
    // lower_bound and upper_bound functions do not work, rest all functions are same
}