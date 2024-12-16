#include<iostream>
using namespace std;
int main(){
    char n,c,r;
    cout<<"enter shape to find area c for circle and r for rectangle : ";
    cin>>n;
    if(n=='c'){
        int R;
        cout<<"enter radius of circle: ";
        cin>>R;
        double are_cir=3.14*R*R;
        cout<<"area of circle is : "<<are_cir;
    }else{
        int len,bre;
        cout<<"enter length of rectangle: ";
        cin>>len;
        cout<<"enter breadth of rectangle: ";
        cin>>bre;
        double are_rec=len*bre;
        cout<<"area of rectangle is : "<<are_rec;
    }   
}