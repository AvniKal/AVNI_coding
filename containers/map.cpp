#include<iostream> 
#include<map>
   using namespace std;  
   int main(){ 
    // map stores unique key in sorted order  
    // unique keys (eg- roll numbers in a class)
    // values can be same ( eq-names in a class)
    // key can be any data type double,int...
    map<int,int> mpp;
    //map<int,pair<int,int>> mpp;
    //map< pair<int,int>,int> mpp;

    mpp[1]=2;
    mpp.emplace(3,1); //3 is key and 1 is the value
    mpp.insert({2,4});
    // [{1,2},{2,4},{3,1}]

    map< pair<int,int>,int> mpp1;
    mpp1[{2,3}]=10;
    
    for(auto it:mpp)  // it.first is key and it.second is value
    {
        cout<<it.first << " "<< it.second << endl;
    }

    cout<< mpp[1];   // prints 2
    cout<< mpp[5];  //does not exist

    auto it=mpp.find(3); //find returns an iterator
    cout<< it.second ; 

    auto it=mpp.find(5);  // points to after the end mpp.end()

    auto it=mpp.lower_bound(2);  //returns an iterator to the first element that is greater than or equal to the given key
    auto it=mpp.upper_bound(3);
    //erase, swap, size, empty are same 


    /* multimap - 
    can store duplicate keys in sorted order
    everyhting same as map only it can store multiple keys 
    only mpp[key] cannot be used here 
    time complexity O(log n) */

    /* unorderedMap- 
    unique keys
    not sorted, unordered
    same as set and unordered_Set difference
    time complexity O(1) 
    worst case O(n)*/
 }