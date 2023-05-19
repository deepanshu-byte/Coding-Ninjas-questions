//print
//1
//12
//123
//1234

#include<iostream>
using namespace std;

int main() {
   int n , i , j , k ;
   cin>>n;
   i=1;
   int val =1;
   while(i<=n)
   {
       int j =1;
       while(j<=i)
       {
           cout<<val;
           j++;
           val++;
       }
       cout<<endl;
       i++;
   } 
}
 