//find minimum and maximum

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>a(n);
    int maximum=0;
    int minimum=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
    maximum=max(maximum,a[i]);
    minimum=min(minimum,a[i]);
    }
    cout<<maximum<<endl;
    cout<<minimum<<endl;
}
