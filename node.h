#ifndef NODE_H
#define NODE_H

class Node {
  // TODO: Node 클래스 정의 수정할 것. 함수, 변수 추가 불가능
public:
  Node(int value) {
    value_ = value;
    next_ = nullptr;
  }
  // 연결리스트를 friend 클래스로 선언
  friend class LinkedList;
  
private:
  int value_;
  Node *next_;
};

#endif