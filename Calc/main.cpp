#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::ws;

int main(){
    int operation;
    double num1;
    double num2;
    double result;

      do
      {
        cout<< "ENTER WHAT OPERATION: 0 exit, 1 add, 2 sub, 3 mul, 4 div: ";
        cin>> operation;

        switch (operation){
          case 0:
          cout<< "GOODBYE";
          break;

          case 1:
          cout<<"ENTER NUM 1: ";
          cin>>num1; 

          cout<<"ENTER NUM 2: ";
          cin>>num2;  

          result = num1+num2;
          cout<<"RESULT: "<< result <<endl;
          break;

          case 2:
          cout<<"ENTER NUM 1: ";
          cin>>num1; 

          cout<<"ENTER NUM 2: ";
          cin>>num2;  

          result = num1-num2;
          cout<<"RESULT: "<< result <<endl;
          break;

          case 3:
          cout<<"ENTER NUM 1: ";
          cin>>num1; 

          cout<<"ENTER NUM 2: ";
          cin>>num2;  

          result = num1*num2;
          cout<<"RESULT: "<< result <<endl;
          break;

          case 4:
          cout<<"ENTER NUM 1: ";
          cin>>num1; 

          cout<<"ENTER NUM 2: ";
          cin>>num2;  
          if(num2<=0){
            cout<<"CANNOT DIVIDE 0";
          }
          else{
            result = num1/num2;
            cout<<"RESULT: "<< result <<endl;
          }
          break;          

          default:
          cout<<"PLEASE INSERT VALID";
          break;
        }
} while (operation !=0);
    return 0;
}
