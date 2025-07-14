// left rotate the array by one place 
// [1,2,3,4,5]
// [2,3,4,5,1]
// TC- O(N)
// SC- O(N)    coz we're using the given array in the algorithm
// the extra space is O(1)


#include<iostream>
using namespace std;

void left_rotate(int n,int a[]);

int main()
{
int i,n,lar=0;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
left_rotate(n,a);

}


void left_rotate(int n,int a[]){
       int last=a[0];
      for(int i=0;i<(n-1);i++)
           a[i]=a[i+1];
           
      a[n-1]=last;
      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
      }
      
    }