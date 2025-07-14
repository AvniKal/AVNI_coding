#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> v;
    int n,i,c=0,f=0;
    string a="";
    cin>>n;
    cin.ignore();
    for(i=0;i<n;i++)
    {
        getline(cin,a);
        v.push_back(a);
    }
    a="";
    for(auto j=v.begin();j!=v.end();j++ )
    {
          a=*(j);
          c=0;
          for(i=0;i< a.length();i++)
          {
            if(a[i]=='1')
               c++;
          }
          if(c>=2)
             f++;

    }
    cout<<f;
    return 0;

}