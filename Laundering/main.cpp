#include <iostream>
#include "laundering.h"
int main(){
    int options;
    double balance = 0;
    do
    {
       std::cout<<"0 to quit, 1 Deposit 2 withdraw, 3 check balance: ";
       std::cin>>options;
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
        std::cout<<"New Total: " << balance <<'\n';
        break;
       }

       case 2:{
        double withdraw;
        std::cout<<"Amount to Withdraw: ";
        std::cin>>withdraw;
        balance = withdrawBal(balance,withdraw);
        std::cout<<"New Total: " << balance <<'\n';
        break;
       }   
       
       case 3:{
        std::cout<<"Total Laundered: " <<balance <<'\n';
        break;
       }
       
       default:{
        std::cout<<"ENTER ONLY VALID ";
        break;
       }   

       } 
    } while (options !=0);
    
}