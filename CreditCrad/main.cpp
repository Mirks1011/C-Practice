#include<iostream>
#include"utils.h"
#include<limits>
int main(){
    std::string credit_det,credit_log;
    std::string creditnum,creditnum_log;
    int verified = 0;
    int menu;
    do
    {
    std::cout<<"ENTER 0 TO EXIT 1 TO INSERT CRAD 2 VERIFY CRAD 3 Check Registered: \n";
    std::cin>>menu;
        switch (menu)
        {
        case 0:{
            std::cout<<"EXITING........";
            break;
        }

        case 1:{
        std::cout<<"ENTER CREDIT CARD DETAILS: \n";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(std::cin,credit_det);
        std::cout<<"ENTER CREDIT CARD NUMBER: \n";
        std::getline(std::cin,creditnum);
        break;
        }   

        case 2:{
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            do
            {
            std::cout<<"ENTER CREDIT CARD DETAILS: \n";         
            std::getline(std::cin,credit_log);
            std::cout<<"ENTER CREDIT CARD NUMBER: \n";
            std::getline(std::cin,creditnum_log);
            verifyCard(credit_det,creditnum,credit_log,creditnum_log,verified);
            } while (verified!=1);        
            break;   
        }
        case 3:{
            std::cout<<"CURRENTLY REGISTERED: \n";
            std::cout<<"Details:" <<credit_det <<'\n';
            std::cout<<"Credit Num:" <<creditnum <<'\n';
            break;
        }

        default:{
        std::cout<<"ENTER VALID ONLY! \n";
            break;
        }
            
        }
    } while (menu !=0);

}