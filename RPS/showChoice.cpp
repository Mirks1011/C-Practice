#include<iostream>
void showChoice(int choice){
    switch (choice)
    {
    case 1:{
        std::cout<<"ROCK: " << '\n';
        break;
    }

    case 2:{
        std::cout<<"PAPER: " << '\n';
        break;
    }

    case 3:{
        std::cout<<"SCISSORS: " << '\n';
        break;
    }
    
    }
}