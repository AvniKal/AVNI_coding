#include<iostream> 
#include<set>
#include<unordered_set>
using namespace std;  
int main(){
     //everyting is same as set
     //only stores duplicate element also
     //sorted

    multiset<int> ms;
    ms.insert(1);   // {1}
    ms.insert(1);   // {1,1}
    ms.insert(1);   // {1,1,1}

    //erase element will erase all 1's
    ms.erase(1);

    int cnt= ms.count(1);
    //only a single one erased(first occurence)
    ms.erase(ms.find(1));   //ms.find will give the address
    
    ms.erase(ms.find(1) , ms.find(1)+2);
    //rest all function same as set


    unordered_set<int> st;
    // unique
    //any order
    //all operations are same as set but lower and upper bound functions does not work
    // time complexity O(1) 
    //in worst case which does not happen then O(n)



}