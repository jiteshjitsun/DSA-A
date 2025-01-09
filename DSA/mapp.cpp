#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int, int> mpp; // map is a container that stores the data in the form of key value pairs 
    // keys are unique and sorted
    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;
    // keys are unique and sorted
    // values can be same or different
    // everything is same as set
    // lower_bound() and upper_bound() function works in the same way as in vector
    // it does binary search for the given value
    // everything is having complexity of O(logn)

    mpp[1] = 2; // {1, 2}
    mpp.emplace(3, 1); // {1, 2}, {3, 1}
    mpp.insert({2, 4}); // {1, 2}, {2, 4}, {3, 1}
    mpp2[{2, 3}] = 10; // {1, 2}, {2, 4}, {3, 1}, {2, 3, 10}

    for(auto it : mpp) {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1]; // 2
    cout<<mpp[5]; // 0

    auto it = mpp1.find(3); // points to the position where 3 is present
    cout<<*(it).second; // 1

    auto it = mpp1.find(5); // points to the position where 5 is not present
    cout<<*(it).second; // 0
}