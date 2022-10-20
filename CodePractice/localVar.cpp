#include <iostream>
using namespace std;
const int Cat=1; //전역변수 CAT
int main (){
    const int Cat=2;//main함수의 지역변수
    cout<<Cat;//지역변수 2 출력
    return EXIT_SUCCESS;
}
int dog =Cat; //dog=1 전역변수 Cat사용

namespace myglobals
{
 int cat;
 string dog = "bow bow";   
}//namespace 는 타입,클래스,함수보다 더 복잡한 객체들의 정의를 포함가능함
//myglobal::cat = 이름공간 myglobal의 cat에 접근
//using namespace myglobla; = 모든변수 접근
