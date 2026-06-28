#include<iostream>
#include"utils.h"   
void Account::print(Account account[], int i){
    std::cout<<"NAME: "<<account[i].getAccountName()<<"\n";
        std::cout<<"CARD NUMBER: "<<account[i].getcardNum()<<"\n";
        std::cout<<"ACCOUNT TYPE: "<<account[i].getaccType()<<"\n";
        std::cout<<"PIN: "<<account[i].getPin()<<"\n";
        std::cout<<'\n';
}     
        
    