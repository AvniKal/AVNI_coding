// union of two sorted arrays where all contains unique elements

// for unique think abt set or maps

#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
int n1,n2;
cin>>n1>>n2;
int a1[n1],a2[n2];

// brute force approach
// TC-(worst case)  - O(n1 logN)+ O(n2 logN)+ O(n1+n2)

set<int> st;
for(int i=0;i<n1;i++)
   st.insert(a1[i]);
for(int i=0;i<n2;i++)
   st.insert(a2[i]);

int ar3[st.size()];  // union
int i=0;
for(auto it:st)
    ar3[i++]=it;

for(int i=0;i< st.size();i++)
     cout<<ar3[i];

// optimised approach
// TC- O(n1+n2)
// Sc- O(n1+n2) 
// we're using this space for returning and not in our algorithm

int i=0,j=0;
int a[n1],b[n2];
vector<int> unionArr;
while(i<n1 && j<n2){
   if(a[i]<=b[j]){
      if(unionArr.size()==0 || unionArr.back()!=a[i]){
           unionArr.push_back(a[i]);
      }
      i++;
   }
   else{
      if(unionArr.size()==0 || unionArr.back()!=b[j]){
           unionArr.push_back(b[j]);
      }
      j++;
   }
   }
   
   while(j<n2){
      if(unionArr.size()==0 || unionArr.back()!=b[j]){
           unionArr.push_back(b[j]);
      }
      j++;
   }

   while(i<n1){
      if(unionArr.size()==0 || unionArr.back()!=a[i]){
           unionArr.push_back(a[i]);
      }
      i++;
   }

}

