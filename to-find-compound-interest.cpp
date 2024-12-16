#include<iostream>
#include<cmath>
using namespace std;
    double  p, r, t, n;
  compound_interest(double  p,double r,double t,double n) {
    double A = p * pow(1 + r / n, n * t);
    return A;
}
int main(){
    double  p, r, t, n;
    cout<<"enter the principal amount: ";
    cin>>p;
    cout<<"enter the annual interest rate: ";  
    cin>>r;
    cout<<"enter the number of years: ";
    cin>>t;
    cout<<"enter the number of times that interest is compounded per year.: ";
    cin>>n;
    cout<<compound_interest(p,r,t,n);


}