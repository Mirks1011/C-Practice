//WOW THIS IS QUITE BASIC
#include <iostream>
using std::cout;
int main(){

    //2 TYPES OF TYPE CONVERSION, IMPLICIT = AUTO, EXPLICIT MANUALLY SET
    //EXAMPLE OF IMPLICIT

    //The int will automatically truncate the decimal portion and result will be 3 = implicit, automatically converted
    //int pi = 3.14;
    //cout<<pi;
    
    //EXPLICITLY CONVERTING THE DOUBLE TO AN INT 
    double pi = (int)3.14;
    cout<<pi;
    return 0;
}