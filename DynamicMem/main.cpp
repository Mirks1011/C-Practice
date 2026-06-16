#include<iostream>
#include<algorithm>
int main(){
    int quant;
    std::cout<<"HOW MANY NUMBERS? \n";
    std::cin>>quant;
    int* numz = new int[quant];
    std::cin.ignore();
    for (int i = 0; i < quant; i++)
    {
        std::cout<<"ENTER NUMBER# "<<i+1<<": "<<'\n';
        std::cin>>numz[i];
    }
    std::sort(numz,numz + quant);
    std::cout<<"SORTED NUMBERS HIGHEST TO LOWEST \n";
    for (int i = 0; i < quant; i++)
    {
        std::cout<<numz[i]<<'\n';
    }
    delete[]numz;
    numz = nullptr;  
    return 0;
}