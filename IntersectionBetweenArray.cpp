//intersecction between two array
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,2,2,4};
    vector<int>b={2,4,5,6,7};
    vector<int>result;
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     int left=0;
     int right=0;
      while(left<a.size()and right<b.size()){
          if(a[left]==b[right]){
              result.push_back(b[right]);
              right++;
              left++;
          }
          else if(a[left]<b[right]){
              left++;
          }
          else{
              right++;
          }
      }
      cout<<"resulted array will be :";
      for(int i=0;i<result.size();i++){
          cout<<result[i]<<" ";
      }
    
}
