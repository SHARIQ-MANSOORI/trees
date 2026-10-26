#include<iostream>
#include<vector>
using namespace std;
// Node class 
class Node{
public:

    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

// tree implementation
static int idx  = -1;

Node* buildTree(vector<int > po){

    idx++;
    if(po[idx] == -1) return NULL;

    Node* root = new Node(po[idx]);

    //  cout << root->data << " ";
    root->left = buildTree(po);
    root->right = buildTree(po);

   

    return root;
}

void preOrderTraversal(Node* root){

    if(root == NULL) return;

    cout << root->data << " ";

     preOrderTraversal(root->left);
     preOrderTraversal(root->right);
     return;
}


int main(){
    vector<int> po = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root =  buildTree(po);
   
    preOrderTraversal(root);
}