
#include <iostream>
using namespace std;

int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}
int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int start =0 , end =n-1;
	int mid = (start+end)/2;
    while(start<=end)
    {
		if(input[mid]<val)
    	{
            start = mid ;
    	}
        else if (input[mid]>val)
        {
			end = mid ;
        }
        else if (input[mid]= val)
        {
            return mid ;
        }
        else
        {
        return -1;
        }
    }
}

