#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    // we can use push_back or emplace_back to insert elements in the vector
    v.push_back(1); 
    v.emplace_back(2); // emplace_back is faster than push_back
    /**
    emplace_back is faster than push_back because 
    it directly creates the element in the vector 
    instead of creating a copy of the element 
    and then inserting it in the vector
    **/

    vector<pair<int, int> > vec;
    vec.push_back(make_pair(1, 2)); // this is same as vec.emplace_back(1, 2);
    vec.emplace_back(1, 2); // no need to use curly braces

    vector<int> v1(5, 100); // {100, 100, 100, 100, 100}
    vector<int> v2(5); // {0, 0, 0, 0, 0}
    vector<int> v3(5, 20); // {20, 20, 20, 20, 20}
    vector<int> v4(v3); // {20, 20, 20, 20, 20}
    // copy the entire vector
    vector<int> v5(v4.begin(), v4.end()); // {20, 20, 20, 20, 20}
    // copy the entire vector
    vector<int> v6(v4.begin() + 1, v4.begin() + 3); // {20, 20}
    // copy the entire vector

    for(auto it = v6.begin(); it != v6.end(); it++) {
        cout << *it << " "<<endl;
    }

    vector<int>::iterator it = v.begin(); // it points to the first element
    vector<int>::iterator it1 = v.end(); // it points to the last element
    vector<int>::iterator it2 = v.rend(); //  it points to the first element
    vector<int>::iterator it3 = v.rbegin(); // it points to the last element
    cout<<v[0]<<" or "<<v.at(0)<<endl;
    cout<<v.back()<<endl;
    cout<<*(it)<<endl;

    for(vector<int>::iterator it = v6.begin(); it!=v6.end(); it++) {
        cout<<*(it)<<" ";
    }

    for(auto it: v6){
        cout<<it<<" ";
    }

    v6.erase(v6.begin() + 1); // {20, 20}
    v6.erase(v6.begin() + 1, v6.begin() + 3); // {20} 

    // insert function
    vector<int> v7(2, 100); // {100, 100}
    v7.insert(v7.begin(), 300); // {300, 100, 100}
    v7.insert(v7.begin() + 1, 2, 30); // {300, 30, 30, 100, 100}
    vector<int> copy(2, 5); // {5, 5}
    v7.insert(v7.begin(), copy.begin(), copy.end()); // {5, 5, 300, 30, 30, 100, 100}
    cout<<v7.size();

    v7.pop_back(); // {5, 5, 300, 30, 30, 100}
    v7.clear(); // erase all elements at once

    v7.swap(v6); // swap v7 and v6
    v7.empty(); // return true if vector is empty
    
}