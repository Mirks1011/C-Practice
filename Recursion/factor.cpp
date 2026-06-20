#include<iostream>
int factor(int num){
    if (num > 1)
    {
        return num * factor(num -1);
    }
    else{
        return 1;
    }
}