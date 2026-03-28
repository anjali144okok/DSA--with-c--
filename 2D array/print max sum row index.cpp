// print index of row with maximum sum
#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int maxSum=0;
    int maxRowIndex=0;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            maxRowIndex=i;
        }
    }
    cout<<"Index of row with maximum sum is: "<<maxRowIndex<<endl;
    return 0;
}