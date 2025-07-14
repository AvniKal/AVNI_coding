// brute approach
// sort array and lar is a[n-1]
// TC- NlogN+N

// optimised approach
// TC- O(N)
#include<iostream>
using namespace std;

int largest(int n,int a[]);

int main()
{
int i,n,lar=0;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
lar=largest(n,a);
cout<<lar;

}


int largest(int n,int a[]){
    int lar;
    lar=a[0];
      for(int i=0;i<n;i++){
        if(a[i]> lar){
            lar=a[i];
        }
        
      }
      return lar;
}