#include<iostream>
void printSim(int howmany,std::string*& pSimCards){
    if (pSimCards!=nullptr){
    std::cout<<"REGISTERED SIMS: \n";
        for (int i = 0; i < howmany; i++)
        {
        std::cout<<"SIM #: "<<i+1<<" ";
        std::cout<<pSimCards[i]<<'\n';
        }
    }
    else{
        std::cout<<"THERE IS NOTHING GENERATED YET! \n";
    }

}