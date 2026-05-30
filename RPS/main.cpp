#include<iostream>
#include"game.h"
int main(){
    int player = userChoice();
    std::cout<<"PLAYER CHOOSE: ";
    showChoice(player);
    

    int computer = computerChoice();
    std::cout<<"COMPUTER CHOOSE: ";
    showChoice(computer);

    chooseWinner(player,computer);    
    return 0;
}
