#include<iostream>
using namespace std;


int main(){
    
    int i ,n, j , k ;
    i =1 ;
    cin>>n;
    while(i<=n)
    {
	j=1;
    k=i;
    while(j<=i)
    {	
        char ch = 'A' +k-1;
        cout<<ch;
        j++;
        k++;
        
    }
    cout<<endl;
    i++;
    }
}

