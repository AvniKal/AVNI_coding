#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,k,x,j;
    cin>>t;
    vector<int> l;
    for(i=0;i<t;i++)
    {
        cin>>k>>x;
        vector<int> a(k);

        for(j=0;j<k;j++)
        {
            cin>>a[j];


        }
        vector<int> b;
        b.push_back(a[0]);
        for(j=0;j<=(k-2);j++)
        {
            b.push_back(a[j+1]-a[j]);
        }
        b.push_back(2*(x-a[k-1]));
        l.push_back(*max_element(b.begin(),b.end()));
        
        }
        for(i=0;i<t;i++)
             cout<<l[i]<<endl;

}