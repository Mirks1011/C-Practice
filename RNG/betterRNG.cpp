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

            if(event == 1){
            std::cout<<"YOU WIN BITCOINS! ";
            }

            else if(event >=2 && event <=10){
            std::cout<<"YOU WIN RTX 5090! "<< '\n';
            }

            else if(event >=11 && event <=20){
            std::cout<<"YOU WIN STEAM GIFT CARD! " << '\n';
            }
            else{
            std::cout<<"YOU WIN NOTHING! " << '\n';
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
