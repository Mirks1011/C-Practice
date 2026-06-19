#include<iostream>
void freeMemory(std::string*& pSimCards){
    if (pSimCards != nullptr)
    {
        delete[]pSimCards;
        pSimCards=nullptr;
        std::cout<<"DELETED SUCCESSFULLY \n";
    }
    else{
        std::cout<<"THERE IS NO CURRENTLY REGISTERED SIMS\n";
    }
    
}