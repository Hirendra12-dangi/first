#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year to check: ";
    cin>>year;
    if(year%4==0 & year%100!=0 | year%400 == 0 ){
        cout<<"given year is a leap year";
    }else{
        cout<<"given year is not a leap year";
    }
}