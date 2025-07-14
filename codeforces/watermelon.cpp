#include<iostream>
using namespace std;
int main()
{
    int w,i,f=0;
    cin>>w;
    for(i=2;i<w;i=i+2)
    {
        if((w-i)%2==0)
           {
            cout<<"YES";
            f=1;
            break;
           }
    }
    if(f==0)
      cout<<"NO";
    
}
