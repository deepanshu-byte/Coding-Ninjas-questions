#include<iostream>
using namespace std ;

void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    int i = start;
    while(i<=end)
    {
        int j = (i-32)*0.5556;
        
        cout<<i<<'\t'<<j<<endl;
        i=i+step;
    }
}
int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}



