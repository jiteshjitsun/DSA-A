// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node* left;
    Node* right;
    int val;
    Node(int data){
        val = data;
        left = right = NULL;
    }
};


Node* bst(Node* root, int d){
    if(!root) return root = new Node(d);
    
    if(root->val > d){
        root->left = bst(root->left, d);
    }
    
    else if(root->val <= d){
        root->right = bst(root->right, d);
    }
    
    return root;
}

void inorder(Node* root, vector<int> &in){
    
    if(!root) return;
    
    inorder(root->left, in);
    in.push_back(root->val);
    inorder(root->right, in);
}


int main() {
    // Write C++ code here
    vector<int> pre =  {10, 5, 1, 7, 40, 50};
    
    Node* root = NULL;
    for(int i=0; i<pre.size(); i++){
        root = bst(root, pre[i]);  
    }
    
    vector<int> in;
    inorder(root, in);
    
    for(auto it:in){
        cout<<it<<" ";
    }

    return 0;
}