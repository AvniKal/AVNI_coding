#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int i,n,k,a;
    cin>>n>>k;
    cin.ignore();
    for(i=1;i<=n;i++)
    {
        cin>>a;
        v.emplace_back(a);
    }
}