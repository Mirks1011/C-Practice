#include<iostream>
#include"struct.h"
#include"utils.h"
int main(){
    int numz;
    int menu;
    std::cout<<"HOW MANY WANTED CRIMINALS TODAY?: "<<'\n';
    std::cin>>numz;
    wanted* pWanted = new wanted[numz];
    do
    {
    std::cout<<"0 to quit, 1 to insert 2 to view 3 TO FREE MEMORY: "<<'\n';
    std::cin>>menu;
    switch (menu)
    {
    case 0:{
        delete[]pWanted;
        pWanted = nullptr;
        std::cout<<"MEMORY FREED..... EXITINGG.......";
        break;
    }
    case 1:{
        inserts(pWanted, numz);
        break;
    }
    case 2:{
        std::cout<<"WANTED LIST: \n";
        print(pWanted,numz);
        break;
    }
    default:{
            std::cout<<"ENTER ONLY VALID!"<<'\n';
        break;
    }
}
    } while (menu !=0);
    
}