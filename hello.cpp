#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    for(int i=1;i<=n;i+=1){
        for(int j=1;j<=i;j+=1){
            cout<<"*";
        }
        cout<<endl;
    }
}