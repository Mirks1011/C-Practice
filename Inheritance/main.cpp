#include<iostream>
#include"util.h"
int main(){
    int howmany1;
    int howmany2;
    std::cout<<"ENTER HOW MANY CARS TO PUT: \n";
    std::cin>>howmany1;
    car* cars = new car[howmany1];
    std::cout<<howmany1;
    std::cin.ignore();

    std::cout<<"ENTER HOW MANY MOTORCYCLES TO PUT: \n";
    std::cin>>howmany2;
    motorcycle* motor = new motorcycle[howmany2];
    std::cin.ignore();

    int menu;
    do
    {
        std::cout<<"ENTER 0 TO EXIT 1 TO INSERT 2 TO INSERT MOTORCYCLE 3 to view: \n";
        std::cin>>menu;
        std::cin.ignore();
        switch (menu)
        {
        case 0:{
            delete[] cars;
            cars = nullptr;
            std::cout<<"EXITING.......\n";
            break;
        }
        case 1:{
            for (int i = 0; i < howmany1; i++)
            {
                cars[i].insert();
            }
            
            break;
        }

        case 2:{
            for (int i = 0; i < howmany2; i++)
            {
                motor[i].insert();
            }
                      
            break;
        }

        case 3:{
            for (int i = 0; i < howmany1; i++)
            {
                std::cout<<"CAR#: "<<i+1<<'\n';
                cars[i].print();
            }
            
            for (int j = 0; j < howmany2; j++)
            {
                std::cout<<"MOTOR#: "<<j+1<<'\n';
                motor[j].print();
            }            
            break;
        }
        default:{
            std::cout<<"ENTER ONLY VALID! \n";
            break;
        }
    } 
    } while (menu!=0);
    
    return 0;
}