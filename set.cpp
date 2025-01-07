#include<iostream>
#include<set>

using namespace std;

int main() {
    set<int> st; // stores in sorted order and unique elements only
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}
    // functionality of insert in vector can be used also, that only increases efficiency
    // begin(), end(), rbegin(), rend(), size(), empty(), and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it=st.find(3); // returns an iterator pointing to 3
    auto it = st.find(6); // returns an iterator pointing to st.end()
    // {1, 4, 5}
    st.erase(5); // {1, 5} erases 5, takes logarithmic time  

    int cnt = st.count(1); // returns 1 or 0
    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

    // lower_bound() and upper_bound() function works in the same way as in vector
    // it does binary search for the given value
    auto it3 = st.lower_bound(2); // returns an iterator pointing to 2
    auto it4 = st.upper_bound(3); // returns an iterator pointing to 4

    // everything is having complexity of O(logn)
}