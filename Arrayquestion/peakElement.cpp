//  Find Peak Element: A peak element is greater than its neighbors. Find one such element.

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if((i==0||a[i]>a[i-1]) && (i==n-1||a[i]>a[i+1])){
            cout<<a[i];
        }
    }
    

}
