#include<iostream>
#include"utils.h"
int main(){
    int result = 0;
    std::string credNum;
    std::cout<<"ENTER CARD NUMBER: \n";
    std::cin>>credNum;

    result = getEvenValue(credNum) + getOddValue(credNum);
    if (result % 10 ==0)
    {
        std::cout<<"THE CARD IS VALID! \n";
        
    }
    else{
        std::cout<<"THE CARD IS NOT VALID! \n";
    }
    return 0;
}