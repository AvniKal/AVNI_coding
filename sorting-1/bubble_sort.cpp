#include<iostream>
#include<string>
using namespace std;

// function prototype
void bubble_sort(int n,int a[]);


int main()
{
int i,n;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
bubble_sort(n,a);
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}


void bubble_sort(int n,int a[]){
     int i,j,temp=0,didswap=0;
     for(i=0;i<n;i++)
     {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
     }

}

// interview
// time complexity
// (n-1)+(n-2)+(n-3)+(n-4)+.....2+1
//  O(n to the power 2)   - for vg and worst case
// O(n) - for best case
