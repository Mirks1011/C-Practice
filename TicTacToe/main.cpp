#include<iostream>
#include"utils.h"
int main(){
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char bot = 'O';
    bool running  = true;
    while (running)
{
        playerMove(spaces,player);
        drawBoard(spaces);
    if (checkWinner(spaces,bot,player)){
            running = false;
            break;
        }
    
    else if(checkDraw(spaces)){
            running = false;
            break;        
    }
    computerMove(spaces,bot);
    drawBoard(spaces);
}     
    return 0;
}