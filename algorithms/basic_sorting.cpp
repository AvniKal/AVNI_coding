#include<iostream> 
#include<algorithm>
#include <vector>
using namespace std;  
int main(){
    int a,n;
    cin>> a>>n;
    vector<int> v;

    sort(a,a+n); //a is the starting iterator and (a+4) is the end 
    sort(v.begin(),v.end());  // for vectors
    sort(a+2,a+4);  
    sort(a,a+n, greater<int>()); // inbuilt comparator automatically sorts in descending order

    
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    // sort is acc to secomd element
    // if secong element is same then sort it
    // acc to the first element but in descending

    /*  sort(a, a+n , comp());
    // {4,1 , {2,1}, {1,2}}
    // comp is a self written boolean comparator

     bool comp(pair<int,int> p1 , pair<int,int> p2)
    {
        if(p1.second < p2.second)
           return true;
        if(p1.second > p2.second)
            return false;
        else 
            if( p1.first> p2.first)
                return true;
            else 
                return false;
    }    */


    string s="123";
    sort(s.begin(),s.end());

    do{
        cout<< s;
    } while( next_permutation(s.begin(),s.end()));
    
    // int maxi=  *max_element(a,a+n);














}