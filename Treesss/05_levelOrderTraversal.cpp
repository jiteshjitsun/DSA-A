#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    queue<node*> q;
    q.push(root);
    vector<vector<int>> res;
    while(!q.empty()){
        int n = q.size();
        vector<int> v;
        for(int i=0; i<n; i++){
            node* no = q.front();
            q.pop();
            if(no->left!=NULL){
                q.push(no->left);
            }
            if(no->right!=NULL){
                q.push(no->right);
            }
            v.push_back(no->data);
        }
        res.push_back(v);
    }

    for(auto it:res){
        cout<<it<<endl;
    }
}