#include <iostream>
using namespace std;
int main () {
char ch ='Q';
char* p =&ch;//p는 ch의 주소를 가진다
cout<<*p;    //문자 Q가 출력
ch ='Z';     //ch는 Z값을 가진다
cout <<*p;   //문자 Z가 출력
*p='X';      //ch는 X값을 가진다
cout<<ch;    //문자 X가 출력된다

int *x,y,z; //이것은 int* x;int y;int z와 같다

double f[5];  //double 타입의 배열
int m[10];    //int 타입의 배열
f[4]=2.5;
m[2]=4;
cout<<f[m[2]];  //일단 배열이 선언되면 크기조절은 불가능하다, C++은 실행중 인덱스가 배열을 넘어서는지 확인하지않음
char c[] = {'c','a','t'};
char *point =c;
char *q= &c[0];
cout <<c[2]<<point[2]<<q[2];
}