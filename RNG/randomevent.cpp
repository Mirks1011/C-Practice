#include<iostream>
#include<ctime>
int main(){

    srand(time(0));
    int coupons, resume;
    do
    {
        std::cout<<"Continue?  0 to no, 1 to yes: ";
        std::cin>>resume;
        switch (resume)
        {
        case 0:
            std::cout<<"Thanks for playing: ";
            break;

        case 1:
        std::cout<<"HOW MANY COUPONS: ";
        std::cin>>coupons;
        for (int i = 0; i < coupons; i++)
        {
        
        int event=rand() % 125 +1;
        switch (event)
        {
        case 1:
            std::cout<<"You won 1 bitcoin: "<<'\n';
            break;

        case 2-10:
            std::cout<<"You won RTX 5090: "<<'\n';
            break;

        case 3-100:
            std::cout<<"You won a $0 Steam Gift Card!"<<'\n';
            break;        

        default:
            std::cout<<"You won nothing: "<<'\n';
            break;
        }
        }
        //END OF GAMBLING CODE
            break;
        default:
        std::cout<<"Not a VALID COMMAND"<<'\n';
            break;
        }
    } while (resume!=0);
    }
