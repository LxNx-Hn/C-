#include <iostream>
#include<vector>
#include<list>
#include<string>

using namespace std;

class info{
public:
    info() {};
    info(string name): m_name(name) {};
    string getName() {return m_name;}
public:
string m_name;
};
int main(){
    vector<info> v(1);
    v.push_back(info("HARU"));
    v.push_back(info("HAN"));
    cout<<v.size()<<endl;
    cout<<v[1].getName()<<endl;
    cout<<v[2].getName()<<endl;
    //v[5] = info("HHH")

vector<info*> V(2);
info* a=new info("DGU");
V.push_back(a);
a=new info("LOL");
V.push_back(a);
return 0;
}