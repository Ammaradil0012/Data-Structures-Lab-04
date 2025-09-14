#include <iostream>
using namespace std;

int getmax(int a[], int n){
    int m=a[0];
    for(int i=1;i<n;i++) if(a[i]>m) m=a[i];
    return m;
}

void sort(int a[], int n, int e){
    int *out=new int[n];
    int c[10]={0};
    for(int i=0;i<n;i++) c[(a[i]/e)%10]++;
    for(int i=1;i<10;i++) c[i]+=c[i-1];
    for(int i=n-1;i>=0;i--){
        int d=(a[i]/e)%10;
        out[c[d]-1]=a[i];
        c[d]--;
    }
    for(int i=0;i<n;i++){
         a[i]=out[i];
    }
    delete[] out;
}

void radixsort(int a[], int n){
    int m=getmax(a,n);
    for(int e=1; m/e>0; e*=10){
         sort(a,n,e);
    }
}

int main(){
    int n; 
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    radixsort(a,n);
    for(int i=0;i<n;i++){
         cout<<a[i]<<(i+1<n?' ':'\n');
    }
    delete[] a;
    return 0;
}
