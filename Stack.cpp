#include <stack>
#include <iostream>
using namespace std;
using std::stack;
stack<int> myStack;



int main() {
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);
    myStack.push(7);

    int a= myStack.size();

    cout<<a<<endl;

for(int i=1;i==a;i++){
    int s=myStack.top();
        myStack.pop();
    cout<<s<<endl;
}

}