#include "tree.h"

void tree::find(int input){
  if(root == NULL){
    cout << "This BST is empty! " << endl;
  }else{
    if(input == current->data){
      cout << "found" << endl;
    }else if(input < current->data){
      if(current->left == NULL){
        current->left = n;
      }else{
        add(input, current->left);
      }
    }else if(input > current->data){
      if(current->right == NULL){
        current->right = n;
      }else{
        add(input, current->right);
      }
    }
  }
  
}

void tree::add(int input, node* &current){
  node* n = new node();
  n->data = input;
  n->left = NULL;
  n->right = NULL;
  if(root == NULL){
    root = n;
    cout << "a" << endl;
  }else{
    if(input < current->data){
      if(current->left == NULL){
	current->left = n;
      }else{
	add(input, current->left);
      }
    }else if(input > current->data){
      if(current->right == NULL){
	current->right = n;
      }else{
	add(input, current->right);
      }
    }
  }		  
}

void tree::display(node* root, int space){
  if(root == NULL){
        return;
  }
  space += 5;
  display(root->right, space);
  cout << endl;
  for (int i = 5; i < space; i++){
    cout << " ";
  }
  cout << root->data << "\n";
  display(root->left, space);
}

tree::tree() {
  root = NULL;
}
