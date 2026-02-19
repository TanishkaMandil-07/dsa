//   Sort an Array of 0s, 1s, and 2s: Sort an array consisting of only 0s, 1s, and 2s.


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
     int count0=0;
     int count1=0;
     int count2=0;
     vector<int>res;
     for(int i=0;i<n;i++){
         if(a[i]==0){
             count0++;
         }
         else if(a[i]==1){
             count1++;
         }
         else{
             count2++;
         }
     }
     for(int i=0;i<count0;i++){
         res.push_back(0);
     }
      for(int i=0;i<count1;i++){
         res.push_back(1);
     } for(int i=0;i<count2;i++){
         res.push_back(2);
     }
      for(int i=0;i<res.size();i++){
          cout<<res[i]<<" ";
      }
    

}
