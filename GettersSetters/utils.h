#include<iostream>
class Account{
    private:
    std::string fName;
    std::string mName;
    std::string lName;
    std::string suffix;
    std::string cardNum;
    std::string acctype = "BASIC";
    int pin;

    public:
    Account(){
     fName = "";
     mName = "";
     lName = "";
     suffix = "";
     cardNum = "";
     acctype = "BASIC";
     pin = 0;
    }

    std::string getAccountName(){
        return fName + " " + mName + " " + lName;
    }

    std::string getcardNum(){
        return cardNum;
    }

    std::string getaccType(){
        return acctype;
    }

    int getPin(){
        return pin;
    }

    void setAccountName(std::string fName,std::string mName,std::string lName){
        this->fName = fName;
        this->mName = mName;
        this->lName = lName;
    }

    void setAccountName(std::string fName,std::string mName,std::string lName,std::string suffix){
        this->fName = fName;
        this->mName = mName;
        this->lName = lName;
        this->suffix = suffix;
    }

    void setCardNum(std::string cardNum){
        this->cardNum = cardNum;
    }

    void setPin(int pin){
        this->pin = pin;
    }

    void setAccType(std::string acctype){
        this->acctype = acctype;
    }

    void insert(Account accounts[], int index);

    void print(Account accounts[], int index);
};