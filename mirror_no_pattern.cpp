#include<iostream>
using namespace std;


int main(){
	int i ,n , j , k ;
    i =1;
    cin>>n;
    while(i<=n)
    {
    k=1;
	while(k<=n-i)
    {
	cout<<" ";
    k++;
    }
    j=1;
    while(j<=i)
    {
	cout<<j;
    j++;
    }
    cout<<endl;
    i++;
    }
}

