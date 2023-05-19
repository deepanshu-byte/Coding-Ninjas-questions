//4444
//333
//22
//1
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
    while(j<=n-i+1)
    {	
        
        cout<<k;
        j++;
        
         
    }
    cout<<endl;
    i++;
    k--;
    }
}


