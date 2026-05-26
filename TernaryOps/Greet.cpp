#include<iostream>
#include<cmath>
#include<cctype>
using std::cout,std::cin,std::ws,std::string,std::endl;

int main(){
    char proceed;
    int time;
    string fullname;
do
{
    cout<<"y/Y to proceed n/N to not: ";
    cin>>proceed;

    switch (toupper(proceed))
    {
    case 'Y':
        cout<<"ENTER NAME: ";
        getline(cin>>ws, fullname);

        cout<<"ENTER TIME: ";
        cin>>time;

        time >=11 ? (cout<<"Good Afternoon: " +fullname <<endl) : (cout<<"Good Morning: "+fullname  <<endl);
        break;

    case 'N':
    cout<<"Thanks "<<endl;
    break;
    
    default:
    cout<<"Enter y/n / Y/N only "<<endl;
        break;
    }

} while (toupper(proceed)!='N');
    return 0;
}