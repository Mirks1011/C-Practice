#include<iostream>
char checkWinner(char* spaces, char computer,char player){
    //HORIZONTAL
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
    spaces[0] == player ? std::cout<<"YOU WIN! \n" : std::cout<<"YOU LOST! \n";
                      
    }

    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
    spaces[3] == player ? std::cout<<"YOU WIN! \n" : std::cout<<"YOU LOST! \n";
                      
    }

    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
    spaces[6] == player ? std::cout<<"YOU WIN! \n" : std::cout<<"YOU LOST! \n";
                      
    }

    //VERTICAL
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
    spaces[0] == player ? std::cout<<"YOU WIN! \n" : std::cout<<"YOU LOST! \n";                    
    }

    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
    spaces[1] == player ? std::cout<<"YOU WIN! \n" : std::cout<<"YOU LOST! \n"; 
                      
    }

    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
    spaces[2] == player ? std::cout<<"YOU WIN! \n" : std::cout<<"YOU LOST! \n";
                      
    }

    //SIDEWAYS
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
    spaces[0] == player ? std::cout<<"YOU WIN! \n" : std::cout<<"YOU LOST! \n";
                      
    }

    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
    spaces[2] == player ? std::cout<<"YOU WIN! \n" : std::cout<<"YOU LOST! \n";
                      
    }
    else{
        return false;
    }
    
    return true;
}