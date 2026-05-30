#include <iostream>
#include <iomanip>
double depositBal(double balance,double deposit){
    double newBalance;
    if (deposit <= 0)
    {
        std::cout<<"NOT A VALID DEPOSIT: "<<'\n';
        newBalance = balance;
    }

    else{
    newBalance = balance + deposit;
    std::cout<<"New Total: " << newBalance <<std::setprecision(2)<<std::fixed <<'\n';   
    }
    return newBalance;
}