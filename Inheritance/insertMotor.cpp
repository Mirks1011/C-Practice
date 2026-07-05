#include<iostream>
#include"util.h"
#include<ctime>

std::string generateSKUz(){
    std::string sku;
    sku.clear();
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sku+=char('0' + rand()%10);
        }       
    }
    return sku;
};

void motorcycle::insert(){
std::string brand;
std::string model;
std::string releasedate;
int topspeed;
double weight;
bool use;
std::string fueltype;
std::string sku;
bool hasSidecar;
bool hasABS;
int engineCC;

    std::cout<<"ENTER MOTOR BRAND: \n";
    std::getline(std::cin, brand);
    setBrand(brand);

    std::cout<<"ENTER MOTOR MODEL: \n";
    std::getline(std::cin, model);
    setModel(model);
    
    std::cout<<"ENTER MOTOR RELEASE DATE: \n";
    std::getline(std::cin, releasedate);
    setRelease(releasedate);
    

    std::cout<<"ENTER TOP SPEED (KM/H): \n";
    std::cin>>topspeed;
    setTopSpeed(topspeed); 
    std::cin.ignore();
        
    std::cout<<"ENTER WEIGHT(kg): \n";
    std::cin>>weight;
    setWeight(weight);
    std::cin.ignore(); 
        
    std::cout<<"ENTER 0 for Personal 1 for Commercial Use: \n";
    std::cin>>use;
    setUse(use);
    std::cin.ignore();
        
    std::cout<<"ENTER CAR FUEL TYPE: \n";
    std::getline(std::cin, fueltype);
    setFuelType(fueltype); 
    
    setSKU(generateSKUz());

    std::cout<<"ENTER 0 for For no sidecar 1 for Sidecar: \n";
    std::cin>>hasSidecar;
    setSidecar(hasSidecar);
    std::cin.ignore();

    std::cout<<"ENTER 0 for For no ABS 1 for ABS: \n";
    std::cin>>hasABS;
    sethasABS(hasABS);
    std::cin.ignore();

    std::cout<<"ENTER Motor's CC: \n";
    std::cin>>engineCC;
    setengineCC(engineCC);
    std::cin.ignore();
};