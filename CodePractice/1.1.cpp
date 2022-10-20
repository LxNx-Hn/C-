#include <cstdlib>
#include <iostream>
//이 프로그램은 두정수 X와 Y를 입력받아 그들의 합을 출력한다
int main() {
    int x,y;
    std::cout <<"숫자를 입력해주세요: ";
    std::cin>>x>>y;
    int sum = x+y;
    std::cout<<"합은"<<sum<<std::endl;
    return EXIT_SUCCESS;
}

/*
using namespace std;
int main () {
    int x,y;
    cout<<"input two number";
    cin>>x>>y;
    int sum = x+y;
    cout<<"sum is"<<sum<<endl;
    return 0;
}


*/