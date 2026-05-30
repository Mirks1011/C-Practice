#include<iostream>
#include"calc.h"
int main(){
    double num1;
    double num2;
    char operation;
    std::cout<<"ENTER Operation: ";
    std::cin>>operation;

    std::cout<<"ENTER NUM1: ";
    std::cin>>num1;

    std::cout<<"ENTER NUM2: ";
    std::cin>>num2;
    calc(num1,operation,num2);
    return 0;
}