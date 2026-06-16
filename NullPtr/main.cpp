#include<iostream>
#include<ctime>
#include<limits>
#include"utils.h"
int main(){
    int menu;
    int howmany;
    std::cout<<"ENTER HOW MANY TO REGISTER: ";
    std::cin>>howmany;
    std::string credNum[howmany];
    std::string* pCredNum = nullptr;
    int size = sizeof(credNum)/sizeof(credNum[0]);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    do
    {
        std::cout<<"0 TO QUIT 1 TO REGISTER 2 TO VIEW REGISTERED 3 TO CLEAR MEMORY: ";
        std::cin>>menu;
        switch (menu)
        {
        case 0:{
            std::cout<<"EXITING....... \n";
            break;
        }

        case 1:{
            pCredNum = new std::string[size];
            registers(pCredNum,size,credNum);
            break;
        }  
        
        default:{
            std::cout<<"ENTER VALID! \n";
            break;
        }
    }
    } while (menu !=0);
    
    return 0;
}