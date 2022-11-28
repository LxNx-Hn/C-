#include<string>
using namespace std;
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
    DLinkedList D;
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

