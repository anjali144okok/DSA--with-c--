#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows and columns: ";
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout<<"Enter elements of 2D array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"2D array is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    int row = arr.size();
    int col = arr[0].size();
}
