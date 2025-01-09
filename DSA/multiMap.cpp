#include<iostream>

using namespace std;

int main() {
    // everything is same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
    multimap<string, int> mpp;
    mpp.emplace("🐼", 1);
    mpp.emplace("🐼", 2);
    mpp.emplace("🐼", 3);
    mpp.emplace("🐼", 4);
    mpp.emplace("🐼", 5);
    mpp.emplace("🐼", 6);
}