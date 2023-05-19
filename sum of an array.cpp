#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int a;
    int arr[a] , sum= 0;

    cin>>a;
    for(int i =0;i<a;i++)
    {
	cin>>arr[i];
    }
        for(int i =0; i<a;i++)
    {
        sum=sum+arr[i];
        
    }
    cout<<sum<<endl;
    }


