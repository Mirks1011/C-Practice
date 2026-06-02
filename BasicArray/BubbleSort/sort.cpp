#include <iostream>
void bubbleSort(int values[],int size){
int temp;
for (int i = 0; i < size-1; i++)
{
    for (int j = 0; j < size-i-1; j++)
    {
        if (values[j]>values[j+1])
        {
            temp = values[j];
            values[j]=values[j+1];
            values[j+1]=temp;
        }
        
    }
    
}

}