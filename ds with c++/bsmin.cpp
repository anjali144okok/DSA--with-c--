#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0,e=n-1;
    int min=a[0];
    while(s<=e){
        int m=s+(e-s)/2;
        if(a[m]<min){
            min=a[m];
            e=m-1;
        }
        else{
            s=m+1;
        }
        return min;
}
}