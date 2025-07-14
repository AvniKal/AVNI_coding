#include<iostream>
#include<string>
using namespace std;


// takes an element and places it at the correct order

// function prototype
void insertion_sort(int n,int a[]);


int main()
{
int i,n;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
insertion_sort(n,a);
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}


void insertion_sort(int n,int a[]){
     int i,j,temp=0;
     for(i=1;i<n;i++)
     {
        for(j=i;j>0 && a[j-1]>a[j];j--)
        {
            swap(a[j],a[j-1]);
          
            
        }   
     }

}



// time complexity
// O(n to the power 2) - for worst and avg case
// O(n)- for best case

