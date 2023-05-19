#include<iostream>
using namespace std ;
int main()
{
    int a , j =0  ;
    cin>>a;
    for(int i=0;i<100;i++)
    {   
        if(i%2==0)
        {
            i++;
        }
        else
        {
         j= a/(a+2);   
        }
    }
    cout<<j;
}