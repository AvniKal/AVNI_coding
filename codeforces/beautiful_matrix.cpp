#include<iostream>
#include<utility>
using namespace std;
int main()
{
    int i,j,row=0,col=0;
    int a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
               row=i;
               col=j;
            }
        }
        
    }
   int c=0;
    while(true)
    {
        if(row==2 && col==2)
           break;

        if(row>2)
        {
           swap(a[row][col],a[row-1][col]);
           row--;
           c++;  
         }
        else if(row<2)
        {
           swap(a[row][col],a[row+1][col]);
           row++;
           c++; 
         }

        if(col>2) 
        {
           swap(a[row][col],a[row][col-1]);
           col--;
           c++;
         }
        else if(col<2) 
        {
           swap(a[row][col],a[row][col+1]);
           col++;
           c++; 
         }
        
        
    }

    cout<<c;
}