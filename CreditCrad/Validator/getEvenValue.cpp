#include<iostream>
#include"utils.h"
int getEvenValue(std::string credNum){
    int sum = 0;
    for (int i = credNum.size() - 2; i >=0; i-=2)
    {
        sum += getDigits((credNum[i] - '0') * 2);
        
    }
    
    return sum;
}