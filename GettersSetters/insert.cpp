#include<iostream>
#include<ctime>
#include"utils.h"

std::string fName;
std::string mName;
std::string lName;
std::string suffix;
std::string cardNum;
std::string acctype;
std::string accnum = "";
int pin;

std::string setAccountNum(){
srand(time(NULL));   
    accnum.clear();
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            accnum+=char('0'+ rand() % 10);
        }
        
        if (i !=3)
        {
            accnum+="-";
        }       
    }   
    return accnum;
}

void Account::insert(Account accounts[], int index){
    bool suffixed = false;
    bool acctype = false;

    std::cout<<"ENTER FIRST NAME: \n";
    std::getline(std::cin,fName);

    std::cout<<"ENTER MIDDLE NAME: \n";
    std::getline(std::cin,mName);

    std::cout<<"ENTER LAST NAME: \n";
    std::getline(std::cin,lName);

    std::cout<<"DO YOU HAVE A SUFFIX? 0 for false 1 for True\n";
    std::cin>>suffixed;
    std::cin.ignore();

    if (suffixed == true)
    {
        std::cout<<"ENTER SUFFIX: \n";
        std::cin>>suffix;
        accounts[index].setAccountName(fName,mName,lName,suffix);
    }
    else{
        accounts[index].setAccountName(fName,mName,lName);       
    }
    

    std::cout<<"ENTER YOUR PIN: \n";
    std::cin>>pin;
    accounts[index].setPin(pin);


    accounts[index].setCardNum(setAccountNum());
    std::cin.ignore();

    std::cout<<"IS ACCOUNT TYPE BASIC? 0 to yes 1 for advanced: ";
    std::cin>>acctype;
    std::cin.ignore();

    if (acctype != 0)
    {
        accounts[index].setAccType("ADVANCED");
    }
    
}

