#include<iostream>
#include<ctime>
class Cars{
    public:
    std::string name;
    int year;
    int hp;
    std::string sku;

    Cars(){
    std::string name = "";
    int year = 0;
    int hp = 0;
    std::string sku = "";
    };

    Cars(std::string name,int year,int hp,std::string sku){
        this->name = name;
        this->year = year;
        this->hp = hp;
        this->sku = sku;
    };

    void print(){
        srand(time(NULL));
            std::cout<<"Car Name: "<<name<<'\n';
            std::cout<<"Car Year Released: "<<year<<'\n';
            std::cout<<"Car Horsepower: "<<hp<<'\n';  
            std::cout<<"SKU: "<<sku<<'\n';  
            std::cout<<'\n';
    };
};