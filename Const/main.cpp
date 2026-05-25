#include <iostream>
using namespace std;

int main(){
    //const, used for constants, read only or not modifyable typeshit

    const double pi = 3.14;
    double radius = 67;
    const double circumference = 2 * pi * radius; 

    cout <<circumference;
    return 0;
}