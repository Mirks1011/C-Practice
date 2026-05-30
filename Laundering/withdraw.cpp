#include <iostream>
#include <iomanip>
double withdrawBal(double balance, double withdraw){
if (balance < withdraw)
{
    std::cout<<"YOU CANNOT WITHDRAW IF YOU ARE BROKE: " <<'\n';
}
else if (withdraw > balance)
{
    std::cout<<"Not enough balance to make withdrawal: " <<'\n';
}
else if (withdraw <=0){
    std::cout<<"INVALID CUH: " <<'\n';
}
else{
    balance-=withdraw;
     std::cout<<"New Total: " << balance <<std::setprecision(2)<<std::fixed <<'\n';
}
    return balance;
}