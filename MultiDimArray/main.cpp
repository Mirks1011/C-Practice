#include<iostream>
int main(){

    std::string weapons[][3] = {{"AK","Legendary Sword", "M4A1-S"},
                                {"M1911","M9","Some Knife i found"}};

    int rows = sizeof(weapons)/sizeof(weapons[0]);
    int columns = sizeof(weapons[0])/sizeof(weapons[0][0]);
    std::cout<<"WEAPONS IN THE INVENTORY IS: " << '\n';
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout<<weapons[i][j] << '\n';
        }
    }
    

    return 0;
}