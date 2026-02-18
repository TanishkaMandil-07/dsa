//merge sorted std::array<T, N> ;

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,3,5,7};
    vector<int>b={2,4,6,8};
    int i=0;
    int j=0;
    vector<int>ans;
    int sum=0;
        while(i<a.size() and j<b.size()){
            if(a[i]<b[j]){
              ans.push_back(a[i]);
              i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i<a.size()){
             ans.push_back(a[i]);
              i++;
        }
        while(j<b.size()){
             ans.push_back(b[j]);
                j++;
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
}
    
