#include<iostream>
#include<limits>
#include"utils.h"
int main(){
    int howmany,menu;
    std::cout<<"ENTER HOW MANY ACCOUNTS TO REGISTER: ";
    std::cin>>howmany;
    
    std::string accounts[howmany];
    std::string accountnum[howmany];
    std::string *pAccounts = accounts;
    std::string *pAccountNum = accountnum;
    int size = sizeof(accounts)/sizeof(accounts[0]);
    do
    {
    std::cout<<"0 to quit 1 to Register 2 to View Registered: ";
    std::cin>>menu;
    
    switch (menu)
    {
    case 0:{
    std::cout<<"EXITING!!!! \n ";
    break;
    }

    case 1:{
    InsertCard(howmany,size,pAccounts,pAccountNum);
        break;
    }

    case 2:{
        printRegistered(howmany,size,pAccounts,pAccountNum);   
        break;
    }
        
    
    default:{
        std::cout<<"ENTER ONLY AVAILABLE! \n";
        break;
    }
        
    }
    } while (menu !=0);
    
   
        

    return 0;
}