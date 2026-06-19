#include<iostream>
#include<ctime>
void generateSim(int howmany,std::string*pSimCards){
    for (int i = 0; i < howmany; i++)
    {
        std::string starting = "09";
        for (int j = 0; j < 9; j++)
        {
            starting+=char('0' + rand()%10);
        }
        pSimCards[i] = starting;       
    }    
}