#include<iostream>
using namespace std;

int main(){
    int size=9;
    int arr[size]={20,12,15,2,10,1,13,9,5};

    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    int max=arr[size-1];
    int mid=size/2;
    for(int i=size-1;i>mid;i--){
        arr[i]=arr[i-1];
    }
    arr[mid]=max;
    cout<<"The modified array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
