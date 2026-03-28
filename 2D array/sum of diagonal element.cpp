// print sum of diagonal elements
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    for(int i=0;i<3;i++){
        sum+=arr[i][i];
    }
    cout<<"Sum of diagonal elements is: "<<sum<<endl;
    return 0;
    int sum2=0;
    int i=0;
    int j=2;
    while(j>=0){
        sum2+=arr[i][j];
        i++;
        j--;
    }
}