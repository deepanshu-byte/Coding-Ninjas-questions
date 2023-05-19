#include<iostream>
#include<math.h>
using namespace std;   
    
bool checkMember(int n){
    bool ans = false;
	int i = (5*n*n)+4;
    int j = (5*n*n)-4;
    int a = sqrt(i);
    int b = sqrt(j);
    if (a*a==i || b*b==j){
        ans = true;
    }
    return ans;
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
