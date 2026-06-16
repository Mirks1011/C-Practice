#include<iostream>
std::string destroyPtr(std::string*& pCredNum){
    delete[] pCredNum;
    return nullptr;
}