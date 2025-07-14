// intersection of two sorted arrays
#include<iostream>
#include<set>
#include<array>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
int n1,n2;
cin>>n1>>n2;
int a[n1],b[n2];
vector<int> unionArr;


for(int i=0;i<n1;i++){
    cin>>a[i];
} 
for(int j=0;j<n2;j++){
    cin>>b[j];
}

// brute force approach
// TC-(worst case) O(n1*n2)
for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        if(a[i]==b[j]){
            if(a[i]!=a[i-1] || i==0){
               unionArr.push_back(a[i]);
               break;
        }
    }
       
    }
}
for(int i=0;i< unionArr.size();i++){
    cout<<unionArr[i]<<" ";
}




// optimised approach

/* int i=0,j=0;
int a[n1],b[n2];
vector<int> unionArr;
while(i<n1){
   if(a[i]==b[j]){
      if(unionArr.size()==0 || unionArr.back()!=a[i]){
           unionArr.push_back(a[i]);
      }
      i++;
      j++;
   }
   else{
     i++;
   }
   }
   */
   

}