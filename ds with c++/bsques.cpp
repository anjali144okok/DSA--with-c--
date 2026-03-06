#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n,e,s,m;

    cin>>n;
    int t;
    cin>>t;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    s=0;e=n-1;
    while(s<=e){
        m=s+(e-s)/2;
        if(a[m]==t)
        {
            cout<<"Element found at index "<<m<<endl;
            break;
        }
        else if(a[m]>t){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
}