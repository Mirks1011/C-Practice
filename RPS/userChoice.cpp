#include <iostream>
int userChoice(){
    int choice;
    do
    {
        std::cout<<"ENTER 0 TO EXIT 1 FOR ROCK 2 PAPER 3 SCISSORS: "<<'\n';
        std::cin>>choice;
    } while (choice !=1 && choice !=2 && choice !=3);
    return choice;
}