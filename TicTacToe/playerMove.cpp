#include<iostream>
void playerMove(char* spaces, char player){
    int number;
    do
    {
        std::cout<<"ENTER A NUMBER FROM 1-9: " <<'\n';
        std::cin>>number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
        
    } while (!number > 0 || !number<8);
    
}