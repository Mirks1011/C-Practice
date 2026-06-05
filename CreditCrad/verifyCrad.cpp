#include<iostream>
int verifyCard(const std::string& credit_det, const std::string& creditnum,const std::string& credit_det_log, const std::string& creditnum_log, int& verified){

    if (credit_det_log == credit_det && creditnum == creditnum_log)
    {
        std::cout<<"CREDIT CARD VERIFIED! \n";
        return verified =1;
    }
    else{
        std::cout<<"CREDIT CARD DOES NOT EXISTS! \n";
    }
    return verified = 0;
}