#include<iostream>
using namespace std;
long long factorial(long long n){
    if (n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main(){
    long long n;
    cout<<"enter any number to find factorial: ";
    cin>>n;
    cout<<factorial(n);
}