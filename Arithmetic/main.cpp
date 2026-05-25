#include <iostream>
using std::cout;

int main(){
    /*Arithmetic Operators (+, - , *, /,%)
    Similar to other PLs it follows PEMDAS order
    Parenthesis,Multiply,Divide,Add,Sub
    */

    //Some basic examplezzszszs
    int a = 5;
    int b = 10;

    //cout <<a+b;
    //can be shortened into and still produces 15 as answer
    
    /*can do the same just use different signs 
    a-=10;, a*=10, a/=10
    */
    a+=10;
    //cout <<a;

    //if only adding one you can use ++ usually used in loops

    int c = 5;
    c++;
    //cout<<c;


    //Modulo, idk where this one is used but mostly used for getting remainder
    int d = 5;
    int remainder = d % 2;
    cout << remainder;
    }