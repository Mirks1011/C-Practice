#include<iostream>
#include"game.h"
int main(){
    int choice;
    int wins = 0;
    int loss = 0;
    do
    {
    std::cout<<"ENTER 0 TO EXIT 1 FOR ROCK 2 PAPER 3 SCISSORS: "<<'\n';
    std::cin>>choice;
    
    int player = choice;
    std::cout<<"PLAYER CHOOSE: ";
    showChoice(player);
    

    int computer = computerChoice();
    std::cout<<"COMPUTER CHOOSE: ";
    showChoice(computer);

    chooseWinner(player,computer,wins,loss);
    } while (choice !=0);
    return 0;
}
