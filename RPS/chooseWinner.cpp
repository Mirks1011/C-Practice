#include<iostream>
void chooseWinner(int userChoice, int computerChoice){
    switch (userChoice)
    {
    case 1:{
        if (computerChoice == 1)
        {
            std::cout<<"DRAW! " <<  '\n';
        }

       else if (computerChoice == 2)
        {
            std::cout<<"YOU LOSE! " <<  '\n';
        }    

        else if (computerChoice == 3)
        {
            std::cout<<"YOU WON! " <<  '\n';
        }
        break; 
    }
    case 2:{
            if (computerChoice == 1)
        {
            std::cout<<"YOU WON! " <<  '\n';
        }

       else if (computerChoice == 2)
        {
            std::cout<<"DRAW! " <<  '\n';
        }    

        else if (computerChoice == 3)
        {
            std::cout<<"YOU LOSE! " <<  '\n';
        } 
        break;
    }

    case 3:{
            if (computerChoice == 1)
        {
            std::cout<<"YOU LOSE! " <<  '\n';
        }

       else if (computerChoice == 2)
        {
            std::cout<<"YOU WON! " <<  '\n';
        }    

        else if (computerChoice == 3)
        {
            std::cout<<"DRAW! " <<  '\n';
        } 
        break;
    }

    default:{
        std::cout<<"INSERT VALID! " <<  '\n';
        break;
    }
}
}