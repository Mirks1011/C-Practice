#include<iostream>
#include"utils.h"
void InsertCard(const int howmany,const int size,std::string*pAccounts,std::string* pAccountNum){
   int valid = 0;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (int i = 0; i < size; i++)
    {
        std::cout<<"ENTER ACCOUNT #:" <<i+1 <<'\n';
        std::getline(std::cin,pAccounts[i]);

        do
        {
        std::cout<<"ENTER CREDIT CARD FOR ACCOUNT #:" <<i+1 <<'\n';
        std::getline(std::cin,pAccountNum[i]);
        verifyValid(valid,pAccountNum[i]);
        } while (valid !=1);
        
    }
}