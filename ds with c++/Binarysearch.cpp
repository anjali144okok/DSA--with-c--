#include<iostream>
using namespace std;
int main(){
    int a[1000];
    int n ;
    cout<<"enter the size of array: ";
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    int s=0; int e=n-1;
    int k;
    cout<<"enter the element to be searched: ";
    cin>>k;
    while(s<=e){
        int m=s+(e-s)/2;
        if(a[m]==k){
            printf("element found at index %d",m);
            break;
        }
        else if(a[m]>k){
            s=m+1;
        }
        else{
            e=m-1;


    }
}
}