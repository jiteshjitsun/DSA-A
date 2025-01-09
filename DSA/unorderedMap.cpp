#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    // same as set and map
    // everything is same as set and map
    // only difference is that it does not store in any particular order
    // it has a better complexity than set and map in most cases, except some when collision happens
    // it is implemented using hashing
    // lower_bound and upper_bound functions do not work, rest all functions are same
    // everything is having complexity of O(1)
    // it is implemented using hashing
    // it is not recommended to use it in competitive programming
    unordered_map<int, int> mpp;
    mpp[1] = 2;
    mpp.emplace(3, 1); // {1, 2}, {3, 1}
    mpp.insert({2, 4}); // {1, 2}, {2, 4}, {3, 1}
    unordered_map<pair<int, int>, int> mpp2;
    mpp2[{2, 3}] = 10; // {1, 2}, {2, 4}, {3, 1}, {2, 3, 10}
    for(auto it : mpp) {
        cout<<it.first<<" "<<it.second<<endl;
    }
}