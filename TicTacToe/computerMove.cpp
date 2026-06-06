#include<iostream>
#include<ctime>
void computerMove(char* spaces, char computer){
    int num;
    srand(time(NULL));
    while (true)
    {
        num = rand() % 8;
        if (spaces[num] == ' ')
        {
            spaces[num] = computer;
            break;
        }
        
    }
    
}