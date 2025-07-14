// first occurence of the given number in the array

#include<iostream>
using namespace std;

void linear_search(int n,int a[],int d);

int main()
{
int i,n,d;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
cin>>d;
linear_search(n,a,d);

}


void linear_search(int n,int a[],int d){
    int f=0;
    
      for(int i=0;i<n;i++){
        if(a[i]== d){
             f=1;
             break;
        }
        
      }
      if(f==0)
          cout<<"not found";
       else
           cout<<"found";
    }