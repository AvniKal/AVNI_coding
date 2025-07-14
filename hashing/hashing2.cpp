#include<iostream>
#include<string>
using namespace std;

int main()
{
    // for string hashing
   
    string str;
    cin>> str;
    
    
    // precompute or prestorage
    int hashh[256]={0};   // 256 characters in total we have
    
    for(int i=0;i< str.length();i++){
          hashh[str[i]]+=1;
          // hashh[str[i]-'a']+=1;  // only lower case
    }
    
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<< hashh[c]<<endl;
        // fetch
    }
    return 0;



}

