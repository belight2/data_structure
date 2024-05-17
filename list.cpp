#include "list.h"

// TODO: List 클래스 구현 작성

List::List():LinkedList(){}

List::~List(){ }

void List::insert(int index, int data){
  LinkedList::insert(index, data);
}

int List::get(int index){
  return LinkedList::get(index); 
}

void List::remove(int index){
  LinkedList::remove(index);
}

