// TC- O(N)
#include<iostream>
using namespace std;

void check_sorted(int n,int a[]);

int main()
{
int i,n,lar=0;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
check_sorted(n,a);

}


void check_sorted(int n,int a[]){
    int f=0;
    // check for ascending
      for(int i=0;i<(n-1);i++){
        if(a[i]>a[i+1]){
             f=1;
             break;
        }
        
      }
      if(f==0)
          cout<<"sorted";
       else
           cout<<"not sorted";
    }