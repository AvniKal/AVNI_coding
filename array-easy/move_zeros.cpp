// move all zeros to the end of the array

#include<iostream>
#include<vector>
using namespace std;

void move_zeros(int n,int a[]);

int main()
{
int i,n,lar=0;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
move_zeros(n,a);

}

// brute approach
// TC= O(2n)
// SC= O(X) where X is the number of non-zeros
// worst case- SC= O(n) when there are no zeros
/* void move_zeros(int n,int a[]){
     int i=0;
     vector<int> temp;
    while(a[i]!=0 && i<n){
        temp.push_back(a[i]);
        i++;
    }
    for(i=0;i<temp.size();i++){
          a[i]=temp[i];
    }
    for(int i=temp.size();i<n;i++){
        a[i]=0;
    }
      for(int i=0;i<n;i++){
           cout<<a[i]<<" ";
      }
      
    }
    */


    // optimised approach
    // 2- pointer approach
    // TC-o(x)+O(n-x)=O(N)
    // SC - O(1)


    void move_zeros(int n,int a[]){
     int j;
     int i;
     for(i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }

     }
     
     for(int k=j+1;i<n;i++){
        if(a[k]!=0){
            swap(a[j],a[k]);
            j=k;
        }
     }
    
    
      for(int i=0;i<n;i++){
           cout<<a[i]<<" ";
      }
      
    }
    
