#include <iostream>
#include <cmath>

int main(){
    char unit;
    double temp;
    double converted;
    std::cout<<"ENTER A UNIT to Convert: ";
    std::cin>>unit;
    switch (toupper(unit))
    {
    case 'F':
    std::cout<<"ENTER A Farenheight to Convert to C: ";
    std::cin>>temp;
    converted = (temp-32) * (5.0/9.0);
    std::cout<<"THE CONVERTED TEMP IS: " <<converted << "\n";
        break;

    case 'C':
    std::cout<<"ENTER A Celcius to Convert to F: ";
    std::cin>>temp;
    converted = temp * (9/5) + 32;
    std::cout<<"THE CONVERTED TEMP IS: " <<converted << "\n";
        break;
    
    default:
    std::cout<<"ENTER ONLY F/C";
        break;
    }
    
}