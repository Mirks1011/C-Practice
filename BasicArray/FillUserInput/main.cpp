#include<iostream>
int main(){
    int howmany;
    std::cout<<"ENTER HOW MANY WEAPONS TO BUY: ";
    std::cin>>howmany;
    std::string weapons[howmany];
    std::cin.ignore();
    int size = sizeof(weapons)/sizeof(weapons[howmany]);
    
    for (int i = 0; i < size; i++)
    {
        std::cout<<"ENTER WHAT WEAPONS TO BUY : " <<'\n';
        std::getline(std::cin,weapons[i]);
    }
    std::cout<<"YOU PURCHASED THE FOLLOWING: \n";
    for (std::string purchased: weapons)
    {
        std::cout<<purchased << '\n';
    }
    
    
    return 0;
}