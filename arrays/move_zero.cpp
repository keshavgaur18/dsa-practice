
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            nums[j++]=nums[i];
        }
    }
    while(j<n){
        nums[j++]=0;
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}