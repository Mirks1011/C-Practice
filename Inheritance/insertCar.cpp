#include<iostream>
#include"util.h"
#include<ctime>
std::string sku;
std::string generateSKU(){ 
    sku.clear();
    srand(time(NULL));
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
        {
            sku+=char('0' + rand()%10);
        }
        
        if (i != 3)
        {
            sku+="-";
        }
        
    }
    return sku;
};
    void car::insert(){
    std::string brand;
    std::string model;
    std::string releasedate;
    int topspeed;
    double weight;
    bool use;
    std::string fueltype;
    int seaters;
    bool convertible = false;
    int horsepower;
    int type;

            std::cout<<"ENTER CAR BRAND: \n";
            std::getline(std::cin, brand);
            setBrand(brand);

            std::cout<<"ENTER CAR MODEL: \n";
            std::getline(std::cin, model);
            setModel(model);   

            std::cout<<"ENTER CAR RELEASE DATE: \n";
            std::getline(std::cin, releasedate);
            setRelease(releasedate); 

      
            std::cout<<"ENTER CAR TOP SPEED (KM/H): \n";
            std::cin>>topspeed;
            setTopSpeed(topspeed); 
            
        
            std::cout<<"ENTER CAR WEIGHT(kg): \n";
            std::cin>>weight;
            setWeight(weight);           
             
            std::cout<<"ENTER 0 for Personal 1 for Commercial Use:" <<'\n';
            std::cin>>use;
            setUse(use);
            std::cin.ignore();

            std::cout<<"ENTER CAR FUEL TYPE: \n";
            std::getline(std::cin, fueltype); 
            setFuelType(fueltype);

            setSKU(generateSKU());

            std::cout<<"ENTER CAR SEATS: \n";
            std::cin>>seaters;
            setSeats(seaters); 

            std::cout<<"IS CAR CONVERTIBLE? 0 for no 1 for yes: \n";
            std::cin>>convertible;
            setConvertible(convertible); 
            

            std::cout<<"ENTER HORSEPOWER: \n";
            std::cin>>horsepower;
            setHorsepower(horsepower); 
            std::cin.ignore();            
};



