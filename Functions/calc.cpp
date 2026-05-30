#include<iostream>
double calc(double num1,char operation,double num2){
    switch (operation)
    {
    case '+':
        std::cout<<"Result: " << num1+num2 <<'\n';
        break;
    
    case '-':
    std::cout<<"Result: " << num1-num2 <<'\n';
    break;

    case '*':
    std::cout<<"Result: " << num1*num2 <<'\n';
    break;    

    case '/':
    if (num2!=0)
    {
        std::cout<<"Result: " << num1/num2 <<'\n';
    }
    else{
        std::cout<<"Num 2 Cannot be 0"<<'\n';
    }
    
    break;

    default:
    std::cout<<"ENTER VALID OPS"<<'\n';
        break;
    }
    return 0;
}