#include <iostream>
using namespace std;
int main(){
const double PI = 3.14159265358979;
const int CUT_OFF[] = {90,80,70,60};
const int N_DAYS =7;
const int N_HOURS = 24*N_DAYS;
int counter[N_HOURS];   //구조체와 클래스 내부에서는 열거형이 정수값을 가지는 상수를 정의하는 또다른 방법을 제공함
//타입에 이름을 연관시키는 구문=typedef
typedef char* BufferPtr;
typedef double Coordinate;
BufferPtr p;//p는 char타입의 포인타
Coordinate x,y;//x,y는 double타입
}