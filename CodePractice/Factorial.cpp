#include <iostream>
using namespace std;

int Fact(int n){
    if (n==0) return 1;
    else return n* Fact(n-1);
}

int main (){
int n;
cout<<"정수를 입력하세요"<<endl;
cin>>n;
cout<<n<<"!= "<<Fact(n)<<endl;
return 0;
}