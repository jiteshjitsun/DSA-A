#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = right = NULL;
    }    
};

void display(node* root){
    if(root==NULL){
        return;
    }
    
    display(root->left);
    cout<<root->data<<endl;
    display(root->right);
}

int main(){
    struct node* root = new node(1);

    root->left = new node(2);
    root->right = new node(3);

    root->left->right = new node(4);

    display(root);
}
