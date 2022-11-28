#include <iostream>
#include <deque>
#include <string>
#include "deque.h"
using std::deque;
using std::string;

int main()
{
    Info info;
    deque <Info> myDeque;
    info.save(17,"Haru");
    myDeque.push_front(info);
    info.save(18,"1234");
    myDeque.push_front(info);
    info.save(19,"2345");
    myDeque.push_front(info);
    info.save(20,"3456");
    myDeque.push_front(info);

    int size=myDeque.size();
    std::cout<<size << std::endl;

    for(auto v : myDeque)
    {
        std::cout << v.getAge() << ".." << v.getName() << std::endl;
    }
}