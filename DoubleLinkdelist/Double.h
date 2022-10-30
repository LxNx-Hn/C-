#ifndef DOUBLELINKEDLIST
#define DOUBLELINKEDLIST
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
#endif