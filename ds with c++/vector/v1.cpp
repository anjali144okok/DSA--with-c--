#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int>v1(5,1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    vector<int>v2={1,2,34} //u can also initailise like this in online compiler
    v.pop_back();
    cout<<v.size()<<endl;
    v.erase(v.begin()+1);
    v.insert(v.begin()+1,100);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    v.clear();
    v[1]=100;}
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it;
    }
    sort(v.begin(),v.end());
    sort(v.rbegin(),v.rend());
    return 0;
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<binary_search(v.begin(),v.end(),54);//output is in 0 or 1
    cout<<find(v.begin(),v.end(),54)-v.begin();//output is index of element if found else it will give size of vector
    cout<<count(v.begin(),v.end(),54);//output is number of times element is
    cout<<lower_bound(v.begin(),v.end(),54)-v.begin();//output is index of first element which is greater than or equal to 54
    cout<<upper_bound(v.begin(),v.end(),54)-v.begin();//output is index