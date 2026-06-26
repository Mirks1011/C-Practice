#include<iostream>
#include"util.h"
int main(){
    int howmany;
    std::cout<<"HOW MANY? \n";
    std::cin>>howmany;
    std::cin.ignore();

    std::string name;
    int year;
    int hp;
    std::string sku;

    Cars* car = new Cars[howmany];
    for (int i = 0; i < howmany; i++)
    {
        sku.clear();
        std::cout<<"ENTER CAR NAME: \n";
        std::getline(std::cin, name);
        std::cout<<"ENTER YEAR RELEASED: \n";

        std::cin>>year;
        std::cin.ignore();

        std::cout<<"ENTER HORSEPOWER: \n";
        std::cin>>hp;
        std::cin.ignore(); 

        for (int j = 0; j < 16; j++)
        {
           sku+=char('0' + rand()% 10); 
        }
        car[i] = Cars(name,year,hp,sku);
    }
    std::cout<<"CARS REGISTERED: \n";

    for (int i = 0; i < howmany; i++)
    {
        std::cout<<"#:"<<i+1<<'\n';
        car[i].print();
    }

    delete[]car;
    car = nullptr;
    
    return 0;
}