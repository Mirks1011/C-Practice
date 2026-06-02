#include <iostream>
int searchArray(std::string weapons[],int size,std::string element){

    for (int i = 0; i < size; i++)
    {
        if (weapons[i] == element)
        {
            return i;
        }
        
    }
    return -1;
}