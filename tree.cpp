#include "tree.h"

tree::tree() {
  head = NULL;
  tail = NULL;
}

tree::~tree() {
  while (head != NULL) {
    node* temp = head;
    head = head->next;
    delete temp;
  }
}

void tree::display() {
  node* current = head;
  while (current != NULL) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}
