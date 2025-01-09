#include<iostream>
#include<stack>

using namespace std;

int main() {

    stack<int> st; // LIFO - Last In First Out
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3, 2, 1}
    st.emplace(5); //   {5, 4, 3, 2, 1}
    cout<<st.top(); // prints 5

    st.pop(); // {4, 3, 2, 1}
    cout<<st.top(); // prints 4
    cout<<st.size(); // prints 4
    cout<<st.empty(); // prints 0
    stack<int> st1, st2;
    st1.swap(st2); // swaps st1 and st2

    // all operations are O(1)
}