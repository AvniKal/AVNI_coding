#include<iostream> 
using namespace std;  
 
// print nth fibonacci term 
/*  int main()
    {
    int n;
    cin>>n;
    int a=0,b=1,c=0,i;
    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;
}   */

int f(int n)
{
    if(n<=1)
        return n;
    return f(n-1)+f(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);
}
// time complexity (2 to the power n)
