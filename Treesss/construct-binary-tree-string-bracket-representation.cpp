#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    /* data */
    int val;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int data){
        val = data;
        left = right = NULL;
    }
};

TreeNode* newNode(int data)
{
	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
	node->val = data;
	node->left = node->right = NULL;
	return (node);
}

void preOrder(TreeNode* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->val);
    preOrder(node->left);
    preOrder(node->right);
}

int jaoIndexLekeAao(string str, int si, int ei){

    if(si> ei) return -1;


    stack<char> st;

    for(int i=si; i<=ei; i++){

        if(str[i]=='('){
            st.push(str[i]);
        }
        else if(str[i]==')'){
            if(!st.empty() and st.top()=='('){
                st.pop();
                if(st.empty()){
                    return i;
                }
            }
        }
    }

    return -1;
}

TreeNode* BinaryBanao(string str, int si, int ei){

    if(si > ei){
        return NULL;
    }

    TreeNode* root = new TreeNode(str[si]-'0');
    int index = -1;


    // closing parenthesis uski value nikal lete h 
    if(si+1<=ei and str[si+1]=='('){
        index = jaoIndexLekeAao(str, si+1, ei);
    }

    if(index!=-1){
        root->left = BinaryBanao(str, si+2, index-1);

        root->right = BinaryBanao(str, index+2, ei - 1);
    }

    return root;
}

int main(){

    string str; // 4(2(3)(1))(6(5))
    cin>>str;

    TreeNode* root = BinaryBanao(str, 0 , str.length()-1);

    preOrder(root);
    
    
}