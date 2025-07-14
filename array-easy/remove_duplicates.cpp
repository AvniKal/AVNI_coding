// remove duplicates from a sorted array

// optimised approach
// 2-pointer apprach
#include<iostream>
using namespace std;

void remove_duplicate(int n,int a[]);

int main()
{
int i,n,lar=0;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
remove_duplicate(n,a);

}


void remove_duplicate(int n,int a[]){
   
     int ind=0;
     a[ind]=a[0];
      for(int i=0;i<n;i++){
           if(a[ind]!=a[i]){
            ind++;
            a[ind]=a[i];
           }
      }
      for(int i=0;i<=ind;i++){
        cout<<a[i]<<" ";
      }
      
    }