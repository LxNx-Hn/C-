#include <stack>
#include <iostream>
using namespace std;
using std::stack;
stack<Save> myStack;
 class Save{
public:
    int num;
    char name;
    Save () {}
    Save (int B,char C){
        num=B,name=C;}
void out() {}
};
void Save::out() {
    cout<<"이름: "<<name <<"나이"<<num<<endl;
}


int main() {
    
    int a;char b;
    cout<<"나이,이름을 입력하세요: ";
    cin>>a;
    cin>>b;
    myStack.push(Save(a,b));
   


    int a= myStack.size();
    cout<<a<<endl;

for(int i=1;i==a;i++){
    int s=myStack.top();
        myStack.pop();
    cout<<s<<endl;
}

}

//type을 정의하는 클래스 제작(이름저장)(숫자저장), 클래서에서의 객체를 스택으로 구현
//헤더파일(클래스) , 해더 구체화 파일, 메인파일 분할해보기