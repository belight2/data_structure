#include "linked_list.h"
#include <iostream>
// TODO: LinkedList 클래스 구현 작성

// Contructor
LinkedList::LinkedList() : head_(nullptr), size_(0) {}

LinkedList::~LinkedList(){
   Node* cur = head_;
   while(cur != nullptr){
     Node* tmp = cur;
     cur = cur->next_;
     delete tmp;
   }
}

void LinkedList::insert(int index, int value){
  Node* new_node = new Node(value);
  size_++;
  if(index == 0){
    new_node->next_ = head_;
    head_ = new_node;
    return;
  }
  Node* cur = head_;
  while(index-- > 1) cur = cur->next_;
  new_node->next_ = cur->next_;
  cur->next_ = new_node;
}

int LinkedList::get(int index){
  Node* cur = head_;
  while(index--) cur = cur->next_;
  return cur->value_;
}

void LinkedList::remove(int index){
  size_--;
  if(index == 0){
    Node* erase_node = head_;
    head_ = head_->next_;
    delete erase_node;
    return;
  }
  Node* cur = head_;
  while(index-- > 1) cur = cur->next_;
  Node* erase_node = cur->next_;
  cur->next_ = erase_node->next_;
  delete erase_node;
}

void LinkedList::print(){
  Node* cur = head_;
  while(cur != nullptr){
     std::cout << cur->value_ << ' ';
     cur = cur->next_;
  }
  std::cout << std::endl;
}
