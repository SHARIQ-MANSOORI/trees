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
    root->left = buildTree(po);
    root->right = buildTree(po);

    return root;
}


int main(){
    vector<int> po = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root =  buildTree(po);
    cout  << root->data << endl;
    cout  << root->left->data << endl;
    cout  << root->right->data << endl;
    cout  << root->right->left->data << endl;
    cout  << root->right->right->data << endl;

}