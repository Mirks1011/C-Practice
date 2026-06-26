#include<iostream>
#include"util.h"
int main(){
    std::string brand;
    std::string sku;
    int year;
    int hp;

    std::cout<<"ENTER CAR NAME: \n";
    std::getline(std::cin,brand);

    std::cout<<"ENTER YEAR RELEASED: \n";
    std::cin>>year;
    std::cin.ignore();
    
    std::cout<<"ENTER HORSEPOWER: \n";
    std::cin>>hp;
    cars c(brand,year,hp);
    c.print(brand,year,hp);
    return 0;
}