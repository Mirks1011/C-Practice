#include <iostream>
double withdrawBal(double balance, double withdraw){
if (balance < withdraw)
{
    std::cout<<"YOU CANNOT WITHDRAW IF YOU ARE BROKE: " <<'\n';
}
else if (withdraw > balance)
{
    std::cout<<"Not enough balance to make withdrawal: " <<'\n';
}
else{
    balance-=withdraw;
}
    return balance;
}