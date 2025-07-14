#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    // When the size of hasp map is greater than 10 to the power 9
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
         cin>> arr[i];
    }

    // precompute or prestorage
    map<int,int> mpp;
    // map<char,int> mpp; // for string hashing
    // unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
          mpp[arr[i]]++;
    }

    for(auto it:mpp){
        cout<< it.first << "->" << it.second<< endl;
    
    }
    
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<< mpp[number]<<endl;
        // fetch
    }
    return 0;

// in all cases time complexity is log(n) for maps
// in case of unordered map the time comlexity is O(1) for best and avg case
// for worst case(rarely) it is O(n) due to internal collisions
// sp prefer unordered maps
// how hashing works(Division method/folding method/mid square method)
// just remember division method
// in unordered maps , keys can only be int, char, string and double (not pair)
}

