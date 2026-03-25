// Devide the array in two subarrays of equal sum
#include<iostream>
#include<vector>
using namespace std;    
bool equalSum(vector<int>& arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    int prefixSum=0;
    for(int i=0;i<arr.size();i++){
        prefixSum+=arr[i];
        if(prefixSum==sum-prefixSum){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> arr={1,2,3,4,5,5};
    if(equalSum(arr)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}