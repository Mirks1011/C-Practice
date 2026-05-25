#include <iostream>
//turns out that using namespace std is like using import * in Java so FUCK
using std::string;

//namespaces can be used when u want to use multiple variable versions but still the same name
namespace impostor{
    string sussybaka = "Freaky Fred";
}

namespace impostor2{
    string sussybaka = "Larry";
}

int main(){
    string sussybaka = "null";
    //This version of sussybaka is only what is on the main version only, but if impostor shifts to another use the namespace
    //cout<< sussybaka;

    //The version for the impostor 1 but still the same name, to avoid name conflicts
    //cout << impostor::sussybaka;

    //New impostor is assigned without changing variable name
    std::cout<<impostor2::sussybaka;
    return 0;
}