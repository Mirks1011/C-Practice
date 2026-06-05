#include<iostream>
void printRegistered(const int howmany,const int size,std::string* pAccounts,std::string* pAccountNum){
  std::cout<<"REGISTERED ACCOUNTS: \n";

    for (int i = 0; i < size; i++)
    {
        std::cout<<"ACCOUNT NAME: "<<pAccounts[i] <<" "<< "ACCOUNT NUM:"<<" "<<pAccountNum[i]<<'\n';       
    }
    
}
  