#include <string>
#include <iostream>
using std::string;
using namespace std;
int main (){
    string s="to be";
    string t="not"+s;
    string u=s+"or"+t;
    if(s>t)
        cout<<u;
    string name="John";
    int i=name.size();
    char c=s[3];
    s+="smith";
}