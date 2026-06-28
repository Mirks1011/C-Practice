#include<iostream>
#include"utils.h"

int main(){
    int howmany;
    std::cout<<"ENTER HOW MANY ACCOUNTS TO REGS\n";
    std::cin>>howmany;
    std::cin.ignore();
    int menu;
    Account* account = new Account[howmany];
    do{
    std::cout<<"0 to exit: 1 to Insert 2 to view: \n";
    std::cin>>menu;

    switch (menu){

    case 0:{
        delete[]account;
        account = nullptr;
        std::cout<<"MEMORY CLEARED.... EXITING.....\n";
        break;
        }

    case 1:{
        std::cin.ignore();       
        for (int i = 0; i < howmany; i++){
            account[i].insert(account,i);
        }        
        break;
    }

    case 2:{
        std::cin.ignore();
        std::cout<<"REGISTERED ACCOUNTS: \n";
        for (int i = 0; i < howmany; i++){
            account[i].print(account,i);
        }
        
        break;
    }

    default:{
        std::cout<<"ENTER ONLY VALID! \n";
        break;
    }
}
    } while (menu!=0);
    
    return 0;
}