
#ifndef Queue
#define Queue
#include <list>
#include<iostream>
using namespace std;

template<typename E,typename C= less<E>>
class ListPQ{
    public:
        int size() const;
        bool empty() const;
        void insert(const E& e);
        const E& min() const;
        void removeMin();
    private:
        std::list<E> L;
        C isLess;
};

template<typename E,typename C>
void ListPQ<E,C>::insert(const E& e){
    typename std::list<E>::iterator p;
    p=L.begin();
    while(p!=L.end()&& !isLess(e,*p)) ++p;
    L.insert(p,e);
}
template<typename E,typename C>
const E& ListPQ<E,C>::min() const{
    return L.front();
}   
template<typename E,typename C>
void ListPQ<E,C>::removeMin(){
    L.pop_front();
}
template<typename E,typename C>
int ListPQ<E,C>::size() const{
    return L.size();
}
template<typename E,typename C>
bool ListPQ<E,C>::empty() const{
return L.empty();}

#endif