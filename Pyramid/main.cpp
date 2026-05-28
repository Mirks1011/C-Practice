#include<iostream>
int main(){
    int spaces,rows;
    char symbol = '*';
    std::cout<<"ENTER ROWS: ";
    std::cin>>rows;
    for (int i = 1, k = 0; i <=rows; i++,k=0)
    {
        for (spaces = 1; spaces <=rows-i; spaces++)
        {
            std::cout<<" ";
        }
        while (k!=2*i-1)
        {
            std::cout<<symbol;
            k++;
        }
        std::cout<<'\n';
    }
    
}