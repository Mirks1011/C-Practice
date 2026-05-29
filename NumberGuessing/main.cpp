#include <iostream>
#include <cmath>

int main(){
    int num;
    int attempts = 0;
    int guess;
    srand(time(NULL));
    num = rand() %100 + 1;
    do
    {
        std::cout<<"ENTER YOUR GUESS: ";
        std::cin>>guess;
        if (guess==num)
        {
            std::cout<<"NUMBER IS GUESSED! "<<'\n';
            std::cout<<"NUMBER OF ATTEMPTS TOOK: " <<attempts;
        }
        else if (guess > num)
        {
            std::cout<<"GUESS IS TOO HIGH! "<<'\n';
            attempts++;
        }

        else if (guess < num)
        {
            std::cout<<"GUESS IS TOO LOW! "<<'\n';
            attempts++;
        }

    } while (guess!=num);
    return 0;
}