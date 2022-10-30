#include <iostream>
using namespace std;
int main () {

    while(true){
cout<<"진행=1 중지=2   : ";
int m;

cin>>m;
if(m==1){
    cout<<"별의 개수를 입력해주세요: ";
    int n;
    cin>>n;

    int i,j = 0;
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<"*";
        }
        cout<<""<<endl;
    }
}

else if (m==2)
    {cout<<"중단합니다...";
    break;
    }
else{ cout<<"유효한 숫자값을 입력해주세요"<<endl;}
    }
    return 0;

}

/*
int i=0;
int recursionStar (int n){
    if(i=<n)return 1;
    else{
        cout<<"*";
        
    }
}
*/
