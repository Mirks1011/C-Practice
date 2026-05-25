#include <iostream>
using std::string;
using std::cout;
using std::endl;

//TypeDef used for giving a name to an existing datatypes and renaming it
/*Instead of string name = bla bla we can shorten it to more readable version
 _t at the end used for notation to indicate that it is a typedef
*/
//typedef string text_t;
//typedef int number_t;

//using is similar but works well with templates? Idk what is that rn but has the same syntax and declaration
using text_t = string;
using number_t = int;

int main(){
    text_t name = "John";
    number_t age = 54;

    cout <<name <<endl;
    cout <<age <<endl;
    return 0;
}