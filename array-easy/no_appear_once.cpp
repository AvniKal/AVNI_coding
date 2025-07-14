// arr[]={1,1,2,3,3,4,4}
// find the number which appears once while the others appear twice




#include<iostream>
#include<math.h>
using namespace std;

int no_appear_once(int n,int a[]);

int main()
{
int i,n,m=0;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
m=no_appear_once(n,a);
cout<<m;

}
// brute force
// TC (worst case) - O(n to the power 2)
// SC-O(1)
int no_appear_once(int n, int a[]){
    int i,j,flag,c=0;
    for(i=0;i<n;i++){
        c=0;
    for(j=0;j<n;j++){
        if(a[j]==a[i]){
            c++;
        }
    }
        if(c==1)
           break;
        
        }
        return a[i];
        
    }

    
    // better approach
    // hashing
    // TC-O(2n+x)
    // SC-O(x)
    int no_appear_once(int n, int a[]){
    int i,maxi=0;
    for(i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }

    vector<int> hashh(maxi);
    for(i=0;i<n;i++){
        hashh[a[i]]++;
    }
    for(i=0;i<n;i++){
        if(hashh[a[i]]==1)
            break;
    }
        
        return a[i];
        
    }



    // if the array has neg or very big no's so in that case we  
    // can't use hash
    // use map
    // map<long long, int> mpp;
    // ordered mapp TC- O( n log n)
    // unordered map TC-O(N)  in worst case




    // optimum approach 
    // every other number appears twice
    // think abt XOR
    int no_appear_once(int n, int a[]){
    int i,XOR=0;
    for(i=0;i<n;i++){
       XOR=XOR^a[i];
        }
        return XOR;
        
    }
    // TC- O(n)
