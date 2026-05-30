#include<iostream>
#include<ctime>
int computerChoice(){
    srand(time(0));
    int computerChoice = rand() % 3 + 1;
    switch (computerChoice){
    case 1:
    return 1;

    case 2:
    return 2;

    case 3:
    return 3;
}
    return 0;
}