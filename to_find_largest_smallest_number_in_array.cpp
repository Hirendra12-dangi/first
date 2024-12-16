#include<iostream>
using namespace std;
int smallest_num(int arr[],int size){
    int smallest = arr[0];
    for(int i=0 ; i<size ; i++){
        if(arr[i]<smallest){
           smallest = arr[i];
        }
    }
    return smallest ;
}
int largest_num(int arr[],int size){
    int largest = arr[0];
    for(int i=0 ; i<size ; i++){
        if(arr[i]>largest){
           largest = arr[i];
        }
    }
    return largest ;
}

int main(){
    int arr[]= {4,3,5,2,6,7,10,9,-12,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"smallest number in array is "<<smallest_num(arr,size)<<"\n";
    cout<<"largest number in array is "<<largest_num(arr,size)<<"\n";
    return 0;
}
