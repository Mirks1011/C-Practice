#include<iostream>
#include<ctime>
int main(){

    srand(time(0));
    int coupons, resume;
    int bitcoinchance = 1;
    int pity = 0;
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
            std::cout<<"HOW MANY COUPONS: " << '\n';
            std::cin>>coupons;
            for (int i = 0; i < coupons; i++)
            {
        
            int event=rand() % 125 +1;

            if(event <= bitcoinchance){
            std::cout<<"YOU WIN BITCOINS! " << '\n';
            std::cout<<"Current Pity Reset: "<<pity <<'\n';
            pity==0;
            continue;          
            }

            else if(event >=2 && event <=10){
            std::cout<<"YOU WIN RTX 5090! "<< '\n';
            pity++;
            }

            else if(event >=11 && event <=20){
            std::cout<<"YOU WIN STEAM GIFT CARD! " << '\n';
            pity++;
            }
            else{
            std::cout<<"YOU WIN NOTHING! " << '\n';
            pity++;
            }

            if (pity >=10)
            {
                bitcoinchance = 2;
            }

            if (pity >=20)
            {
                bitcoinchance = 4;
            }

            if (pity >=30)
            {
                bitcoinchance = 6;
            }
            if (pity >=40)
            {
                bitcoinchance = 10;
            }

            if (pity >=50)
            {
                bitcoinchance = 15;
            }

            if (pity >=60)
            {
                event = 1;
                pity  = 0;
                continue;
            }

            if (pity %10 ==0)
            {
                std::cout<<"Current Pity: " << pity << '\n';
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
