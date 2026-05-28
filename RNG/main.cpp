#include<iostream>
#include<ctime>
int main(){
    /*THIS ARE ONLY PSEUDO-RANDOM
    MEANS RANDOMLY BUT CLOSE TO 100% RANDOM
    */

    //To have random numbers we need to seed it, usually time-date calendar
    srand(time(NULL));

    //THIS ONE GENERATES ALL FROM 0 to 32768
    //int num1=rand();

    //MUCH BETTER RANDOMIZATION it only limits to the % in this case a 6 sided dice
    int num1=rand()%6 +1;
    std::cout<<num1;

    return 0;
}