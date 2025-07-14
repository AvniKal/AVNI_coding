 #include<iostream>
 #include<vector>
 #include<math.h>
 using namespace std;
int main()
{
int t,n,i,j,k,win,m,pos,f=0;
cin>>t;
for(i=1;i<=t;i++){
     cin>>n>>j>>k;

     vector<int> a(n);
     for(int p=0;p<n;p++){
        cin>>a[p];
     }
     
     win=a[j-1];
     pos=j-1;
     for(int p=0;p<n;p++){
        
        if(p==(n-1) && a[p]<win && n!=k){
            m=p;
            a.erase(a.begin()+m);
            n--;  

        }
        
        if(n==k)
           break;
        if(a[p]==win || a[p+1]==win)
            continue;
        
        if(a[p]<= a[p+1])
            m=p;
        else
            m=p+1;
        
        a.erase(a.begin()+m);
        n--;

     }
     f=0;
    for(int p=0;p<n;p++){
        if(win==a[p]){
           f=1;
           break;
        }
    }
    if(f==1)
      cout<<"YES\n";
    else
       cout<<"NO\n";

     }
}

 
