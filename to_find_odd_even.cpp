#include<iostream>
using namespace std;
int find(int n){
    if(n%2==0){
        cout<<"entered number is even"<<endl;
    }else{
        cout<<"entered number is odd"<<endl;
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter number to find odd or even: ";
    cin>>n;
    cout<<find(n);
    return 0;
}