#include<iostream>
using namespace std;

int subs( string input , string output[]){
    if(input.empty()){
        output[0]="";
        return 1;
    }
    string smallstring = input.substr(1);
    int smallOutputSize = subs(smallstring,output);
    for(int i = 0 ; i< smallOutputSize ; i++){
        output[i+ smallOutputSize] = input[0]+output[i];
    }
    return 2* smallOutputSize ; 
}
int main() {
   string input;
   cout<<" please enter the visibility";
   cin>>input;
   string *output = new string [1000];
   int count = subs(input , output);
   for(int i = 0 ; i<count ; i++){
    cout<<output[i]<<endl;
   }
}