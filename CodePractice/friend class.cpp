#include <iostream>
using namespace std;
class SomeClass{
    private:
        int secret;
    public:
        friend ostream& operator << (ostream& out,const SomeClass& x);/*스트림 출력연산자 cout가 << 연산자를 통하여
  SomeClass의 private멤버에 접근을 허용하게 만드는 연산자 오버로딩 */

};
      ostream& operator <<(ostream& out,const SomeClass& x) 
            {cout<<x.secret;}