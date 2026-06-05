#include<iostream>
#include"utils.h"
int getOddValue(std::string credNum){
    int sum = 0;
    for (int i = credNum.size() - 1; i >=0; i-=2)
    {
        sum += getDigits((credNum[i] - '0'));
    }
    
    return sum;
}