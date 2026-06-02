#include <iostream>
#include "utils.h"

int main(){
    std::string weapons[] = {"HK416","M1911","BAYONET"};
    int size = sizeof(weapons)/sizeof(weapons[0]);
    std::string element;
    std::cout<<"SEARCH FOR WEAPONS: ";
    std::getline(std::cin,element);
    int index = searchArray(weapons,size,element);

    if (index !=-1)
    {
        std::cout<<"WEAPONS FOUND AT INDEX: " <<index <<'\n';
    }
    else{
        std::cout<<"WEAPON DOES NOT EXIST";
    }
    

    return 0;
}