//intersecction between two array
#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>a={1,2,2,3,4};
    vector<int>b={3,4,4,5,6,7};

    unordered_set<int> hash;

    for(int i=0;i<a.size();i++){
       hash.insert(a[i]);
    }

    for(int i=0;i<b.size();i++){
       hash.insert(b[i]);
    }

    cout<<"Union is: ";
    for(int x:hash) cout<<x<<" ";

}
