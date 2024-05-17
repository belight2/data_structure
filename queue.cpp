#include "queue.h"

// TODO: Queue 클래스 구현 작성

Queue::Queue():LinkedList(){}

Queue::~Queue(){ }

void Queue::push(int data){ LinkedList::insert(LinkedList::size_, data); }

int Queue::peek(){
  return LinkedList::get(0);
}

int Queue::pop(){
  int data = peek();
  LinkedList::remove(0);
  return data;
}

void Queue::operator+=(int data){
  push(data);
}
