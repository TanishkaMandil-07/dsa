//Find the Leader Elements: An element is a leader if it is greater than all elements to its right.

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

    int maxx=INT_MIN;
    vector<int>res;

    for(int i=a.size()-1;i>=0;i--){
        if(a[i] > maxx){
            res.push_back(a[i]);
            maxx=a[i];
        }
    }

    reverse(res.begin(),res.end());

   for(int i=0;i<res.size();i++){
       cout<<"leader elemts are :"<<res[i]<<" "<<endl;
   }
}
