#include<iostream>
#include<limits>
#include"utils.h"
void printRegistered(std::string*& pCredNum,int size){
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::cout<<"REGISTERED ACCOUNTS: \n" ;
    if (pCredNum !=nullptr)
    {
        for (int i = 0; i < size; i++){
        std::cout<<pCredNum[i]<<'\n';
        }
    }
    else{
        std::cout<<"THE POINTER IS NULL\n";
    }  
}