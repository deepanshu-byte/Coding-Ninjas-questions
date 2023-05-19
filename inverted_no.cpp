#include<iostream>
using namespace std;


int main(){
 	int i , n , j , k ;
    i =1 ;
    cin>>n;
    while(i<=n)
    {
	j=1;
    k=1;
    while (k<=n-i)
    {
    cout<<" ";
    k++;
    }
    while(j<=i)
    {
	cout<<j+i-1;
    j++;
    }
    j=i-1;
    while(j>=1)
    {
	cout<<j+i-1;
    j--;
    }
    cout<<endl;
    i++;
    }
  
}


