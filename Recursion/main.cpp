#include<iostream>
#include"utils.h"
int main(){
    int* num = new int;
    std::cout<<"ENTER A NUMBER FOR FACTORIAL: \n";
    std::cin>>*num;
    std::cout<<"FACTORED: "<<factor(*num)<<'\n';
    delete num;
    num = nullptr;
}