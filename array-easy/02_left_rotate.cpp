// left rotate  by D places

// brute force apprach
// use a temp array to store the forst d elements then shift the array elements at the front
// and then put the elements of temp at the back
// SC- O(d)
// TC- O(d)+O(d)+O(n-d)=O(n+d)

// TC-O(n*d)
#include<iostream>
using namespace std;

void left_rotate(int n,int a[],int d);

int main()
{
int i,n,d;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
cin>>d;
left_rotate(n,a,d);

}


void left_rotate(int n,int a[],int d){
       d=d%n;
      for(int j=1;j<=d;j++){
          int temp=a[0];
      for(int i=0;i<(n-1);i++)
           a[i]=a[i+1];
           
      a[n-1]=temp;
      }
      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
      }
      
      
    } 


    // optimised approach
    // reverse(a,a+d)
    // reverse(a+d,n)
    // reverse(a,a+n)
    // TC- O(d)+O(n-d)+O(n) = O(2n)
    // SC- O(1)

    /* void left_rotate(int arr[],int n, int d){
              reverse(arr,arr+d);
              reverse(arr+d,arr+n)
              reverse(arr,arr+n)
    } 
       void reverse(int start,int end) {
              int temp;
              while(start<=end){
                    swap(a[start],a[end])
                    start++;
                    end--;
              }
       }   
    
    */