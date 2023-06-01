#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node* right;
    Node(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

Node* insertIntoBST(Node* &root,int val){
    //Base Case
    if(root==NULL){
        root=new Node(val);
    }
    if(val>root->data){
        root->right=insertIntoBST(root->right,val);
    }
    else{
        root->left=insertIntoBST(root->left,val);
    }
    return root;
}


int main(){
   Node* root = NULL;
   cout<<"Enter the data to create BST"<<endl;
   //takeInput(root);
   //OR
   int data;
    cin>>data;
    
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }

    inorder(root);
   
   
}