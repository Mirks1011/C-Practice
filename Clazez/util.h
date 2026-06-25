#include<iostream>
#include<ctime>
class cars{
   public:
   std::string brand;
   std::string sku;
   int year;
   int hp;
    cars(std::string brand,int year,int hp){
    this->brand = brand;
    this->year = year;
    this->hp = hp;
   }
   cars(std::string brand,std::string sku,int year,int hp){
    this->brand = brand;
    this->sku = sku;
    this->year = year;
    this->hp = hp;
   }
   void print(std::string brand,int year,int hp){
    srand(time(NULL));
    for (int i = 0; i < 16; i++)
    {
        sku+=char('0' + rand()% 9);
    }
    
    std::cout<<"CURRENT BRAND: "<<brand<<'\n';
    std::cout<<"YEAR RELEASED: "<<year<<'\n';
    std::cout<<"HORSEPOWER: "<<hp<<'\n';
    std::cout<<"SKU: "<<sku<<'\n';
   };
};