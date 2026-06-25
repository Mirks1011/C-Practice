#include<iostream>
#include<ctime>
int main(){
    enum day {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
    int select;
    srand(time(NULL));
    select = rand() % 7;
    switch (select)
    {
    case 0:{
        std::cout<<"DAY SELECTED IS: "<<day::Sunday<<" "<<"Sunday"<<'\n';
        break;
    }

    case 1:{
        std::cout<<"DAY SELECTED IS: "<<day::Monday<<" "<<"Monday"<<'\n';
        break;
    }

    case 2:{
        std::cout<<"DAY SELECTED IS: "<<day::Tuesday<<" "<<"Tuesday"<<'\n';
        break;
    }

    case 3:{
        std::cout<<"DAY SELECTED IS: "<<day::Wednesday<<" "<<"Wednesday"<<'\n';
        break;
    }

    case 4:{
        std::cout<<"DAY SELECTED IS: "<<day::Thursday<<" "<<"Thursday"<<'\n';
        break;
    }

    case 5:{
        std::cout<<"DAY SELECTED IS: "<<day::Friday<<" "<<"Friday"<<'\n';
        break;
    }

    case 6:{
        std::cout<<"DAY SELECTED IS: "<<day::Saturday<<" "<<"Saturday"<<'\n';
        break;
    }

    default:
        std::cout<<"INVALID? I GUESS? \n";
        break;
    }
    return 0;
}