#ifndef DEQUE_H
#define DEQUE_H
#include <iostream>
#include <string>
class Info{
public:
Info() { }
Info(int a,std::string s) { save(a, s); }

public:
void save(int a,std::string s){age=a;name=s;};
const std::string getName(){return name;};
const int getAge(){return age;};

private:
std::string name;
int age;
};
#endif
