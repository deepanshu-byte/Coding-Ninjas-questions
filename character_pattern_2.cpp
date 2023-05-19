#include<iostream>
using namespace std;


int main(){
    
    int i ,n, j , k ;
    i =1 ;
    cin>>n;
        k=n;

    while(i<=n)
    {
	j=1;
    char ch = 'A' +n-i;
    while(j<=i)
    {	
        
        cout<<ch;
        j++;
        k++;
        ch++;
        
    }
    cout<<endl;
    i++;
    }
}