#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<string>> vect = { 
                                    {"Dg set", "Diesel generator"},
                                    {"Organization", "Organisation"},
                                    {"Group", "Organization"},
                                    {"Orange", "Kinnu"},
                                    {"Orange", "narangi"}
                                };


    unordered_map<string,vector<string>> mp;

    for(auto it: vect){

        if(mp.find(it[1])!=mp.end())
            mp[it[1]].push_back(it[0]);
        else
            mp[it[0]].push_back(it[1]);

        
    }

    
    cout<<"[ ";
    for(auto it:mp){
        cout<<" ["<<'"'<<it.first<<'"'<<",";
        vector<string> v = it.second;
        string str = "";
        for(auto i:v){
            // cout<<'"'<<i<<'"'<<",";
            str += '"' + i + '"' + ",";
        }
        str.pop_back();

        cout<<str<<"] ";
    }
    cout<<"] ";


}