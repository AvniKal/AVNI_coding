#include<iostream>
using namespace std;
int hashh[10000000];
int main()
{
    // for integer hashing
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
         cin>> arr[i];
    }

    // precompute or prestorage
    // int hash[13]={0}; // assuming max element is 13
    for(int i=0;i<n;i++){
          hashh[arr[i]]+=1;
    }
    
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<< hashh[number]<<endl;
        // fetch
    }
    return 0;



}

