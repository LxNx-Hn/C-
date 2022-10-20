#include <iostream>
using namespace std;

enum MealType{NO_PREP,REGULAR,LOW_FAT,VEGETARIAN};
    struct Passenger{
        string name;
        MealType mealPref;
        bool isFreqFlyer;
        string freqFlyerNo;
    };

int main () {
    
    Passenger pass = {"Haneul",VEGETARIAN,true,"293145"};
    pass.name="HaRu";
    pass.mealPref=REGULAR;
    Passenger *p;
    p=new Passenger; //객체가 NEW로 메모리가 할당 되었으면 반드시 Delete문으로 삭제되어야함
    p->name="Haru";
    p->mealPref=REGULAR;
    p->isFreqFlyer=false;
    p->freqFlyerNo="NONE";
    delete p;
    char *buffer = new char[500];
    buffer[3] = 'a';
    delete [] buffer;

    string author = "하루";
    string&penName = author;
    penName="sky";
    cout<<author;
}
//함수 오버로딩 예시
void print(int x) {
    cout<<x;
}
void print(const Passenger &pass)// <-해당 입력값이 가리키는게 무엇인가
{
    cout<<pass.name<<" "<<pass.mealPref;
    if(pass.isFreqFlyer)
        cout<< " "<<pass.freqFlyerNo;

}