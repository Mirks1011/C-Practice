#include<iostream>
#include "utils.h"
int main(){
    int values[] = {5,3,1,2,7,67,420,69,1337,1011};
    int size = sizeof(values)/sizeof(values[0]);
    bubbleSort(values,size);
    for (int elements:values)
    {
        std::cout<<elements << " ";
    }
    
return 0;
}