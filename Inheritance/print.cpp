#include<iostream>
#include"util.h"

void car::print(){
    std::cout<<"REGISTERED CARS: \n";   
        std::cout<<"BRAND: "<<getBrand()<<'\n';
        std::cout<<"MODEL: "<<getModel()<<'\n';
        std::cout<<"RELEASE DATE: "<<getRelease()<<'\n';
        std::cout<<"TOP SPEED: "<<getTopSpeed()<<"KM/H"<<'\n';
        std::cout<<"WEIGHT: "<<getWeight()<<'\n';
        if (getUse() == 1)
        {
            std::cout<<"REGISTERED USE: FOR COMMERCIAL"<<'\n';
        }
        else{
            std::cout<<"REGISTERED USE: PERSONAL"<<'\n';
        }
        std::cout<<"FUEL TYPE: "<<getFuelType()<<'\n';
        std::cout<<"SEATS: "<<getSeaters()<<'\n';
        if (getIsConvertible() == true)
        {
            std::cout<<"CONVERTIBLE: YES"<<'\n';
        }
        else{
            std::cout<<"CONVERTIBLE: NO"<<'\n';
        }
        std::cout<<"HORSEPOWER: "<<getHorsepower()<<"HP"<<'\n';
        std::cout<<"SKU: "<<getSKU()<<'\n';
        
    std::cout<<'\n';
};

void motorcycle::print(){
    std::cout<<"REGISTERED MOTORCYCLES: \n";
        std::cout<<"MOTOR BRAND: "<<getBrand()<<'\n';
        std::cout<<"MOTOR MODEL: "<<getModel()<<'\n';
        std::cout<<"RELEASE DATE: "<<getRelease()<<'\n';
        std::cout<<"WEIGHT: "<<getWeight()<<'\n';
        std::cout<<"TOP SPEED: "<<getTopSpeed()<<"KM/H"<<'\n';
        if (getUse() == 1)
        {
            std::cout<<"THE USE FOR THIS MOTOR: COMMERCIAL\n";
        }
        else{
            std::cout<<"THE USE FOR THIS MOTOR: PERSONAL\n";
        }

        if (getHasSidecar() == 1)
        {
            std::cout<<"HAS SIDECAR: YES\n";
        }
        else{
            std::cout<<"HAS SIDECAR: NO\n";
        }

        if (getHasABS() == 1)
        {
            std::cout<<"MOTORCYCLE HAS ABS: YES\n";
        }
        
        else{
            std::cout<<"MOTORCYCLE HAS ABS: NO\n";
        }
        std::cout<<"MOTORCYCLE'S CC: "<<getEngineCC()<<"CC"<<'\n';       

    std::cout<<'\n';
};