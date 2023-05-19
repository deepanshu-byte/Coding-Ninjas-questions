#include<iostream>
#include<math.h>
using namespace std;   
    
bool checkMember(int n){
      if (n==0){
        return true;
    }
    
    int first = 0;
    int sec = 1;
    while(sec<n){
        int temp = sec;
        sec = sec+first;
        first = temp;
    }
    
    if (sec==n){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}
