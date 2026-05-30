#include<iostream>
void chooseWinner(int userChoice, int computerChoice,int& userWins,int& userLoss){
   if (userChoice !=0)
   {
        switch (userChoice)
    {
    case 1:{
        if (computerChoice == 1)
        {
            std::cout<<"RESULT: "<<"DRAW! " <<  '\n';
            std::cout<<"Total Wins: " << userWins <<" "<< "Total Loss: "<<userLoss <<'\n';
            std::cin.clear();
            fflush(stdin);
        }

       else if (computerChoice == 2)
        {
            std::cout<<"RESULT: "<<"YOU LOSE! " <<  '\n';
            userLoss++;
             std::cout<<"Total Loss: " << userLoss <<" "<< '\n';
            std::cin.clear();
            fflush(stdin);             
        }    

        else if (computerChoice == 3)
        {
            std::cout<<"RESULT: "<<"YOU WON! " <<  '\n';
            userWins++;
            std::cout<<"Total Wins: " << userWins <<" "<< '\n';
            std::cin.clear();
            fflush(stdin);            
        }
        break; 
    }
    case 2:{
            if (computerChoice == 1)
        {
            std::cout<<"RESULT: "<<"YOU WON! " <<  '\n';
            userWins++;
            std::cout<<"Total Wins: " << userWins <<" "<< '\n';
            std::cin.clear();
            fflush(stdin);        
        }

       else if (computerChoice == 2)
        {
            std::cout<<"RESULT: "<<"DRAW! " <<  '\n';
            std::cout<<"Total Wins: " << userWins <<" "<< "Total Loss: "<<userLoss <<'\n';
            std::cin.clear();
            fflush(stdin);
        }    

        else if (computerChoice == 3)
        {
            std::cout<<"RESULT: "<<"YOU LOSE! " <<  '\n';
            userLoss++;
            std::cout<<"Total Loss: " << userLoss<<" " << '\n';
            std::cin.clear();
            fflush(stdin);
        } 
        break;
    }

    case 3:{
            if (computerChoice == 1)
        {
            std::cout<<"RESULT: "<<"YOU LOSE! " <<  '\n';
            userLoss++;
            std::cout<<"Total Loss: " << userLoss<<" " << '\n';
            std::cin.clear();
            fflush(stdin);
        }

       else if (computerChoice == 2)
        {
            std::cout<<"RESULT: "<<"YOU WON! " <<  '\n';
            userWins++;
            std::cout<<"Total Wins: " << userWins <<" "<< '\n';
            std::cin.clear();
            fflush(stdin);
        }    

        else if (computerChoice == 3)
        {
            std::cout<<"RESULT: "<<"DRAW! " <<  '\n';
            std::cout<<"Total Wins: " << userWins <<" "<< "Total Loss: "<<userLoss <<'\n';
            std::cin.clear();
            fflush(stdin);
        } 
        break;
    }

    default:{
        std::cout<<"INSERT VALID! " <<  '\n';
        break;
    }
}
   }
   
}