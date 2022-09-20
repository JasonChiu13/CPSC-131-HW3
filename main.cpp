#include <iostream>
#include <utility>
#include <memory>
using namespace std;
//------include headers above------

//finish struct DLLNode using smart pointer
struct DLLNode {
  int data;
  shared_ptr<DLLNode> next;
  shared_ptr<DLLNode> prev;
};
//------end of DLLNode------

int main() {
  //declare a doubly linked list and initialize it to contain value 1-10
  shared_ptr<DLLNode> head = make_shared<DLLNode>();
  head->data = 1;
  head->prev = nullptr;
  head->next = nullptr;

  shared_ptr<DLLNode> curr = head;

  for (int i = 2; i <= 10; i++) {
    shared_ptr<DLLNode> next = make_shared<DLLNode>();
    next->data = i;
    next->next = nullptr;
    next->prev = curr;
    curr->next = next;
    curr = next;
  }
  //------end of declaration and initialization------

  //traverse the list you just declared from head to tail and output data
  shared_ptr<DLLNode> itr = head;
  for (int i = 0; i < 9; i++) {
    cout << itr->data << " ";
    itr = itr->next;
  }
  cout << itr-> data << endl;
  //------end of forward traversal------

  //traverse the list you just declared from tail to head and output data
  for (int i = 0; i < 10; i++) {
    cout << itr->data << " ";
    itr = itr->prev;
  }
  cout << endl;
  //------end of backward traversal------
  return 0;
}
