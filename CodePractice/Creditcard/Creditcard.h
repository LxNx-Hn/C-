#ifndef CREDIT_CARD_H
#define DREDIT_CARD_H
#include <string>
#include<iostream>

class CreditCard{
    public:
    CreditCard(const std::string& no,const std::string& nm,int lim,double bal =0); //생성자

std::string getNumber()const {return number;}
std::string getName()const {return name;}
double getBalance()const{return balance;} //왜 const가 항상 선언되는가
int getlimit()const {return limit;}

bool chargelt(double price);
void makePayment(double Payment);
private:
std::string number;
std::string name;
int limit;
double balance;

};


#endif