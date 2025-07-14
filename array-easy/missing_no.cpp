// arr=[1,2,4,5]
// n=5
// find the missing number from 1 to n in the array

#include<iostream>
using namespace std;

int missing_no(int n,int a[]);

int main()
{
int i,n,m=0;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
m=missing_no(n,a);
cout<<m;

}
// brute force
// TC (worst case) - O(n)
int missing_no(int n, int a[]){
    int i,j,flag;
    for(i=1;i<n;i++){
        flag=0;
    for(j=0;j<n;j++){
        if(a[j]==i){
            flag=1;
            break;
        }
        
        }
        if(flag==0){
            return i;
        }
    }
}

// better approach
// hashing
// TC- O(n)+O(n)=O(2n)
// SC-O(n)
int missing_no(int n, int a[]){
    int i,j;

    int hash[1000000]={0};
    for(i=1;i<n;i++){
        hash[a[i]]++;
    }
    for(i=0;i<1000000;i++){
         if(hash[i]==0){
              return i;
         }
    }
    return -1;

}


// optimal solution


// method1- sum
// TC- O(n)
// SC- O(1)
int missing_no(int n, int a[]){
int n,s=0;
int sum=(n*(n+1))/2;
for(int i=0;i<n;i++){
    s=s+a[i];
}
return sum-s;
}


// method2- XOR
// TC - O(n)
// better app 
// XOR will not take space greater than 10 to the power 5 i.e greater than the no

int missing_no(int n, int a[]){
int XOR1=0;
int XOR2=0;
int i;

for(i=0;i<n;i++){
    XOR1=(i+1)^XOR1;
    XOR2=XOR2^a[i];
}
return XOR1^XOR2;

}



   

