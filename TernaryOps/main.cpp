//Wow, this a neat way to replace if/else statements
#include <iostream>
using std::cout,std::string;

int main(){
int impostor = 0;

/* INSTEAD OF USING IF ELSE WHICH IS A PRETTY LONG WAY JUST USE TERNARY OPS
    if(impostor ==1){
        cout<<"YOU ARE AN IMPOSTOR! ";
    }
    else{
        cout<<"YOU ARE NOT AN IMPOSTOR! ";
    }
*/

//DOES THE JOB DONE BUT SHORTER! Can be used to other datatypes too, strings, boolean, etc.
    impostor ==1? cout<<"YOU ARE AN IMPOSTOR" : cout<<"YOU ARE NOT AN IMPOSTOR";

    return 0;
}