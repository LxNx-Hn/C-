#include <iostream>
#include <string>
using namespace std;


template <typename E>
class DNode{
private:
    E elem;
    DNode<E>* prev;
    DNode<E>* next;
    friend class DLinkedList;
};
template <typename E>
class DLinkedList{
public:
    DLinkedList();
    ~DLinkedList();
    bool empty() const;
    const E& front() const;
    const E& back() const;
    void addFront(const E& e);
    void addBack(const E& e);
    void removeFront();
    void removeBack();
private:
    DNode* header;
    DNode* trailer;
protected:
    void add(DNode<E>* v,const E& e);
    void remove(DNode<E>* v);
};
template <typename E>
DLinkedList<E>::DLinkedList(){
    header = new DNode;
    trailer= new DNode;
    header->next = trailer;
    trailer ->prev = header;
}
template <typename E>
DLinkedList<E>::~DLinkedList(){
    while(!empty())removeFront();
    delete header;
    delete trailer;
}
template <typename E>
bool DLinkedList<E>::empty()const{
    return(header->next==trailer);}
template <typename E>
const E& DLinkedList<E>::front()const
{return header->next->elem;}
template <typename E>
const E& DLinkedList<E>::back()const
{return trailer->prev->elem;}
template <typename E>
void DLinkedList<E>::add(DNode<E>* v,const E& e)
{
DNode<E>* u = new DNode<E>;
u-> elem=e;
u->next = v;
u->prev = v-prev;
v->prev->next=v->prev = u;}
template <typename E>
void DLinkedList<E>::addFront(const E& e)
{add(header->next, e);}
template <typename E>
void DLinkedList<E>::addBack(const E& e)
{add(trailer, e);}
template <typename E>
void  DLinkedList<E>::remove(DNode<E>* v){
    DNode<E>* u =v->prev;
    DNode<E>* w =v->next;
    u->next =w;
    w->prev = u;
    delete v;
}
template <typename E>
void DLinkedList<E>::removeFront(){
    remove(header->next);
}
template <typename E>
void DLinkedList<E>::removeBack(){
    remove(trailer->prev);
}

typedef string Elem;
class LinkedDeque{
public:
    LinkedDeque();
    int size()const;
    bool empty() const;
    const Elem& front() const;
    const Elem& back() const;
    void insertFront(const Elem& e);
    void insertBack(const Elem& e);
    void removeFront();
    void removeBack();
private:
    DLinkedList<string>  D;
    int n;
};
void LinkedDeque::insertFront(const Elem& e){
    D.addFront(e);
    n++;
}
void LinkedDeque::insertBack(const Elem& e){
    D.addBack(e);
    n++;
}
void LinkedDeque::removeFront(){
    D.removeFront();
    n--;
}
void LinkedDeque::removeBack(){
    D.removeBack();
    n--;
}




typedef string Elem;				// element type
  class DequeStack {				// stack as a deque
  public:
    DequeStack();				// constructor
    int size() const;				// number of elements
    bool empty() const;				// is the stack empty?
    const Elem& top() const ;	// the top element
    void push(const Elem& e);			// push element onto stack
    void pop() ;		// pop the stack
  private:
    LinkedDeque D;				// deque of elements
  };

  DequeStack::DequeStack()			// constructor
    : D() { }
  						// number of elements
  int DequeStack::size() const
    { return D.size(); }
  						// is the stack empty?
  bool DequeStack::empty() const
    { return D.empty(); }
  						// the top element
  const Elem& DequeStack::top() const {
    if (empty())
     
    return D.front();
  }
  						// push element onto stack
  void DequeStack::push(const Elem& e)
    { D.insertFront(e); }
  						// pop the stack
  void DequeStack::pop() 
  {

    D.removeFront();
  }