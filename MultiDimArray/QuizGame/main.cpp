#include<iostream>
int main(){
    std::string questions[] = {"1.) WHAT PL DO I USE RN?", "2.) WHAT IS MY MAIN WebDev PL?", "3.) WHO IS MY FAV IDOL GROUP"};

    std::string options[][3] = {{"A. C++, B.PHP, C.GODOT, D.C#"},
                                {"A. GIT, B.HTML, C.MySQL, D.PHP"},
                                {"A. FranChouChou, B.kessoku band, C.Aqcours, D.TrySail"}};

    char answerKey[] = {'A','D','A'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;
    int total = 3;
    double percent;

    for (int i = 0; i < size; i++)
    {
        std::cout<<questions[i] << '\n';
        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            std::cout<<options[i][j] <<  '\n';
        }
                std::cin>>guess;
            if (guess == answerKey[i])
            {
                std::cout<<"CORRECT! " <<'\n';
                score++;
            }
            else{
                std::cout<<"WORNG: \n";
                std::cout<<"CORRECT: "<<answerKey[i]<<'\n';
            }
        }
    std::cout<<"TOTAL: "  <<score<<"/"<<total<<'\n';
    
}