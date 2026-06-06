#include<iostream>
char checkDraw(char* spaces){
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
        
    }
    std::cout<<"DRAW \n";
    return true;
}