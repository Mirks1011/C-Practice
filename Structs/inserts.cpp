#include<iostream>
#include"struct.h"
void inserts(wanted pWanted[], int numz){
    std::cin.ignore();
if (pWanted != nullptr){
    for (int i = 0; i < numz; i++)
    {
        std::cout<<"ENTER NAME: \n";
        std::getline(std::cin,pWanted[i].name);
        std::cout<<"ENTER AGE: \n";
        std::cin>>pWanted[i].age;
        std::cout<<"ENTER 0 FOR NOT ON THE RUN 1 FOR ON THE RUN \n";
        std::cin>>pWanted[i].ontherun;
        std::cin.ignore();
        if (pWanted[i].ontherun == true)
        {
        std::cout<<"ENTER DAYS MISSING: \n";
        std::cin>>pWanted[i].daysmissing;
        std::cin.ignore();
        }
    }
}
else{
        std::cout<<"RESTART THE PROGRAM, THE MEMORY IS ALREADY FREED! \n";
}
    
}

