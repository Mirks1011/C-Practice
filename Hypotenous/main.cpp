#include <iostream>
#include <cmath>
int main(){
    double a;
    double b;
    double c;

    std::cout<<"ENTER A: ";
    std::cin>> a;

    std::cout<<"ENTER B: ";
    std::cin>> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "C is " <<c;
}