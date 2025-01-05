#include<iostream>
#include<utility>
using namespace std;

// pairs is a part of utility library
void explainPair() {
    pair<int, int> p = make_pair(1, 3);
    cout<<p.first<<" "<<p.second<<endl;

    //nested property of pair
    pair<int, pair<int, int> > p1 = make_pair(1, make_pair(3, 4));
    cout<<p1.first<<" "<<p1.second.second<<endl;

    pair<int, int> arr[] = {make_pair(1, 2), make_pair(2, 3), make_pair(3, 4)};
    cout<<arr[2].first<<endl;
}

int main() {
    explainPair();
}