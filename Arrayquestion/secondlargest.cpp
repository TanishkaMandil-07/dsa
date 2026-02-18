//find second largest

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int largest = INT_MIN;
    int slargest = INT_MIN;

    for(int i=0;i<n;i++){
        if(a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i] > slargest && a[i] != largest){
            slargest = a[i];
        }
    }

    cout<<"second largest is "<<slargest<<endl;
}
