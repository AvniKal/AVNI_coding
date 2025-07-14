// longest subarray with sum k
// subsrray is always contiguous
// part of the array

#include<iostream>
using namespace std;

void sum_k(int n,int a[],int k);

int main()
{
int i,n,m=0,k;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
cin>>k;
sum_k(n,a,k);

}

void sum_k(int n, int a[],int k){
    int i,j,s=0,ind=0;
    for(i=0;i<n;i++){
        if(s<k)
            s=s+a[i];
        if(s>k){
            s=0;
            ind=i+1;
        }
        else
            break;
    }
    for(j=ind;j<i;j++){
        cout<<a[j]<<" ";
    }
}
