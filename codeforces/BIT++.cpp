#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> v;
    int i,n,x=0;
    string str="";
    cin>>n;
    cin.ignore();
    for(i=0;i<n;i++)
    {
        getline(cin,str);
        v.push_back(str);
    }
    for(auto j=v.begin();j!=v.end();j++)
    {
        str=*j;
        if(str.find('+')!= (-1))
           x++;
        else 
           x--;

    }
    cout<<x;
    return 0;


}