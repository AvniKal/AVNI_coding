// brute force
// sort and traverse from backwards till a[i]<a[n-1]
// tC- NlogN+N

// better 
// find largest through one loop
// and then sec_largets through other loop
// tC- 2N

// optimised approach
// TC- O(N)
#include<iostream>
using namespace std;

int sec_largest(int n,int a[]);

int main()
{
int i,n,sl=0;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
sl=sec_largest(n,a);
cout<<sl;

}


int sec_largest(int n,int a[]){
    int lar,sl;
    lar=a[0];
    sl=-1;
      for(int i=0;i<n;i++){
        if(a[i]> lar){
            sl=lar;
            lar=a[i];
        }
        else if(a[i]>sl && a[i]<lar)
                sl=a[i];
      }
      return sl;
}