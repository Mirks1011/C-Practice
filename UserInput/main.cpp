#include <iostream>
using std::cin;
using std::cout;
using std::string;

//WHEN USING COUT WE USE THE >> operator which is insertion operation
//FOR CIN which similar to scanner is java we use the opposite direction << extraction operation

//use getline (cin, <variable name>) if to accept spaces in a string
//When a getline is below we need to clear it using >> cout::ws
int main(){
    string name;
    int age;

    cout<<"INSERT YOUR AGE: ";
    cin >> age;

    cout<<"INSERT YOUR NAME: ";
    getline(cin >> std::ws,name);

    cout<<"YOUR NAME IS: " + name;
    return 0;
}