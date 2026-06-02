#include <iostream>
int main(){
    std::string weapons[4];
    weapons[0] = "HK416";
    weapons[1] = "M1911";
    weapons[2] = "G3SG1";
    weapons[3] = "MP5";
    /*for (std::string i : weapons)
    {
        std::cout<<"WEAPONS AVAILABLE: " <<i << '\n';
    }
    std::cout<<"TOTAL WEAPONS: "<<sizeof(weapons)/sizeof(std::string)<<""<<"\n";
    std::cout<<"TOTAL ALLOCATED BYTES: "<<sizeof(weapons)<<""<<" bytes\n";
    */

    for (int i = 0; i < sizeof(weapons)/sizeof(std::string); i++)
    {
        std::cout<<"TOTAL WEAPONS: "<<weapons[i]<<"\n";
    }
    
    return 0;
}