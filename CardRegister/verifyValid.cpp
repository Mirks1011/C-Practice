#include<iostream>
int getDigits(const int num){
   return num%10 + (num / 10 % 10);
}

int getEvenNumber(std::string& pAccountNum){
    int sum=0;

        for (int i = pAccountNum.size() -'0'; i >=0; i-=2)
        {
            sum += getDigits((pAccountNum.size() -'0')*2);
        }
        return sum;

    
}

int getOddNumber(std::string& pAccountNum){
    int sum=0;
        for (int j = pAccountNum.size() -'0'; j >=0; j-=2)
        {
            sum += getDigits((pAccountNum.size() -'0'));
        }
        return sum;
    }


int verifyValid(int& valid, std::string& pAccountNum){
        int result = getEvenNumber(pAccountNum) + getOddNumber(pAccountNum);
        if (result %10 == 0)
        {
            std::cout<<"CARD IS VALID!  \n";
            return valid =1;
        }
        else{
            std::cout<<"CARD IS NOT VALID!  \n";
            return valid =0;
        }
        
    return valid;
}

