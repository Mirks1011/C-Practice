#include<iostream>
#include"struct.h"
void print(wanted pWanted[],int numz){
    std::cin.ignore();
if (pWanted != nullptr){
    for (int i = 0; i < numz; i++)
    {
        std::cout<<"NAME: "<<pWanted[i].name<<'\n';
        std::cout<<"AGE: "<<pWanted[i].age<<'\n';
        if (pWanted[i].ontherun == true)
        {
            std::cout<<"IS ON THE RUN FOR: "<<pWanted[i].daysmissing<<" "<<"Days\n";
        }
    }
}
else{
        std::cout<<"RESTART THE PROGRAM, THE MEMORY IS ALREADY FREED! \n";
}   
}