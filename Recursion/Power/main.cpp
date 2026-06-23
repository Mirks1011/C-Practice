#include<iostream>
#include"utils.h"
int main(){
    int* num1 = new int;
    int* num2 = new int;
    int* result = new int;
    std::cout<<"ENTER NUM 1: \n";
    std::cin>>*num1;
    std::cin.ignore();
    std::cout<<"ENTER NUM 2: \n";
    std::cin>>*num2;
    std::cout<<"POWER OF IS =: "<<power(*num1,*num2)<<'\n';
    delete num1;
    delete num2;
    num1 = nullptr;
    num2 = nullptr;
    return 0;
}