#include <iostream>
using namespace std;
bool evenSum(int a[],int n){
    int sum =0;
    for(int i=0;i<n;i++)
        sum +=a[i];
    return(sum%2)==0;
}

int main () {
    int list[] = {4,2,7,8,5,1};
    bool res = evenSum(list,6); //함수 호출
    if(res) cout << "even\n";
    else cout<<"odd\n";
    return 0;

}