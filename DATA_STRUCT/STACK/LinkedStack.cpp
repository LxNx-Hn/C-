#include <string>
using namespace std;

template <typename E>
class SNode{
    private:
        E elem;
        SNode<E>*next;
        friend class SLinkdeList<E>;
};
template <typename E>
class SLinkedList{
    public:
        SLinkedList();
        ~SLinkedList();
        bool empty() const;
        const E& front() const;
        void addFront(const E& e);
        void removeFront();
        private:
            SNode<E>* head;
};


template <typename E>
SLinkedList<E>::SLinkedList()
:head(NULL){}

template <typename E>
bool SLinkedList<E>::empty() const{ return head==NULL; }
template <typename E>
const E& SLinkedList<E>::front() const{return head->elem;}
template <typename E>
SLinkedList<E>::~SLinkedList(){while (!empty()) removeFront();)}
template <typename E>
void SLinkedList<E>::addFront(const E& e){
    SNode<E>* v = new SNode<E>;
    v->elem =e;
    v->next =head;
    head=v;
}
template <typename E>
void SLinkedList<E>::removeFront(){
    SNode<e>*old = head;
    head = old->next;
    delete old;
}

typedef string Elem;

class LinkedStack{
public:
    LinkedStack();
    int size() const;
    bool empty() const;
    const Elem&top() const;
    void push(const Elem& e);
    void pop();
private:
    SLinkedList<Elem> S;
    int n;
};


LinkedStack::LinkedStack()
    :S(),n(0){}
int LinkedStack::size() const{
    return n;
}
bool LinkedStack::empty() const{
    return n ==0;
}
const Elem& LinkedStack::top()const{
    return S.front();
}
void LinkedStack::push(const Elem& e){
    ++n;
    S.addFront(e);
}
void LinkedStack::pop(){
    --n;
    S.removeFront();
}