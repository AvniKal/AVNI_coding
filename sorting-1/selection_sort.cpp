#include<iostream>
#include<string>
using namespace std;
int main()
{
// select minimum
// and then swap
int i,j,temp=0,pos=0;;
int a[10];
for(i=0;i<10;i++){
    cin>>a[i];
}
for(i=0;i<9;i++)
{
    pos=i;
    for(j=i;j<10;j++)
    {
        if(a[j]<a[pos])
            pos=j;
    }
    temp=a[i];
    a[i]=a[pos];
    a[pos]=temp;
    // swap(a[j],a[pos])
}
cout<<"in ascending order"<<endl;
for(i=0;i<10;i++){
    cout<<a[i]<<" ";
}

}


// time complexity
// n+(n-1)+(n-2)+(n-3)+.....2+1
// O(n to the power 2)       // both best,avg and worst case