#include <iostream>
#include "laundering.h"
#include <iomanip>
int main(){
    int options;
    double balance = 0;
    do
    {
       std::cout<<"0 to quit, 1 Deposit 2 withdraw, 3 check balance: ";
       std::cin>>options;
       std::cin.clear();
       fflush(stdin);
       switch (options)
       {
       case 0:
        std::cout<<"EXITING............ ";
        break;

       case 1:{
        double deposit;
        std::cout<<"Amount to Deposit: ";
        std::cin>>deposit;
        balance = depositBal(balance,deposit);
        break;
       }

       case 2:{
        double withdraw;
        std::cout<<"Amount to Withdraw: ";
        std::cin>>withdraw;
        balance = withdrawBal(balance,withdraw);
        break;
       }   
       
       case 3:{
        std::cout<<"Total Laundered: " <<balance <<std::setprecision(2)<<std::fixed <<'\n';
        break;
       }
       
       default:{
        std::cout<<"ENTER ONLY VALID " << '\n';
        break;
       }   

       } 
    } while (options !=0);
    
}