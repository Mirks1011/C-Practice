#include<iostream>
#include<limits>
#include"utils.h"
void registers(std::string*& pCredNum,int size,std::string credNum[]){
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (pCredNum == nullptr)
    {
        std::cout<<"CURRENTLY DOES NOT HAVE ANYTHING STORED! / DOES NOT POINT TO AN ARRAY\n";
    }

    else{           
            for (int i = 0; i < size; i++)
            {
                std::cout<<"ENTER CARD NUMBER FOR #:"<<i+1<<"\n";
                std::getline(std::cin,credNum[i]);
            }            
    }
    destroyPtr(pCredNum);   
}