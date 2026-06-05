#include<iostream>
int getDigits(const int num){
return num%10 + (num / 10 % 10);
}