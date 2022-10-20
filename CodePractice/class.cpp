#include <iostream>
using namespace std;

class Counter {
    public:
        Counter();//초기화
        int getCount();//현재의 count값
        void increaseBy(int x);//count 에x값 더하기
    private:
    int count; // 카운터의 값
}; //해당클래스 .h로 헤더파일 선언
// 클래스명::함수명 으로 함수 구체화
Counter::Counter()  //생성자
        {count=0;}
int Counter::getCount()
    {return count;}
void Counter::increaseBy(int x)
    {count+= x;}
//다른 파일에서 헤더파일 구체화 Q= 구체화를 할떄 이렇게 함수밖에 사용해도 괜찮을까? 가장 이상적인 구체화 방법은 무엇일까.
int main (){
Counter ctr;
cout<<ctr.getCount()<<endl;
ctr.increaseBy(3);
cout<<ctr.getCount()<<endl;
ctr.increaseBy(5);
cout<<ctr.getCount()<<endl;
}