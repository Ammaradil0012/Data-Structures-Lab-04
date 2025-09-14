#include<iostream>
using namespace std;

int main(){
    const int a=10;
    int arr[a];
    cout<<"Enter "<<a<<" elements in the array: ";
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        int minIndex=0;
        for(int j=i+1;j<a;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        } 
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]= temp;
    }
    cout<<"The 4 smallest elements are:";
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }

}