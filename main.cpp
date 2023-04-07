#include "tree.h"


int main(){
  tree bst;
  int input;
  cout << bst.root << endl;

  int i = 0;
  while(i < 5){
    cout << "Input:" << endl;
    cin >> input;
    bst.add(input, bst.root);
    
    i++;
  }
  bst.display(bst.root, 0);
  
  return 0;
}
