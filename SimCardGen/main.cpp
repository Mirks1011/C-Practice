#include<iostream>
#include"utils.h"
int main(){
    int howmany;
    std::cout<<"ENTER HOW MANY? ";
    std::cin>>howmany;
    std::cin.ignore();
    std::string* pSimCards = new std::string[howmany];
    int menu;
    generateSim(howmany,pSimCards);
    do
    {
        std::cout<<"0 TO EXIT 1 TO VIEW SIMS \n";
        std::cin>>menu;
        switch (menu)
        {
        case 0:{
            freeMemory(pSimCards);
            std::cout<<"EXITING.....\n";
            break;
            }
        case 1:{
            printSim(howmany,pSimCards);
            break;
        } 
        default:{
            std::cout<<"ENTER ONLY VALID:\n";
            break;
        }
    }
    } while (menu != 0);
    
    return 0;
}