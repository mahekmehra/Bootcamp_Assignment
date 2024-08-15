#include <bits/stdc++.h>
using namespace std;

int findMissing(int arr[],int n){
    int totalSum=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return (totalSum-sum);
}

bool pairSum(vector<int> v,int size,int target){
    sort(v.begin(),v.end());
    int i=0;
    int j=size-1;
    while(i<j){
        int sum=v[i]+v[j];
        if(sum==target) return true;
        else if(sum<target) i++;
        else j--;
    }
    return false;
}



int main()
{
    int arr[8]={1,2,3,4,6,7,8};
    cout<<"Missing element-> "<<findMissing(arr,8)<<endl;
    vector<int> v={2,7,5,4};
    cout<<"Sum present or not->" <<pairSum(v,4,9)<<endl;
    

    return 0;
}