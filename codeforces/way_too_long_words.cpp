#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,w;
    cin>>n;
    string str[n],new_str="",a="";
    for(i=0;i<n;i++)
    {
         cin>>str[i];
    }
    for(i=0;i<n;i++)
    {
         a=str[i];
         w=a.length();
         if(w>10)
         {
             new_str= string(1,a[0])+ to_string(w-2) +string(1, a[w-1]);
             cout<< new_str;
             cout<<endl;
         }
         else
            cout<< a<<endl;

    }
    return 0;
}